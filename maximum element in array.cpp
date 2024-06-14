#include<stdio.h>
int Max(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	int maximum=Max(arr,n-1);
	if(arr[n-1]>maximum){
		return arr[n-1];
	}
	else{
		return maximum;
	}
}
int main(){
	int arr[]={50,26,40};
	int n=3;
	int maxElement=Max(arr,n);
	printf("The maximum element in array is %d ",maxElement);
	return 0;
	
}
