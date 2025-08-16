#include <stdio.h>

int main(){
	int n, min, min1=0, min2=0, x1=0, x2=0, x;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	int ary[n];
	int kary[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d", &ary[i]);		
	}
	printf("\nNhap so nguyen x: ");
	scanf("%d", &x);
		
	for(int i=0;i<n;i++){
		kary[i]=x-ary[i];
		if(kary[i]<0){
			kary[i] =- kary[i];
		}
	}
	min1=kary[0];
	for(int i=0;i<n;i++){
		if(kary[i]>min1){
			min1=kary[i];
			break;
		}	
	}
	for(int i=0;i<n;i++){
		if(kary[i]<min1){
			min1=kary[i];
			x1=ary[i];
		}else if(kary[i]==min1){
			min2=min1;
			x2=ary[i];
		}
	}			
		if(min2==min1){
			printf("\nSo co khoang cach gan nhat la: %d va %d",x1,x2);
		}else{
			printf("\nSo co khoang cach gan nhat la: %d",x1);
		}
	
	return 0;
}
