#include<stdio.h>
#include<math.h>
int main(){
	int n,number=0,count=0,prime=0;
	printf("Moi ban nhap so luong so nguyen to can in ra: ");
	scanf("%d",&n);
	while(number<n){
		count=0;
		for(int i=1;i<=prime;i++){
			if(prime%i==0){
				count++;
			}
		}if(count==2){
			printf("\n so nguyen to: %d ",prime);
			number++;
		}
		prime++;
	}
	return 0;
}
