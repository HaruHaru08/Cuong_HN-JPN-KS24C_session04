#include<stdio.h>

int main(){
	int number;
	printf("Nhap mot so nguyen:");
	scanf("%d",&number);
	if(number > 0){
		printf("Nguoi dung da nhap so duong la: %d",number);
	}else{
		printf("Nguoi dung da nhap so am la: %d",number);
	}
	return 0;
}