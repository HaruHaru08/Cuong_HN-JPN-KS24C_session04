#include<stdio.h>

int main(){
	int month;
	printf("Nhap thang vao de kiem tra so ngay co trong thang do:  ");
	scanf("%d",&month);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang nay co 31 ngay\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("Thang nay co 30 ngay\n");
			break;
		case 2:
			int year;
			printf("nhap nam vao de biet chinh xac so ngay cua thang: ");
			scanf("%d",&year);
			if((year%400 == 0) || (year%4 == 0 && year%100 != 0)){
					printf("Thang nay co 29 ngay\n");
			}else{
				printf("Thang nay co 28 ngay\n");
			}
			break;
		default:
			printf("So thang khong hop le\n");
	}
	return 0;
}