#include <stdio.h>
#include "ham.h"

int main(){
	int n;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	int ary[n];
	nhapMang(ary,n);
	int max= timMax(ary,n);
	
	printf("\n");
	printf("So lon nhat trong mang la: %d", max);
	
} 
