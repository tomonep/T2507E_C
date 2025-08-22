#include <stdio.h>

int tinhTongCacSo(int a){
	int sum;
	for(;a!=0;a/=10){
		int b=a%10;
		sum+=b;
	}
	return sum;
}


int main(){
	int a, sum;
	do{
		printf("Nhap so can tim: ");
		scanf("%d", &a);
		if(a<0){
			printf("Vui long nhap so nguyen duong!\n");
		}
	}while(a<0);

	sum=tinhTongCacSo(a);
	printf("Tong cac so cua so %d la: %d", a,sum);
	
	
} 
