#include<stdio.h>

int main(){
	int number;
	printf("Nhap mot so nguyen:");
	scanf("%d",&number);
	if(number%2 == 0){
		printf("Nguoi dung nhap so chan la: %d",number);
	}else{
		printf("Nguoi dung nhap so le la: %d",number);
	}
		return 0;
	}