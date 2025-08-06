#include <stdio.h>

int main() {
    int a, b500, b200, b100, b50, b20, b10;
    printf("Nhap so tien: ");
    scanf("%d", &a);

    if (a % 10 == 0 && a > 0) {
        b500 = a / 500;
        a = a % 500;

        b200 = a / 200;
        a = a % 200;

        b100 = a / 100;
        a = a % 100;

        b50 = a / 50;
        a = a % 50;

        b20 = a / 20;
        a = a % 20;

        b10 = a / 10;
        printf("So tien ban rut duoc gom:\n");
		if(b500>=1){
			printf("%d x 500k\n", b500);
		}else{
		}
		if(b200>=1){
			printf("%d x 200k\n", b200);
		}else{
		}
		if(b100>=1){
			printf("%d x 100k\n", b100);
		}else{
		}
		if(b50>=1){
			printf("%d x 50k\n", b50);
		}else{
		}
        if(b20>=1){
			printf("%d x 20k\n", b20);
		}else{
		}
		if(b10>=1){
			printf("%d x 10k\n", b10);
		}else{
		}     
    } else {
        printf("So tien nhap khong dung.\n");
    }

    return 0;
}
