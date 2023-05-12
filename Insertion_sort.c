#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of an Array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("input value are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int key=arr[i];
        int j=i-1; 

        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
         arr[j+1]=key;

    }
    
    printf("\nArray after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}