#include<stdio.h>

int main(){
	int num1,num2,num3;
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&num1);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&num2);
	printf("Nhap vao so thu ba: ");
	scanf("%d",&num3);
	if(num2<num3 && num3<num1){
		printf("So thu ba nam trong khoang giua so thu hai va so thu nhat ");
	}else{
		printf("So thu ba khong nam trong khoang giua so thu hai va so thu nhat");
	}
	return 0;
}