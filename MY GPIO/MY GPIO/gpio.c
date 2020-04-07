/*
 * gpio.c
 *
 * Created: 4/4/2020 6:40:56 PM
 *  Author: Abdallah Issa
 */ 
#include "gpio.h"


void PORT_DIRC(PORT_t port,PORTDirc_t dirc)
{	
	ACCESS_REG_8BIT((port+DIRC_OFFSET))=dirc;
}

void PORT_WRITE(PORT_t port,uint8 val)
{
	ACCESS_REG_8BIT((port+OUTPUT_OFFSET))=val;
}

uint8 PORT_READ(PORT_t port)
{
	return ACCESS_REG_8BIT((port+INPUT_OFFSET));
}

void PIN_DIRC(PORT_t port,PIN_t pin,PINDirc_t dirc) 
{	
	if(dirc == OUTPUT_PIN)
	{
		SET_BIT((port+DIRC_OFFSET),pin);
	}
	else
	{
		CLEAR_BIT((port+DIRC_OFFSET),pin);
	}
}

void PIN_WRITE(PORT_t port,PIN_t pin,LOGIC_STATUS_t val)
{
	if(val == HIGH)
	{
		SET_BIT((port+OUTPUT_OFFSET),pin);
	} 
	else
	{
		CLEAR_BIT((port+OUTPUT_OFFSET),pin);
	}
}

uint8 PIN_READ(PORT_t port,PIN_t pin)
{
	return BIT_IS_SET((port+INPUT_OFFSET),pin);
}

