#include<stdio.h>
int main(){
	int a,count=0;
	printf("Moi ban nhap so nguyen to: ");
	scanf("%d",&a);
	int i;
	for(i=2;i<a;i++){
		if(a%i==0){
			count++;
	    }
		}
		if(count>0){
			printf("Day k phai so nguyen to \n");
		}else{
		printf("Day la so nguyen to \n");
	}

	return 0;
}
