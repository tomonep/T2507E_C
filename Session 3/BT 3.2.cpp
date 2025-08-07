#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so thu 1: ");
	scanf("%d", &a);
	printf("Nhap so thu 2: ");
	scanf("%d", &b);
	int a10=a-10;
	int b10=b-10;
	if(a10>0&&b10<0){
		b10=-b10;
	}else if(a10<0&&b10>0){
		a10=-a10;		
	}else{
		a10=-a10;
		b10=-b10;
	}
	if(a10<b10){
		printf("So gan 10 hon la so: %d",a);
	}else if(a10>b10){
		printf("So gan 10 hon la so: %d",b);
	}else{
		printf("Bang nhau");
	}
	return 0;
}
