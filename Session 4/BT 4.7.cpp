#include <stdio.h>

int main(){
	int n;
	int a1=0,a2=1,afib, ax, i=0;
	
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	if(n==1){
		afib=0;
	}else if(n==2){
		afib=1;	
	}else if(n==3){
		afib=2;
	}else{
		while(afib<n){
			ax=afib;
			afib=a1+a2;
			a1=a2;
			a2=afib;
		}
	}
	printf("So tiem can duoi thuoc day Fibonacci la: %d", ax);
}
