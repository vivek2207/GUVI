#include<stdio.h>

int main(){
	
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	if(a==b && a==c)
		printf("all are equal");
	
	if(a>=b && a>c)
		printf("%d is largest number", a);
	else if(b>=a && b>c)
		printf("%d is largest number", b);
	else if(c>=a && c>b)
		printf("%d is largest number", c);	
}
