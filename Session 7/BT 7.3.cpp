#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	
	int ary[n];
	for(int i=0; i<n; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d", &ary[i]);
	}
	int min=ary[0];
	int max=ary[0];
	for(int i=0; i<n; i++){
		if(ary[i]<min){
			min=ary[i];
		}
		if(ary[i]>max){
			max=ary[i];
		}
	}
	printf("\nDoan [a,b] can tim la: [%d,%d]", min,max);
	
	
	
}
