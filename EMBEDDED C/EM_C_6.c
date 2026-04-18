#include <reg52.h>

sbit SW= P3^3;
sbit LED=P1^0;


void main(){
	LED =0;

	while(1){
		if(SW==0){
			LED =!LED;
		 
			while(SW==0);
		}
	}
}
		