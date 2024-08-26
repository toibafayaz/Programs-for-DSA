#include<stdio.h>
swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int Partition(int a[],int lb,int ub){
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while(start<end){
		while(a[start]<=pivot){
			start++;
		}
		while(a[end]>pivot){
			end--;
		}
		if(start<end){
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[lb],&a[end]);
	return end;
}
void QuickSort(int a[],int lb,int ub){
	if(lb<ub){
		int loc=Partition(a,lb,ub);
		QuickSort(a,lb,loc-1);
		QuickSort(a,loc+1,ub);
	}
}
void display(int a[],int n){
	for(int i=0;i<n;i++){
	printf("%d   ",a[i]);
	
        }
}
int main(){
	
int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array :");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	
	QuickSort(a,0,n-1);
	int ch;
	printf("Do you want to display :");
	scanf("%d",&ch);
	
	if(ch==1){
	
	printf("Array elements after quick sort :");
	display(a,n);
}
}
