#include <stdio.h>

int am(int a[3]);

int am(int a[3])
{
    int max = a[0];

    for(int i = 1; i < 3; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }

    return max;
}

int main()
{
    int a[3];

    for(int i = 0; i < 3; i++)
    {
        printf("Enter the array element: ");
        scanf("%d", &a[i]);
    }

    printf("The maximum element = %d", am(a));

    return 0;
}