#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n], b[n]; 
    for (int i = 0; i < n; i++) {
    	printf("Nhap so thu %d: ",i);
        scanf("%d", &a[i]);
    }

    int size = 0; 
    for (int i = 0; i < n; i++) {
        int checktrung = 0;
        for (int j = 0; j < size; j++) {
            if (a[i] == b[j]) {
                checktrung = 1;
                break;
            }
        }
        if (checktrung==0) {
            b[size] = a[i];
            size++;
        }
    }

    printf("\nMang sau khi loai bo phan tu trung lap:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

