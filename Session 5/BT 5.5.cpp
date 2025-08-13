#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    int max = 0;
    for(int d; n>0; n/=10){
    	d=n%10;
    	if (d > max) {
            max = d;     
        }
	}
    printf("Chu so lon nhat la: %d\n", max);
    return 0;
}


