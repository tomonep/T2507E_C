#include <stdio.h>

int main (){
	int n, s=0;
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	for(int a=1; n!=0;n/=10){
		a=n%10;
		s+=a;
	}
	printf("tong la: %d", s);
		
	return 0;
}
