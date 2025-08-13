#include <stdio.h>

int main(){
	int n, x, found=0;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so %d: ",i);
		scanf("%d", &ary[i]);
	}
	
	printf("Nhap so can tim: ");
	scanf("%d", &x);	
	for(int i=0;i<n;i++){
		if(x==ary[i]){
			found=1;
			break;
		}
	}
	if(found==1){
		printf("x thuoc mang");
	}else{	
		printf("x k thuoc mang");
	}
	return 0;	
}
