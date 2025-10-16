#include <stdio.h>
int main(){
    int arr[10],f=0,p=0,sump=0,sumf=0;
    int pass[10]={0},fail[10]={0};

      for(int j=0;j<10;j++){
        scanf("%d",&arr[j]);
        if(arr[j]<0)break;
        else if(arr[j]>=5){
            pass[p]=arr[j];
            p++;
            sump+=arr[j];
        }
        else{
            fail[f]=arr[j];   
            f++;
            sumf+=arr[j];
        }
    }
    float avgp = (float)sump/(p+1);
    float avgf = (float)sumf/(f+1);
    printf("Avg of pass students: %.2f\n",avgp);
    printf("Avg of fail students: %.2f\n",avgf);

    return 0;
}