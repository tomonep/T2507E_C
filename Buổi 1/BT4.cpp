#include <stdio.h>
int main(){
	int a;
	float x;
	printf("Nhap so dien da tieu thu: ");
	scanf("%d", &a);
	if(a<=50){
		x=a*1678;
		printf("So tien dien ban can tra la: %.1f\n", x);
	}else if(51<=a&&a<=100){
		x=50*1678+(a-50)*1734;
		printf("So tien dien ban can tra la: %.1f\n", x);
	}else if(101<=a&&a<=200){
		x=50*1678+50*1734+(a-100)*2014;
		printf("So tien dien ban can tra la: %.1f\n", x);
	}else{
		x=50*1678+50*1734+100*2014+(a-200)*2536;
		printf("So tien dien ban can tra la: %.1f\n", x);
	}
	return 0;
}
