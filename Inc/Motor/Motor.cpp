/*
 * Motor.cpp
 *
 *  Created on: 2019/05/05
 *      Author: �T��
 */
#include "Motor.hpp"
#include "DefineOrder.h"


void Motor::DivideData(float data)
{
	for(int i=0;i<3;i++)//なんで3回だけで良いのか？
	{
		tx_buff[i]=( (unsigned char*)&data)[i];
	}
}

void Motor::SetDuty(float duty)
{
	this->DivideData(duty);//なんでdutyを引数にできるの？bus指定？じゃなかったのか...
	canbus->Send(MOTORE_SET_DUTY<<ORDER_BIT_Pos_S|node_id,4,tx_buff);
}
