#include <avr/io.h>

xxxx xxxx
0000 0100
0		
int main (void) {
//0 -> Entrada
//1 -> Saida

//xxxx xxxx
//xxxx x1xx ->A
//xxxx x111

unsigned char sel,val, masc=0x0F,res,st;
DDRD = 0xF0; 
DDRC = 0xFF;
DDRB = 0xF0;
	for(;;)
	{
	sel = PIND;
	sel = masc&sel;
	switch(sel)
	{
		case 0x01:
		res = PINB&masc;
		break;
	
		case 0x02;
		st = PINC;
		//PORTC = st|0x04;
		PORTC = 1<<2;
		break;4
	
		case 0x03;// masc = 0x07; 
		st = PINC;
		PORTC = 
		//PORTC = (st&!0x04);
		break;
	
	case 0x04;
	break;
	
	case 0x05;
	break;
	
	case 0x06;
	break;
	
	case 0x07;
	break;
	
	default:
	}
	}		
return 0;
}