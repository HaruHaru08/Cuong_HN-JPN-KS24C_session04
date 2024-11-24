#include<stdio.h>

int main(){
	float oldIndex,newIndex,electricityNumber,electricityBill;
	printf("Nhap chi so cu(chi so cong to dien dau thang): ");
	scanf("%f",&oldIndex);
	printf("Nhap chi so moi(chi so cong to dien cuoi thang): ");
	scanf("%f",&newIndex);
	electricityNumber = newIndex - oldIndex;
	if(0 <= electricityNumber && electricityNumber < 50){
		electricityBill = electricityNumber*10000;
		printf("So tien dien cua thang nay la: %f\n",electricityBill);
	}else{
		if(50 <= electricityNumber && electricityNumber < 100){
		  electricityBill = electricityNumber*15000;
		  printf("So tien dien cua thang nay la: %.f\n",electricityBill);
	}else{
		if(100 <= electricityNumber && electricityNumber < 150){
		  electricityBill = electricityNumber*20000;
		  printf("So tien dien cua thang nay la: %.f\n",electricityBill);
	}else{	
	    if(150 <= electricityNumber && electricityNumber < 200){
		  electricityBill = electricityNumber*25000;
		  printf("So tien dien cua thang nay la: %.f\n",electricityBill);
	}else{
		if(200 <= electricityBill){
			electricityBill = electricityNumber*30000;
		  printf("So tien dien cua thang nay la: %.f\n",electricityBill);
		}
	}
	}
	}
}
	return 0;
}