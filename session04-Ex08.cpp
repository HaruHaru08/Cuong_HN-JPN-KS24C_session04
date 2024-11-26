#include<stdio.h>

int main(){
	int edge1,edge2,edge3;
	printf("Nhap ba canh cua tam giac: ");
	scanf("%d %d %d",&edge1,&edge2,&edge3);
	if(edge1 + edge2>edge3 && edge1 + edge3>edge2 && edge2+edge3>edge1){
		printf("la 3 canh tam giac");
	}else{
		printf("Khong phai ba canh tam giac");
	}
	return 0;
}