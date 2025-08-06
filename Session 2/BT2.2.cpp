#include <stdio.h>
int main(){
	int a,c,b;
	printf("Nhap ngay: ");
	scanf("%d", &a);
	printf("Nhap thang: ");
	scanf("%d", &b);
	printf("Nhap nam: ");
	scanf("%d", &c);
	printf("Ngay ban vua nhap la: %d/%d/%d\n",a,b,c);
	
	if(a>0&&a<32){
		if(b>0&&b<13){
			int d=c%4;
			if(d==0){
				if(b==2&&a==29){
					printf("Ngay ke tiep la: 1/3/%d",c);
				}else{
					if(b==2&&a>29){
						printf("Ban da nhap sai");
					}else{
						if(a==30&&(b==4||b==6||b==9||b==11)){
						int b1=b++;
						printf("Ngay ke tiep la: 1/%d/%d\n", b,c);
						}else{
							if(a==31){
								if(b==12){
								int c1=c++;
								printf("Ngay ke tiep la: 1/1/%d\n",c);
								}else{
									if(b==1||b==3||b==5||b==7||b==8||b==10){
										int b1=b++;
										printf("Ngay ke tiep la: 1/%d/%d\n", b,c);
									}else{
										printf("Ban da nhap sai");
									}
								}
							}else{
							int a1=a++;
							printf("Ngay ke tiep la: %d/%d/%d",a,b,c);
							}
						}
					}
				}
			}else{
				if(b==2&&a==28){
					printf("Ngay ke tiep la: 1/3/%d",c);
				}else{
					if(b==2&&a>28){
						printf("Ban da nhap sai");
					}else{
						if(a==30&&(b==4||b==6||b==9||b==11)){
						int b1=b++;
						printf("Ngay ke tiep la: 1/%d/%d\n", b,c);
						}else{
							if(a==31){
								if(b==12){
								int c1=c++;
								printf("Ngay ke tiep la: 1/1/%d\n",c);
								}else{
									if(b==1||b==3||b==5||b==7||b==8||b==10){
										int b1=b++;
										printf("Ngay ke tiep la: 1/%d/%d\n", b,c);
									}else{
										printf("Ban da nhap sai");
									}
								}
							}else{
							int a1=a++;
							printf("Ngay ke tiep la: %d/%d/%d",a,b,c);
							}
						}
					}
				}
			}
		}else{
		printf("Ban da nhap sai");	
		}
	}else{
		printf("Ban da nhap sai");
	}
	
	return 0;
}
