#include <reg52.h>
sbit SW=P3^3;
sbit LED1=P1^0;
sbit LED2=P1^1;
sbit LED3=P1^2;

void main(){
	while(1){
		if(SW==0){
			LED1=0;
			LED2=0;
			LED3=0;
		}
		else
			LED1=1;
		  LED2=1;
		  LED3=1;
	}
}