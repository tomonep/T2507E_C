#include <stdio.h>

int main (){
	int n,b;
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while (n<0);
	int n1=n;
	
	for(int a=1 ; a!=0;n/=10){
		b=a;
		a=n%10;
	}
	printf("So dau tien cua so %d la: %d",n1,b);

		
	return 0;
}
