#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float d,x1,x2;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	printf("Nhap so c: ");
	scanf("%d", &c);
	d=b*b-4*a*c;
	if(d<0){
		printf("PT vo nghiem");
	}else if(d==0){
		x1=-b/(2*a);
		printf("PT co nghiem kep la: %.2f", x1);
	}else{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("PT co 2 nghiem: x1= %.2f, x2= %.2f",x1,x2);
	}
	return 0;
	
}
