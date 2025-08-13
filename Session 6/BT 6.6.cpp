 #include <stdio.h>

int main(){
	int n, count=0, max=0;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so %d: ",i);
		scanf("%d", &ary[i]);
	}

	for(int i=0;i<n;i++){
		if(ary[i]>0){
			count++;
			if(count>max){
				max=count;
			}
		}else{
			count=0;
		}
		
	}
	printf("so duong lien tiep la: %d", max);
	return 0;	
}
