#include <stdio.h>

int main(){
	int a;
	printf("Nhap so: ");
	scanf("%d", &a);
	int i=1, count=0;
	while(i<=a){
		if(a%i==0){
			count++;
		}
		i++;
	}
	if(count==2){
		printf("So nguyen to");
	}else{
		printf("K phai so nguyen to");
	}

	return 0;
}
