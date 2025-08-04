#include <stdio.h>

int main() {
    int a;

    do {
        printf("Nhap diem (0 - 10): ");
        scanf("%d", &a);

        if (a < 0 || a > 10) {
            printf("Diem khong hop le. Vui long nhap lai!\n");
        }
    } while (a < 0 || a > 10);

    if (a >= 9) {
        printf("Hoc sinh co hoc luc Xuat sac, voi so diem la %d\n", a);
    } else if (a >= 7) {
        printf("Hoc sinh co hoc luc Gioi, voi so diem la %d\n", a);
    } else if (a >= 5) {
        printf("Hoc sinh co hoc luc Kha, voi so diem la %d\n", a);
    } else if (a >= 3) {
        printf("Hoc sinh co hoc luc Trung binh, voi so diem la %d\n", a);
    } else {
        printf("Hoc sinh co hoc luc Yeu, voi so diem la %d\n", a);
    }

    return 0;
}

