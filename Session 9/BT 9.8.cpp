#include <stdio.h>
#include "ham.h"

int main(){
	int n;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	int ary[n];
	nhapMang(ary,n);
	int max= timMax(ary,n);
	int min= timMin(ary,n);
	
	printf("\n");
	printf("So nho nhat trong mang la: %d\n", min);
	printf("So lon nhat trong mang la: %d", max);
	
} 
