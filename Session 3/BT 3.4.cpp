#include <stdio.h>
int main(){
	int a;
	printf("Nhap gia tri mua hang: ");
	scanf("%d", &a);
	if(a>=500){
		a=a*0.9;
	}else if(a>=200){
		a=a*0.95;
	}
	printf("So tien phai tra la: %d",a);
	return 0;
}
