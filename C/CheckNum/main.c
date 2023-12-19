#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Number is Negative.");
        return 0;
    }
    else if(num > 0)
    {
        printf("Number is positive.");
        return 0;
    }
    else
    {
        printf("Number is zero.");
        return 0;
    }

}