#include<stdio.h>
void decToHex(int n){
	if(n==0)
	return;
	else{
		decToHex(n/16);
		char hexDigit;
		if((n%16)<10){
			hexDigit='0'+(n%16);
			printf("%c ",hexDigit);
		}
		else{
			hexDigit='A'+(n%16-10);
			printf("%c ",hexDigit);
		}
	}
}
int main(){
	int decimal;
	printf("Enter a decimal number :");
	scanf("%d",&decimal);
	printf("Hexadecimal equivalent :");
	decToHex(decimal);
	
}
