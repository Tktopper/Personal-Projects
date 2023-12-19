#include <stdio.h>

    int main()
    {
        int x[]={0,1,2,3,4,5,6};

        int *p = x;

        printf("%d", *(p+4));
    }