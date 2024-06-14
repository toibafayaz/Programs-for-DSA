#include<stdio.h>
int sumofDigits(int num){
	if (num==0){
		return 0;
	}
	return (num%10)+sumofDigits(num/10);
}
int main(){
	int number;
	printf("Enter a number :");
	scanf("%d",&number);
	int sum=sumofDigits(number);
	printf("Sum of digits is :%d ",sum);
}
