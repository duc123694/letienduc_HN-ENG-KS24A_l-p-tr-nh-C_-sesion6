#include<stdio.h>
int main(){
	int number1, sum=0,number2=0;
	for(int i=1;i<=5;i++){
		printf("Moi ban nhap so nguyen: ",i);
		scanf("%d",&number1);
		if(number1%2!=0){
			sum++;
		}else{
			number2++;
		}
	}
	printf("Cac so le da nhap la:%d \n",sum);
	printf("Cac so chan da nhap la:%d",number2);
	return 0;
}
