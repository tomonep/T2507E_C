#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	
	int ary[n], sary[n];
	for(int i=0; i<n; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d", &ary[i]);
		if(ary[i]<0){
			sary[i]=-ary[i];
		}else{
			sary[i]=ary[i];
		}
	}
	int max=sary[0];
	for(int i=0; i<n; i++){
		if(sary[i]>max){
			max=sary[i];
		}
	}
	printf("\nDoan [-x,x] can tim la: [%d,%d]",-max,max);

	
	
}
