#include<stdio.h>
int main(){
	int number;
	printf("Moi nhap so: ");
	scanf("%d",&number);
	if (number <= 0) {
		printf("so nhap phai la so nguyen duong.\n");
        return 1;
	}
	printf("cac uoc cua %d la: ",number);
	for(int i=1;i<=number;i++){
		if(number%i==0){
			printf("%d ", i);
		}
	}
	return 0;
}
