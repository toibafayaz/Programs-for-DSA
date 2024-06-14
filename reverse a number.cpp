#include<stdio.h>
int reverse(int num,int rev){
	if(num==0){
		return rev;
	}
	rev=(rev*10)+(num%10);
	return (num/10,rev);
}
int main(){
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	int reversed=reverse(num,0);
	printf("Reversed number is : %d ",reversed);
}
