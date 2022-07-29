#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int check_for_factor;
    int num_of_factors;
    n=97;
   // n = 11 * 13 * 13 * 29 * 37 * 97;
   num_of_factors = 2;
    for(check_for_factor = 2; check_for_factor <= n/2; check_for_factor+=1)
    {
        if(n % check_for_factor == 0)
            num_of_factors += 1;
    }
    printf("number of factors of %d is %d",n, num_of_factors);


    return EXIT_SUCCESS;
}
