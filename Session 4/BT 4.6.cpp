#include <stdio.h>

int main(){
    int n;
    printf("Nhap vi tri n: ");
    scanf("%d", &n);
    int a = 0, b = 1, fib;

    if(n == 0){
        fib = 0;
    } else if(n == 1){
        fib = 1;
    } else {
        int i=2;
        while (i<=n){
        	fib=a+b;
        	a=b;
        	b=fib;
        	i++;
		}
    }

    printf("So Fibonacci tai vi tri %d la: %d\n", n, fib);
    return 0;
}
