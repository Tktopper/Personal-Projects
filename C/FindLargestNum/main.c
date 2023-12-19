#include <stdio.h>

int main()
{
    int num1, num2, num3, largestNum;
printf("Enter the first number: ");
    scanf("%d", &num1);
printf("Enter the second number: ");
    scanf("%d", &num2);
printf("Enter the third number: ");
    scanf("%d", &num3);
        largestNum = num1;
     if(num2 > largestNum){
        largestNum = num2;
     }
    if(num3 > largestNum){
        largestNum = num3;
     }
     printf("The largest number is %d", largestNum);
     return 0;
}