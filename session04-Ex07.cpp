#include<stdio.h>

int main(){
	int year;
	printf("Nhap thang ma ban can kiem tra: ");
	scanf("%d",&year);
	if((year%400 == 0) || (year%4 == 0 && year%100 != 0)){
					printf("Nam nay la nam nhuan");
			}else{
				printf("Nam nay khong phai nam nhuan");
			}
	return 0;
}