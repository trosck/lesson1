#include <avr/io.h>


/*

int main(void)
{
    DDRD |= 1<<3;
    DDRC |= 1<<4;
	
	TCNT0 = 0;
	TCCR0 = 0x05;
	
    while (true)
    {
		if (TCNT0 == 0)
		{
			PORTD |= 1<<3; // 0x04
			PORTC |= 1<<4; // 0x08
		}
		
		if (TCNT0 == 0b01100100) // 100 0x64
		{
			PORTD = 0b00000000;
			PORTC = 0b00000000;
		}
		
		if (TCNT0 == 0b11001000) // 200 
		{
			TCNT0 = 0; // обнуляем счетчик после 200-го счета ______
		}
    }
}

*/




int main(void)
{
	DDRB = 0b00100001;
	
	TCNT0 = 0;
	TCCR0 = 0x07;
	
	while(true)
	{
		if (TCNT0 == 0b00000001)
		{
			PORTB = 0;
		}
		
		if (TCNT0 == 0b00000010)
		{
			PORTB = 0b00100001;
			TCNT0 = 0;
		}
	}
}
