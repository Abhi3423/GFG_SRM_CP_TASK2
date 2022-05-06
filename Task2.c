#include<stdio.h>

int main(){
    int arr[6]={1,2,3,4,5,6},i,n;
    printf("Enter index: ");
    scanf("%d",&i);
    printf("Enter number: ");
    scanf("%d",&n);
    for(int j=6; j>i;j-=1){
	 arr[j]=arr[j-1];
	 }

	arr[i]=n;
    printf("New array is: {");
	for(int k=0; k<6; k++){
	   printf(" %d ",arr[k]);
	}
    printf("}");
    return 0;
}
