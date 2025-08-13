#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
	int b=n;
    int count = 0, countl=0;
    for (;n > 0; n/=10) {
        int a = n % 10;
		count ++;       
        if (a%2!=0) {
            countl++;     
        }               
    }
	if(countl!=count){
		printf("So %d k phai so toan so le", b);
	}else{
		printf("So %d la so toan so le",b);
	}
	
    return 0;
}


