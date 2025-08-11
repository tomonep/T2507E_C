#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d", &n);
	int i=0, count=0;
	while(i<=n){
		if(i%2!=0){
			count++;
		}
		i++;
	}
	printf("Co %d so le", count);
	return 0;
}
