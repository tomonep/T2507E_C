#include <stdio.h>

int main (){
	int n, s=0;
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	if(n==0){
		printf(" So %d co vo so uoc!", n);
	}else{
		for(int i=1; i<=n; i++){
			if(n%i==0){
				s+=i;
			}
		}
		printf("Tong cac uoc cua so %d, la: %d", n,s);
	}
	return 0;
}
