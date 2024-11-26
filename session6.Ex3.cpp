#include<stdio.h>
int main(){
	int password;
	printf("Moi ban nhap mat khau: ");
	scanf("%d",&password);
	if(password==12345){
		printf("Ban da nhap dung mat khau ");
	}else{
		printf("Ban da nhap sai mat khau ");
	}
	return 0;
}
