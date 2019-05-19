/*
 * interrupt.c
 *
 *  Created on: 2018/09/23
 *      Author: 髯ｬ蠅難ｽｱ�ｽｰ
 */



#include "stm32f3xx_hal.h"
#include "InterruptIvent/TimerInterruptCallback.hpp"
#include "LowlayerHandel.hpp"
extern LowlayerHandelTypedef *plow;
bool IntFlag=false;
int warikan=0;
 void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
 			{
	 	 	 	if(htim->Instance==TIM6)
	 	 	 		{
 					plow->loca.SendReqest();
 					IntFlag=true;

 					}

 			}



