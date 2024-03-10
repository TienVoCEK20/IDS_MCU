/*
 * ai_can.h
 *
 *  Created on: Mar 9, 2024
 *      Author: tien.vo
 */

#ifndef INC_AI_CAN_H_
#define INC_AI_CAN_H_


#include "main.h"

#include "math.h"

extern AppConfig_TypeDef App_Config;

void AI_can_Init(void);
void AI_can_Run(float *result);
void AI_can_setData(uint16_t* pIn, int Length);

void network_init();
void Can_Network_Preprocess(AppConfig_TypeDef *);
void Can_Network_Inference(AppConfig_TypeDef *);
void Can_Network_Postprocess(AppConfig_TypeDef *);

#endif /* INC_AI_CAN_H_ */
