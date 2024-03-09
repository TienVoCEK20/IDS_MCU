/*
 * ai_can.h
 *
 *  Created on: Mar 9, 2024
 *      Author: kietr
 */

#ifndef INC_AI_CAN_H_
#define INC_AI_CAN_H_

#include <ai_platform.h>
#include "network_can.h"
#include "network_can_data.h"

#include "math.h"

void AI_can_Init(void);
void AI_can_Run(float *result);
void AI_can_setData(float* pIn, int Length);

#endif /* INC_AI_CAN_H_ */
