#include<stdio.h>

int main(){
	int num1, num2=0, n, rem;
	scanf("%d", &num1);
	
	n=num1;
	
	while(n){
		
		rem=n%10;
		num2=num2*10+rem;
		n=n/10;
		
	}
	if(num1==num2)
	printf("yes palindrome");
	else
	printf("not a palindrome");
	
}
