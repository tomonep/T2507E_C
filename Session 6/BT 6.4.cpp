#include <stdio.h>

int main(){
	int n, x=0;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so %d: ",i);
		scanf("%d", &ary[i]);
	}
	
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
			x=ary[i];
		}
	}
	if(x==0){
		printf("Khong co so le trong mang!");
	}else{
		printf("so le cuoi cung la: %d",x);
	}
	
	return 0;	
}
