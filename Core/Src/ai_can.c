/*
 * ai_can.c
 *
 *  Created on: Mar 9, 2024
 *      Author: tien.vo
 */

#include "ai_can.h"

// Create the AI network structure
ai_handle network_can;

float aiCanInData[AI_NETWORK_CAN_IN_1_SIZE];
float aiCanOutData[AI_NETWORK_CAN_OUT_1_SIZE];

ai_u8 activations_can[AI_NETWORK_CAN_DATA_ACTIVATIONS_SIZE];

ai_buffer *ai_can_input;
ai_buffer *ai_can_output;

/* Initialize the AI network */
void AI_can_Init(void)
{
    ai_error err;

    /* Create a local array with the addresses of the activations buffers */
    const ai_handle act_addr[] = {activations_can};
    /* Create an instance of the model */
    err = ai_network_can_create_and_init(&network_can, act_addr, NULL);
    if (err.type != AI_ERROR_NONE)
    {
        return;
    }
    ai_can_input = ai_network_can_inputs_get(network_can, NULL);
    ai_can_output = ai_network_can_outputs_get(network_can, NULL);
}

// Run the can network over the inputs and save the output
void AI_can_Run(float *result)
{
    ai_i32 batch;
    ai_error err;

    batch = ai_network_can_run(network_can, ai_can_input, ai_can_output);
    if (batch != 1)
    {
        err = ai_network_can_get_error(network_can);
        return;
    }
    else
    {
        result = ((ai_float *)aiCanOutData);
    }
}

void AI_can_setData(uint16_t* pIn, int Length)
{
	for (int i = 0; i < Length; i++)
	{
		aiCanInData[i] = (ai_float) pIn[i];
	}
}

void network_init()
{
    ai_error err;

    /* Create a local array with the addresses of the activations buffers */
    const ai_handle act_addr[] = {activations_can};
    /* Create an instance of the model */
    err = ai_network_can_create_and_init(&network_can, act_addr, NULL);
    if (err.type != AI_ERROR_NONE)
    {
        return;
    }
    ai_can_input = ai_network_can_inputs_get(network_can, NULL);
    ai_can_output = ai_network_can_outputs_get(network_can, NULL);
}

void Can_Network_Preprocess(AppConfig_TypeDef* App_Config_Ptr)
{
    /* Update IO handlers with the data payload */

}


void Can_Network_Inference(AppConfig_TypeDef* App_Config_Ptr)
{
    ai_i32 batch;
    ai_error err;

    float *result;

	uint32_t time_start = htim14.Instance->CNT;
    /* Update IO handlers with the data payload */
    ai_can_input[0].data = AI_HANDLE_PTR(App_Config_Ptr->can_in);
    ai_can_output[0].data = AI_HANDLE_PTR(App_Config_Ptr->can_out);
	batch = ai_network_can_run(network_can, ai_can_input, ai_can_output);
	if (batch != 1) {
		while(1);
	}
	result = ((ai_float *)App_Config_Ptr->can_out);
	App_Config_Ptr->nn_inference_time = htim14.Instance->CNT - time_start;
}

void Can_Network_Postprocess(AppConfig_TypeDef* App_Config_Ptr)
{
    snprintf(App_Config_Ptr->sent_buffer, sizeof(App_Config_Ptr->sent_buffer), "%.2f,%.2f,%ld,%s", App_Config_Ptr->can_out[0], App_Config_Ptr->can_out[1], App_Config_Ptr->nn_inference_time, App_Config_Ptr->lable);
}
/*
 *
twr_rtc_get_datetime(&datetime);

int year = datetime.tm_year + 1900;

// Put all the needed data into as inputs (based on what you trained the model with)
((ai_float *)aiTemperatureInData)[0] = (ai_float)year;
((ai_float *)aiTemperatureInData)[1] = (ai_float)datetime.tm_mon;
((ai_float *)aiTemperatureInData)[2] = (ai_float)datetime.tm_mday;
((ai_float *)aiTemperatureInData)[3] = (ai_float)datetime.tm_hour;
((ai_float *)aiTemperatureInData)[4] = (ai_float)datetime.tm_min;
((ai_float *)aiTemperatureInData)[5] = (ai_float)datetime.tm_sec;
((ai_float *)aiTemperatureInData)[6] = (ai_float)lastTemperature;
((ai_float *)aiTemperatureInData)[7] = (ai_float)lastHumidity;

// Run the model
AI_Temperature_Run(aiTemperatureInData, aiTemperatureOutData);

// Get the output
float predicted_temperature = ((ai_float *)aiTemperatureOutData)[0];
 */

