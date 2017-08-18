#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL

int main(void)
{

	

		
		DDRA = 0x00;
		DDRB = 0x00;
		DDRC = 0x00;
		DDRD = 0x00;
		
DDRA |= (1<<PD0);
										DDRD |= (1<<PD6);	
			
										PORTA &= ~(1<<PD0);
										PORTD |= (1<<PD6);
									
	_delay_ms(1000000000);
																		

		

		
		
return 0;
}