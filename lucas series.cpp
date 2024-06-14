#include<stdio.h>
int lucas(int n){
	if(n==0){
	return 2;
}
	if(n==1){
		return 1;
	}
	return lucas(n-1)+lucas(n-2);
}
int amin(){
	int n;
	printf("Enter number of terms in lucas series :");
	scanf("%d",&n);
	printf("Lucas series is :");
	for(int i=0;i<n;i++){
		printf("%d",lucas(i));
	}
	return 0;
}
