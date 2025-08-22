#include <stdio.h>

int timBoiChung(int a, int b){
	int BCNN;
	if(a<b){
		for(int i=1;i<=a;i++){
			if(((a*i)%b)==0){
				BCNN=a*i;
				return BCNN;
			}
		}	
	}
	for(int i=1;i<=b;i++){
		if(((b*i)%a)==0){
			BCNN=b*i;
			return BCNN;
		}
	}
	return BCNN=a*b;
}

int main(){
	int a, b;
	printf("Nhap so thu 1: ");
	scanf("%d", &a);
	printf("Nhap so thu 2: ");
	scanf("%d", &b);
	int BCNN=timBoiChung(a,b);
	printf("Boi chung nho nhat cua %d va %d la: %d", a,b,BCNN);
	
} 
