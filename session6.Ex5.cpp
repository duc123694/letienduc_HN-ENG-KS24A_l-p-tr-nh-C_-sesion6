#include<stdio.h>
int main(){
	int day,month,year;
	printf("Moi ban nhap so nam: ");
	scanf("%d",&year);
	printf("Moi ban nhap so thang: ");
	scanf("%d",&month);
	if(month<1||month>12){
		printf("so thang ko hop le");
		return 1;
	}
	if(month==1||month==3||month==5||month==6||month==8||month==10||month==12){
		day=31;
	}
	if(month==4||month==7||month==9||month==11){
		day=30;
	}
	if(month==2){
		if(year%4==0&&year%100!=0||year%400==0){
			day=29;
		}else{
			day=28;
		}
	}
	printf("thang %d nam %d co %d ngay",month,year,day);
	return 0;
}
