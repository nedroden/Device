#include <avr/io.h>
#include "init.h"

void adc_init()
{
	ADCSRA |= _BV(ADPS2) | _BV(ADPS1) | _BV(ADPS0); // 128 prescaler
	ADMUX |= _BV(REFS0);
	ADMUX &= ~_BV(REFS1); // 5v mode
	ADCSRA |= _BV(ADEN); // Turn on
}

void port_init()
{
	DDRD = 0xff;
}