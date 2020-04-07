/*
 * MY GPIO.c
 *
 * Created: 4/4/2020 2:37:58 PM
 * Author : Abdallah Issa
 */ 
#define F_CPU 1000000UL
#include "gpio.h"
#include <util/delay.h>


int main(void)
{
    PIN_DIRC(A,p1,OUTPUT_PIN);
	PIN_DIRC(B,p3,OUTPUT_PIN);// = PORTA = 0x01;
	PIN_DIRC(C,p2,INPUT_PIN); // = DDRA=0b0000010=0x02;
	PIN_WRITE(C,p2,HIGH); //pull_up resistor
    while(1) 
    {
		if(PIN_READ(C,p2) == 0 )
		{
			PIN_WRITE(A,p1,HIGH);
			_delay_ms(100);
			PIN_WRITE(A,p1,LOW);
			_delay_ms(100);
			PIN_WRITE(B,p3,HIGH);
			_delay_ms(100);
			PIN_WRITE(B,p3,LOW);
			_delay_ms(100);
		} 
		else
		{
			PIN_WRITE(A,p1,LOW);
			PIN_WRITE(B,p3,LOW);
		}
    }
	return 0;
}

