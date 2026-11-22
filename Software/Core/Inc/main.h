/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DRV2_INHA_Pin GPIO_PIN_2
#define DRV2_INHA_GPIO_Port GPIOE
#define DRV2_INHB_Pin GPIO_PIN_3
#define DRV2_INHB_GPIO_Port GPIOE
#define DRV2_INLA_Pin GPIO_PIN_4
#define DRV2_INLA_GPIO_Port GPIOE
#define DRV2_INLB_Pin GPIO_PIN_5
#define DRV2_INLB_GPIO_Port GPIOE
#define DRV2_INLC_Pin GPIO_PIN_6
#define DRV2_INLC_GPIO_Port GPIOE
#define DRV2_ISENSE_A_Pin GPIO_PIN_0
#define DRV2_ISENSE_A_GPIO_Port GPIOC
#define DRV2_ISENSE_B_Pin GPIO_PIN_1
#define DRV2_ISENSE_B_GPIO_Port GPIOC
#define DRV2_ISENSE_C_Pin GPIO_PIN_2
#define DRV2_ISENSE_C_GPIO_Port GPIOC
#define DRV2_INHC_Pin GPIO_PIN_2
#define DRV2_INHC_GPIO_Port GPIOF
#define DRV1_ISENSE_A_Pin GPIO_PIN_0
#define DRV1_ISENSE_A_GPIO_Port GPIOA
#define DRV1_ISENSE_B_Pin GPIO_PIN_1
#define DRV1_ISENSE_B_GPIO_Port GPIOA
#define DRV1_ISENSE_C_Pin GPIO_PIN_2
#define DRV1_ISENSE_C_GPIO_Port GPIOA
#define DRV1_nFAULT_Pin GPIO_PIN_7
#define DRV1_nFAULT_GPIO_Port GPIOE
#define DRV1_nFAULT_EXTI_IRQn EXTI9_5_IRQn
#define DRV1_INLA_Pin GPIO_PIN_8
#define DRV1_INLA_GPIO_Port GPIOE
#define DRV1_INHA_Pin GPIO_PIN_9
#define DRV1_INHA_GPIO_Port GPIOE
#define DRV1_INLB_Pin GPIO_PIN_10
#define DRV1_INLB_GPIO_Port GPIOE
#define DRV1_INHB_Pin GPIO_PIN_11
#define DRV1_INHB_GPIO_Port GPIOE
#define DRV1_INLC_Pin GPIO_PIN_12
#define DRV1_INLC_GPIO_Port GPIOE
#define DRV1_INHC_Pin GPIO_PIN_13
#define DRV1_INHC_GPIO_Port GPIOE
#define DRV1_nSLEEP_Pin GPIO_PIN_14
#define DRV1_nSLEEP_GPIO_Port GPIOE
#define DRV1_DRVOFF_Pin GPIO_PIN_15
#define DRV1_DRVOFF_GPIO_Port GPIOE
#define DRV1_nSCS_Pin GPIO_PIN_11
#define DRV1_nSCS_GPIO_Port GPIOB
#define DRV2_nSCS_Pin GPIO_PIN_12
#define DRV2_nSCS_GPIO_Port GPIOB
#define DRV2_nSLEEP_Pin GPIO_PIN_8
#define DRV2_nSLEEP_GPIO_Port GPIOD
#define DRV2_DRVOFF_Pin GPIO_PIN_9
#define DRV2_DRVOFF_GPIO_Port GPIOD
#define DRV2_nFAULT_Pin GPIO_PIN_10
#define DRV2_nFAULT_GPIO_Port GPIOD
#define DRV2_nFAULT_EXTI_IRQn EXTI15_10_IRQn
#define ENC2_A_Pin GPIO_PIN_12
#define ENC2_A_GPIO_Port GPIOD
#define ENC2_B_Pin GPIO_PIN_13
#define ENC2_B_GPIO_Port GPIOD
#define ENC1_A_Pin GPIO_PIN_4
#define ENC1_A_GPIO_Port GPIOB
#define ENC1_B_Pin GPIO_PIN_5
#define ENC1_B_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
