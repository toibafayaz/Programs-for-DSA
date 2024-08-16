#include<stdio.h>
int BinarySearch(int a[],int n,int data){
	int l=0,r=n-1;
	while(l<r){
		int mid=(l+r)/2;
		if(data == a[mid]){
			return mid;
		}
		else if(data<a[mid]){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return -1;
	
}
int main(){
	int n;
	printf("Enter size of array :");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array in sorted manner :");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int data;
	printf("Enter data to be searched  :");
	scanf("%d",&data);
	int index=BinarySearch(a,n,data);
	if(index !=-1){
		printf("Element present at index : %d ",index);
	}
	else{
		printf("Element not present ");
	}
}
