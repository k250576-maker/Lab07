#include <stdio.h>
int main()
{
    int arr[10], n, count=0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number you want to search: ");
    scanf("%d",&n);

    for (int j = 0; j < 10; j++)
    {
        if (n == arr[j])
            count++;
    }

    if(count==0)
        printf("Number not found");
    else 
        printf("Number occured %d times",count);

    return 0;
}