#include <stdio.h>

int main(){
	int n, kc=0, max1=0, max2=0, x1=0, x2=0, x;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	int ary[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d", &ary[i]);		
	}
	printf("\nNhap so nguyen x: ");
	scanf("%d", &x);
		
	for(int i=0;i<n;i++){
		kc=x-ary[i];
		if(kc<0){
			kc=-kc;
			if(kc>max1){
				max1=kc;
				x1=ary[i];
			}else if(kc==max1){
				max2=max1;
				x2=ary[i];
			}
			}else{
			if(kc>max1){
				max1=kc;
				x1=ary[i];
			}else if(kc==max1){
				max2=max1;
				x2=ary[i];
			}				
		}
	}
		if(max2==max1){
			printf("\nSo co khoang cach xa nhat la: %d va %d",x1,x2);
		}else{
			printf("\nSo co khoang cach xa nhat la: %d",x1);
		}
	
	return 0;
}
