#include <stdio.h>

int main(){
	int n, count=0, sum=0;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so %d: ",i);
		scanf("%d", &ary[i]);
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			if(ary[i]%2!=0){
			count++;
			sum+=ary[i];
		}
		}
	}
	printf("Trung binh cong la: %d",sum/count);
	return 0;	
}
