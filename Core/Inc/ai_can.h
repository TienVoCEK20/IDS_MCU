/*
 * ai_can.h
 *
 *  Created on: Mar 12, 2024
 *      Author: tien.vo
 */

#ifndef INC_AI_CAN_H_
#define INC_AI_CAN_H_

#include "math.h"
#include "main.h"
#include <stdio.h>
#include <string.h>

void AI_can_Init(void);
void AI_can_Run(float *result);
void AI_can_setData(uint16_t* pIn, int Length);

void network_init();
void Can_Network_Preprocess();
void Can_Network_Inference();
void Can_Network_Postprocess();

#endif /* INC_AI_CAN_H_ */
