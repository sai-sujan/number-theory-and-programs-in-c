#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int check_for_factor;
    int sum_of_factors;
    n=75;
   // n = 11 * 13 * 13 * 29 * 37 * 97;
   sum_of_factors = 0;
    for(check_for_factor = 1; check_for_factor <= n/2; check_for_factor+=1)
    {
        if(n % check_for_factor == 0)
            sum_of_factors += check_for_factor;
    }
    printf("sum of factors of %d is %d",n, sum_of_factors);


    return EXIT_SUCCESS;
}
