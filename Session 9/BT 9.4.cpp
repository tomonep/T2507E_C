#include <stdio.h>

int tinhS(int a, int b){
	int S=1;
	for(int i=1;i<=b;i++){
		S*=a;
	}
	return S;
}

int main(){
	int x, y;
	printf("Nhap so x: ");
	scanf("%d", &x);
	printf("Nhap so mu: ");
	scanf("%d", &y);
	int S=tinhS(x,y);
	printf("%d^%d = %d", x,y,S);
	
} 
