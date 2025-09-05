#include <stdio.h>
#include <string.h>

int main() {
    char S1[100], S2[100];

    printf("Nhap chuoi thu 1: ");
    scanf("%s", S1);
    printf("Nhap chuoi thu 2: ");
    scanf("%s", S2);

    char *ngan, *dai;
    if (strlen(S1) < strlen(S2)) {
        ngan = S1;
        dai = S2;
    } else {
        ngan = S2;
        dai = S1;
    }

    if (strstr(dai, ngan) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

