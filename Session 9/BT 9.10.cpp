#include <stdio.h>
#include "ham.h"

int main(){
	int n;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	int ary[n];
	nhapMang(ary,n);
	daoNguoc(ary,n);
	inMang(ary,n);
} 
