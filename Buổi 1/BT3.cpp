#include <stdio.h>
int main(){
	float a,b,c;
	printf("Nhap canh a:");
	scanf("%f", &a);
	printf("Nhap canh b:");
	scanf("%f", &b);
	printf("Nhap canh c:");
	scanf("%f", &c);
	if(a==0 || b==0 || c==0){
		printf("khong phai tam giac");
	}else if(a+b>c){
		printf("Tam giac!");
	}else if(a+c>b){
		printf("Tam giac!");
	}else if(b+c>a){
		printf("Tam giac!");
	}else{
		printf("k phai tam giac");
	}
	return 0;
}
