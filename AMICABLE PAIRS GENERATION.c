#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n;
    int num;
    int sof_num;
    int sof_sof_num;
    int checked_for_factor;
    n = 100000;
    for(num = 1;num <= n ; num += 1)
    {
        /* 220
        */
        sof_num = 0;
        for(checked_for_factor = 1; checked_for_factor <= num/2; checked_for_factor+=1)
        {
            if( num % checked_for_factor == 0)
                sof_num += checked_for_factor;
        }
        sof_sof_num = 0;
        for(checked_for_factor = 1; checked_for_factor <= sof_num/2; checked_for_factor+=1)
        {
            if( sof_num % checked_for_factor == 0)
                sof_sof_num += checked_for_factor;
        }
    if(num == sof_sof_num && num < sof_num)
        printf(" (%d %d)\n", num, sof_num);
    }


    return EXIT_SUCCESS;
}
