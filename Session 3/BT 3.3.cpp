#include <stdio.h>
int main(){
	int a;
	printf("Moi nhap so: ");
	scanf("%d", &a);
	switch(a){
		case 0:printf("Khong");break;
		case 1:printf("Mot");break;
		case 2:printf("Hai");break;
		case 3:printf("Ba");break;
		case 4:printf("Bon");break;
		case 5:printf("Nam");break;
		case 6:printf("Sau");break;
		case 7:printf("Bay");break;
		case 8:printf("Tam");break;
		defaut:printf("Chin");
	}

	return 0;	
}
