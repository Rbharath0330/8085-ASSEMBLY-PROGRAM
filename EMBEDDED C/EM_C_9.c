#include <reg52.h>
void delay(){
	int i,j;
	for(i=0;i<200;i++)
	   for(j=0;j<200;j++);
}
void main(){
	unsigned char led=0x80;
	while(1){
	P1=led;
	delay();
	led=led>>1;
	if(led==0x00){
		led=0x80;
	} 
}
	}