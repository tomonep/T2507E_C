#include <stdio.h>

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
	int dn=0;
	while(n!=0){
		int dv =n%10;
		dn = dn*10 +dv;
		n/=10;
	}
    printf("So dao nguoc la: %d",dn);
    return 0;
}
