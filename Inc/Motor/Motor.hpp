/*
 * Motor.hpp
 *
 *  Created on: 2019/05/05
 *      Author: �T��
 */

#ifndef MOTOR_MOTOR_HPP_
#define MOTOR_MOTOR_HPP_
#include "CAN/CAN.hpp"

class Motor
{
	CanBus *canbus;
	unsigned short node_id;
	void DivideData(float data);
	unsigned char tx_buff[8]={0,};
public:
	Motor(CanBus *_canbus,unsigned short _node_id):canbus(_canbus),node_id(_node_id)
	{}
	void SetDuty(float duty);
};

#endif /* MOTOR_MOTOR_HPP_ */
