#include <reg52.h>

sbit RS = P3^0;
sbit RW = P3^1;
sbit EN = P3^2;

#define LCD P2

void delay(){
	int i,j;
	for(i=0;i<200;i++){
		for(j=0;j<200;j++){
		}
	}
}

void cmd (unsigned char c){
	RS = 0;
	RW = 0;
	LCD = c;
	EN = 1;
	delay();
	EN = 0;
}
	
	void dat (unsigned char d){
			RS = 1;
		  RW = 0;
		  LCD = d;
		  EN = 1;
			delay();
		  EN = 0;
	}
	void main(){
	cmd(0x38);
	cmd(0x0C);
	cmd(0x06);
	cmd(0x01);
	
		cmd(0x80);
		
		dat('B');
		dat('H');
		dat('A');
		dat('R');
		dat('A');
		dat('T');
		dat('H');
		
		cmd(0xC0);
		
		dat('E');
		dat('M');
		dat('B');
		dat('E');
		dat('D');
		dat('D');
		dat('E');
		dat('D');
		
		while(1){
			cmd(0x18);
			delay();
		}
	}