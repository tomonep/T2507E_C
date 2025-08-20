#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n]; 
    for (int i = 0; i < n; i++) {
    	printf("Nhap so thu %d: ",i);
        scanf("%d", &a[i]);
    }
    int max=0, vt=0;
    for(int i=1;i<n-1;i++){
    	if(max<a[i-1]+a[i]+a[i+1]){
    		max=a[i-1]+a[i]+a[i+1];
    		vt=i;
		}
	}
	printf("Day con lien tiep co tong lon nhat la: %d, %d, %d",a[vt-1],a[vt],a[vt+1]);
    

    return 0;
}

