#include <stdio.h>
int main(){
    int arr[5],temp;

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    temp = arr[4];
    for(int j=4;j>0;j--){
        arr[j]=arr[j-1];
    }
    arr[0]=temp;
    for(int h=0;h<5;h++){
        printf("%d",arr[h]);
    }
}