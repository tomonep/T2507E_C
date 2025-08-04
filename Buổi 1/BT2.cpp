#include <stdio.h>
int main(){
	int a,b;
	float x;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	if(a!=0){
		x=-b/float(a);
		printf("so can tim x = %.1f", x);
	}else if(b!=0){
		printf("PT vo nghiem");
	}else{
		printf("PT vo so nghiem");
	}
	return 0;
}
