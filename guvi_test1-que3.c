#include<stdio.h>

int main(){
	char c;
	scanf("%c", &c);
	
	if((65<=c<=90) || (97<=c<=122)){
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		printf("char is vowel");
		
		else
		printf("char is consonant");
	}	
}
