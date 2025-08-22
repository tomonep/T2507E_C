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
	printf("Nhap so can tim: ");
	scanf("%d", &a);
	sum=tinhTongCacSo(a);
	if(sum<0){
		printf("Tong cac so cua so %d la: %d", a,-sum);
	}else{
		printf("Tong cac so cua so %d la: %d", a,sum);
	}
	
	
} 
