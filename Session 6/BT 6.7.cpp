 #include <stdio.h>

int main(){
	int n, summax=0;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so %d: ",i);
		scanf("%d", &ary[i]);
	}

	for(int i=0, sum=0;i<n;i++){
		if(ary[i]>0){
			sum+=ary[i];
			if(sum>summax){
			summax=sum;		
			}			
		}else {
			sum =0;
		}
				
	}
	printf("tong so duong lien tiep lon nhat la: %d", summax);
	return 0;	
}
