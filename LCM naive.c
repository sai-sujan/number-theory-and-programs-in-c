#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1;
    int n2;
    int multiplier;
    int temp;
    // n2 is small
   // n1 = 12;// 97
    //n2 = 40;//31
    n1 = 31;
    n2 = 97;
    if(n2 > n1)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for(multiplier = 1; multiplier <= n2 ; multiplier+=1)
    {
        if( (multiplier * n1) % n2 == 0 )
            break;
    }

    printf("%d", multiplier*n1);


    return EXIT_SUCCESS;
}
