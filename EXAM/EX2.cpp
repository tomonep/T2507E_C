#include <stdio.h>
#include "ham.h"

int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);

    int count = 0;
    int ary[n];
    int aryf[n];

    nhapMang(ary, n);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (timSoNT(ary[i])) {
            aryf[j] = ary[i];
            count = 1;
            j++;
        }
    }
    if (!count) {
        printf("Khong co so NT");
    } else {
        printf("Cac so NT trong mang la: ");
        inMang(aryf,j);
    }
    return 0;
}

