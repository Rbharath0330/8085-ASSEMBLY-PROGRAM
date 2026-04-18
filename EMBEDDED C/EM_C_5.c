#include <reg52.h>
sbit SW=P3^3;
sbit LED=P1^0;

void main(){
	P1=0XFF;
	while(1){
		if(SW==0){
			LED=0;
		 }
		else
			LED=1;
	}
}
	