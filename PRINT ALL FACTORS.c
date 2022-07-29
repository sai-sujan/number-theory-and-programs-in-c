#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int check_for_factor;
    n=1234567890;
   // n = 11 * 13 * 13 * 29 * 37 * 97;
    for(check_for_factor = 1; check_for_factor <= n/2; check_for_factor+=1)
    {
        if(n % check_for_factor == 0)
          printf("%d ", check_for_factor);

    }
    printf("%d", n);


    return EXIT_SUCCESS;
}
