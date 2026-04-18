#include <reg52.h>

void delay(){
	int i,j;
	for(i=0;i<200;i++){
		for(j=0;j<2000;j++){
		}
	}
}
void main(){
	while(1){
		P1=0XAA;
		delay();
		P1=0X55;
		delay();
	}
}