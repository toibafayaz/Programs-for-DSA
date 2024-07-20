#include<stdio.h>
int main(){
	int a[]={6,2,1,5,3};
	*a=6;
	printf("%d   ",*(a+1));
	printf("%d",*a+1);
}
