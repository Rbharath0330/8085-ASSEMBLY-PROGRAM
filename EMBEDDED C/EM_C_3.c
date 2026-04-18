#include <reg52.h>

void delay(){
  unsigned	int i,j;
	for(i=0;i<200;i++){
		for(j=0;j<200;j++){
		}
	}
} 

void main(){
	while(1){
	P1=0X00;
	delay();
	P1=0XFF;
		delay();
}
}