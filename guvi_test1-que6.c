#include<stdio.h>

int main(){
	int year;
	scanf("%d", &year);
	
	if(0==year%4){
		if(0==year%400)
			printf("%d is leap year", year);
		else if(0==year%100)
			printf("%d is not leap year", year);	
		else
			printf("%d is leap year", year);			
		
	}
	
	else
	printf("%d not a leap year", year);
}
