#include <stdio.h>
int main(){
	int n, i1;
	printf("Nhap so: ");
	scanf("%d",&n);
	int i=0, count=0;
	while(i<n){
		if(i%2==0&&i%3==0){
			i1=i;
		}
		i++;
	}
	printf("so can tim la: %d", i1);
	return 0;
}
