#include <stdio.h>
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d", &n);
	int i=1, s=0;
	while(i<n){
		if(n%i==0){
			s=s+i;
		}
		i++;
	}
	if(s==n){
		printf("Hoan hao");
	}else{
		printf("K hoan hao");
	}

	return 0;
}
