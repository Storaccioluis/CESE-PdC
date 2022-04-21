/*
 * AHT10_Port.h
 *
 *  Created on: Apr 20, 2022
 *      Author: luis
 */

#ifndef INC_AHT10_PORT_H_
#define INC_AHT10_PORT_H_

#include "AHT10.h"

void AHT10_I2C_Init_Handler(void);
void AHT10_I2C_Send(uint8_t devAdd,uint8_t *pData, uint16_t Size, uint32_t Timeout);
void AHT10_I2C_Receive(uint8_t devAdd,uint8_t *pData, uint16_t Size, uint32_t Timeout);
void AHT10_I2C_Delay(uint32_t ret);
typedef bool bool_t;

#endif /* INC_AHT10_PORT_H_ */
