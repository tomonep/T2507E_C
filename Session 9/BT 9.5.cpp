#include <stdio.h>

int daoNguoc(int a){
	int dn=0;
	for(;a!=0;a/=10){
		int b=a%10;
		dn=dn*10+b;
	}
	return dn;
}


int main(){
	int a, dn;
	printf("Nhap so ban dau: ");
	scanf("%d", &a);
	dn=daoNguoc(a);
	printf("So dao nguoc la: %d", dn);
	
} 
