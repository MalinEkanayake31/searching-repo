#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int data;
    printf("data you want to search : ");
    scanf("%d",&data);

    int i;
    for(i=0;i<n;i++){
        if(arr[i]==data){
            printf("\nelement found at index %d ",i);
            break;
        }
    }
    if(i==n){
        printf("\nelement not found.");
    }
}
