#include <stdio.h>
int main(){
    int num[10],min,max;
	printf("Enter number 1: ");
	scanf("%d", &num[0]);
	max = num[0];
	min = num[0];
	for (int i=1; i<10; i++){
		printf("Enter number %d: ",i+1);
		scanf("%d", &num[i]);
		if (num[i] >= max){
			max = num[i];
		}
		else{
			min = num[i];
		}
	}
	printf("The max diff = %d\n",(max-min));
    return 0;
}