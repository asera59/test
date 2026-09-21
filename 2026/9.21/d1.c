#include <reg52.h>

#define LED 0x80
#define BUZZER 0xA0 
#define SEG_SEL 0xC0
#define SEG_DAT 0xE0

void main(void)
{
unsigned char i=0;

P2=0x15;

while(1){
P2=(P2&0x1F)|LED;
//	P2=LED;
i=i+1;
}
}