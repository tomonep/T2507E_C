#include <stdio.h>

int main() {
    int a,b;
    
    do{
    	printf("Nhap so a: ");
    	scanf("%d", &a);
    	printf("Nhap so b: ");
    	scanf("%d", &b);
    	if(a>b){
    		printf("Ban da nhap sai. Hay nhap lai!\n");
		}
	}while(a>b);
	
	int counta =0;
	for(int i=a;i<=b; i++){
		int count =0;
		for(int j=1 ; j<=i; j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
		printf("So nguyen to: %d\n", i);
		counta++; 
		}
	}
	printf("Tong so nguyen to nam trong khoang %d toi %d la: %d",a,b,counta);
    
    return 0;
}


