#include<stdio.h>
int main(){
	int number, sum=0;
	for(int i=1;i<=5;i++){
		printf("Moi ban nhap so nguyen: ",i);
		scanf("%d",&number);
		if(number%2!=0){
			sum+=number;
		}
	}
	printf("tong cac so le da nhap la:%d",sum);
	return 0;
}
