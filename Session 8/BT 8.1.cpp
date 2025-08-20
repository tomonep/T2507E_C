#include <stdio.h>

int main (){
	int n, k;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	int ary[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ", i);
		scanf("%d", &ary[i]);
	}
	
	printf("Nhap so lan xoay: ");
	scanf("%d", &k);
	for(int i=0;i<k;i++){
			int temp=ary[0];
			for(int j=0;j<n-1;j++){
				ary[j]=ary[j+1];			
			}
			ary[n-1]=temp;			
	}
	printf("\nDay so sau khi xoay la: ");\
	for(int i=0;i<n;i++){
		printf(" %d ", ary[i]);
	}	
	return 0;
}
