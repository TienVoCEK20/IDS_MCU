/*
 * ai_can.c
 *
 *  Created on: Mar 9, 2024
 *      Author: tien.vo
 */

#include "ai_can.h"

// Create the AI network structure
ai_handle can_network;
extern AppConfig_TypeDef App_Config;

float aiCanInData[AI_CAN_NETWORK_IN_1_SIZE];
float aiCanOutData[AI_CAN_NETWORK_OUT_1_SIZE];

ai_u8 activations_can[AI_CAN_NETWORK_DATA_ACTIVATIONS_SIZE];

ai_buffer *ai_can_input;
ai_buffer *ai_can_output;

/* Initialize the AI network */

void network_init()
{
    ai_error err;

    /* Create a local array with the addresses of the activations buffers */
    const ai_handle act_addr[] = {activations_can};
    /* Create an instance of the model */
    err = ai_can_network_create_and_init(&can_network, act_addr, NULL);
    if (err.type != AI_ERROR_NONE)
    {
        return;
    }
    ai_can_input = ai_can_network_inputs_get(can_network, NULL);
    ai_can_output = ai_can_network_outputs_get(can_network, NULL);
}

void Can_Network_Preprocess()
{
    // Parse the payload and store the data in the new buffer
		int i = 0;
    	char* token;

    	token = strtok(App_Config.data, ",");
    	while (token != NULL && i < 9) {
    		App_Config.can_in[i] = (ai_float) atoi(token);
    		i++;
    		token = strtok(NULL, ",");
    	}

    	if (token == NULL) {
    		printf("Error: Invalid buffer format. Expected 9 comma-separated values.\n");
    		return;
    	}

    	sprintf(App_Config.lable, token);
}


void Can_Network_Inference()
{
	    ai_i32 batch;
	    ai_error err;


	    /* Update IO handlers with the data payload */
	    ai_can_input[0].data = AI_HANDLE_PTR(App_Config.can_in);
	    ai_can_output[0].data = AI_HANDLE_PTR(App_Config.can_out);


		int time_start = htim14.Instance->CNT;
		batch = ai_can_network_run(can_network, ai_can_input, ai_can_output);
		if (batch != 1) {
			while(1);
		}
		App_Config.nn_inference_time = htim14.Instance->CNT - time_start;
		if (App_Config.nn_inference_time <= 0)
		{
			App_Config.nn_inference_time = App_Config.prev_time;
		}
		else
		{
			App_Config.prev_time = App_Config.nn_inference_time;
		}
}

void Can_Network_Postprocess()
{
//	  sprintf(App_Config.sent_buffer, "0,0,0,0,0");//"%.2f,%.2f,%ld,%s", App_Config.can_out[0], App_Config.can_out[1], App_Config.nn_inference_time, App_Config.lable);
    sprintf(App_Config.sent_buffer, "%.2f,%.2f,%d,%s", App_Config.can_out[0], App_Config.can_out[1], App_Config.nn_inference_time, App_Config.lable);
}

