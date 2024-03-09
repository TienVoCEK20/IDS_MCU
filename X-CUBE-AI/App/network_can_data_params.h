/**
  ******************************************************************************
  * @file    network_can_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Sat Mar  9 11:09:53 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef NETWORK_CAN_DATA_PARAMS_H
#define NETWORK_CAN_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_NETWORK_CAN_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_network_can_data_weights_params[1]))
*/

#define AI_NETWORK_CAN_DATA_CONFIG               (NULL)


#define AI_NETWORK_CAN_DATA_ACTIVATIONS_SIZES \
  { 3456, }
#define AI_NETWORK_CAN_DATA_ACTIVATIONS_SIZE     (3456)
#define AI_NETWORK_CAN_DATA_ACTIVATIONS_COUNT    (1)
#define AI_NETWORK_CAN_DATA_ACTIVATION_1_SIZE    (3456)



#define AI_NETWORK_CAN_DATA_WEIGHTS_SIZES \
  { 85768, }
#define AI_NETWORK_CAN_DATA_WEIGHTS_SIZE         (85768)
#define AI_NETWORK_CAN_DATA_WEIGHTS_COUNT        (1)
#define AI_NETWORK_CAN_DATA_WEIGHT_1_SIZE        (85768)



#define AI_NETWORK_CAN_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_network_can_activations_table[1])

extern ai_handle g_network_can_activations_table[1 + 2];



#define AI_NETWORK_CAN_DATA_WEIGHTS_TABLE_GET() \
  (&g_network_can_weights_table[1])

extern ai_handle g_network_can_weights_table[1 + 2];


#endif    /* NETWORK_CAN_DATA_PARAMS_H */
