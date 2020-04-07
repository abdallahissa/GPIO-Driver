/*
 * gpio.h
 *
 * Created: 4/4/2020 6:40:39 PM
 *  Author: Abdallah Issa
 */ 

#include "PConfig.h"
#include "Common.h"

#ifndef GPIO_H_
#define GPIO_H_

typedef enum
{
	LOW,
	HIGH
}LOGIC_STATUS_t;


typedef enum
{
	p1,
	p2,
	p3,
	p4,
	p5,
	p6,
	p7,
	p8
}PIN_t;

typedef enum
{
	A = Base_A,
	B = Base_B,
	C = Base_C,
	D = Base_D
}PORT_t;

typedef enum
{
	INPUT_PORT = 0x00,
	OUTPUT_PORT = 0xff
}PORTDirc_t;

typedef enum
{
	INPUT_PIN,
	OUTPUT_PIN
}PINDirc_t;


void PORT_DIRC(PORT_t port,PORTDirc_t dirc);
void PORT_WRITE(PORT_t port,uint8 val);
uint8 PORT_READ(PORT_t port);

void PIN_DIRC(PORT_t port,PIN_t pin,PINDirc_t dirc);
void PIN_WRITE(PORT_t port,PIN_t pin,LOGIC_STATUS_t val);
uint8 PIN_READ(PORT_t port,PIN_t pin);






#endif /* GPIO_H_ */