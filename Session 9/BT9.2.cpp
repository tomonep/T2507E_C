#include <stdio.h>

int timUocChung(int a, int b){
	int UCLN;
	for(int i=2;i<=a;i++){
		if(a%i==0 && b%i==0){
			UCLN=i;
		}
	}
	return UCLN;
}

int main(){
	int a, b;
	printf("Nhap so thu 1: ");
	scanf("%d", &a);
	printf("Nhap so thu 2: ");
	scanf("%d", &b);
	int UCLN=timUocChung(a,b);
	printf("Uoc chung lon nhat cua %d va %d la: %d", a,b,UCLN);
	
} 
