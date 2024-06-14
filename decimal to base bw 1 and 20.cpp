#include<stdio.h>
void decToBaseB(int n,int base){
	if(n==0){
		return;
	}
	else{
		decToBaseB(n/base,base);
		int digit=n%base;
		char hexDigit;
		if(digit<10){
			hexDigit='0'+digit;
			printf("%c",hexDigit);
		}
		else{
			hexDigit='A'+digit;
			printf("%c",hexDigit);
		}
	}
}
int main(){
	int decimal,base;
	printf("Enter a decimal number :");
	scanf("%d",&decimal );
	printf("Enter a base between 2 and 20:");
	scanf("%d",&base );
	printf("Base %d equivalent :",base);
	decToBaseB(decimal,base);
}
