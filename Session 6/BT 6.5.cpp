#include <stdio.h>

int main(){
	int n, min=0;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so %d: ",i);
		scanf("%d", &ary[i]);
	}

	for(int i=0;i<n;i++){
		if(ary[i]>0){
			min=ary[i];
			break;
		}
	for(int i=0;i<n;i++){
		if(ary[i]<min && ary[i]>0){
			min=ary[i];
		}
	}
	}
	if(min==0){
		printf("Khong co so nguyen duong trong mang!");
	}else{
		printf("so nguyen duong nho nhat la: %d",min);
	}
	
	return 0;	
}
