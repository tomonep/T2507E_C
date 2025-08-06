#include <stdio.h>
int main(){
	int a,b,c;
	printf("Thu nhap cua ban la: ");
	scanf("%d", &a);
	if(a>11000){
		b=a-11000;
		if(b<=5000){
			c=b*0.05;
			printf("Tien thue ban phai dong la: %d",c);
		}else{
			if(b<=10000){
				c=250+(b-5000)*0.1;
				printf("Tien thue ban phai dong la: %d",c);
			}else{
				if(b<=18000){
				c=750+(b-10000)*0.15;
				printf("Tien thue ban phai dong la: %d",c);
				}else{
					if(b<=32000){
					c=1950+(b-18000)*0.2;
					printf("Tien thue ban phai dong la: %d",c);	
					}else{
						if(b<=52000){
						c=4750+(b-32000)*0.25;
						printf("Tien thue ban phai dong la: %d",c);	
						}else{
						if(b<=80000){
						c=9750+(b-52000)*0.3;
						printf("Tien thue ban phai dong la: %d",c);	
						}else{
							c=18150+(b-80000)*0.35;
							printf("Tien thue ban phai dong la: %d",c);
						}	
						}
					}
				}
			}
		}
	}else{
		printf("Ban chua mat thue dau");
	}
	return 0;
}
