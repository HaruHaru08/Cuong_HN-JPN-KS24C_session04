#include<stdio.h>

int main(){
	int number;
	printf("Nhap mot so nguyen:");
	scanf("%d",&number);
	if(number%3 == 0 && number%5 ==0){
		printf("So nay chia het cho ca ba va nam ");
	}else{
		if(number%3 == 0){
			printf("So nay chia het cho ba");
		}else{
			if(number%5 == 0){
				printf("So nay chia het cho 5");
			}else{
				printf("So nay khong chia het cho ba hoac nam");
			}
		}
	}
	return 0;
}