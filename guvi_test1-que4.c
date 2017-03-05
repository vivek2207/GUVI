#include<stdio.h>
#include<ctype.h>

int main(){
	char c;
	
	scanf("%c", &c);
	
	if(isalpha(c))
	printf("input is alphabet");
	else
	printf("not an alphabet");
	
}
