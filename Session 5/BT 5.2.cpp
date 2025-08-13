#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	
	int ucln=0,bcnn=0;
	for (int i=1; i<=a; i++){
		if(a%i==0){
			if(b%i==0){
				ucln=i;
			}
		}
	}
	printf("UCNL cua %d va %d la: %d\n", a,b,ucln);
	
	for (int i=1; i<=a; i++){
		if((b*i)%a==0){
			bcnn=(b*i);
			break;
		}
	}
	printf("BCNN cua %d va %d la: %d", a,b,bcnn);
	
	return 0;
}
