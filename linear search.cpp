#include<stdio.h>
/*void linearSearch(int a[8],int data){
	int found=0;
	for(int i=0;i<8;i++){
		if(a[i]==data){
			printf("%d Element found at index: %d ",data,i);
			found=1;
			break;
		}
	}
	if(found==0){
		printf("Element not found ");
	}
}*/
int n;
void LinearSearch(int a[] , int data){
	int found=0;
	for(int i=0;i<n;i++){
		if(a[i]==data){
			printf("%d Element found at index: %d ",data,i);
			found=1;
			break;
		}
	}
	if(found==0){
		printf("Element not found ");
	}
}
int main(){
	//int a[8]={15,5,20,35,2,42,67,17};
	//int data=42;
	//linearSearch(a,42);
	
	printf("Enter size of array :");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array :");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int data;
	printf("Enter data to be found :");
	scanf("%d",&data);
	LinearSearch(a,data);
}
