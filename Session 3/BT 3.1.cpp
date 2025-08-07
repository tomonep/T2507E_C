#include <stdio.h>
int main(){
	int d,m,y,tt;
	printf("Nhap ngay: ");
	scanf("%d",&d);
	printf("Nhap thang: ");
	scanf("%d",&m);
	printf("Nhap nam: ");
	scanf("%d",&y);
	
	if(y%400==0||(y%100!=0&&y%4==0)){
		switch(m){
			case 1:tt=d;break;
			case 2:tt=31+d;break;
			case 3:tt=60+d;break;
			case 4:tt=91+d;break;
			case 5:tt=121+d;break;
			case 6:tt=152+d;break;
			case 7:tt=182+d;break;
			case 8:tt=213+d;break;
			case 9:tt=244+d;break;
			case 10:tt=274+d;break;
			case 11:tt=305+d;break;
			case 12:tt=335+d;break;
		}
	}else{
		switch(m){
			case 1:tt=d;break;
			case 2:tt=31+d;break;
			case 3:tt=59+d;break;
			case 4:tt=90+d;break;
			case 5:tt=120+d;break;
			case 6:tt=151+d;break;
			case 7:tt=181+d;break;
			case 8:tt=212+d;break;
			case 9:tt=243+d;break;
			case 10:tt=273+d;break;
			case 11:tt=304+d;break;
			case 12:tt=334+d;break;
	}
	}
	printf("Ngay ban vua nhap la ngay thu %d trong nam",tt);
	return 0;
}
