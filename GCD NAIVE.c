#include<stdio.h>
#include<stdlib.h>
// Assume that n2 is smaller

int main()
{
    int n1;
    int n2;
    int getGcd;
  //  n1 = 49; // 7 * 7
  //  n2 = 15; // 3 * 5
//n1 = 97;
   //` n2 = 130;
   /*
   if n2 is > n1 then SWAP
   */
   n1 = 1000003 * 37;
   n2 = 9999991 * 37;
    if(n1 % n2  == 0)
        getGcd = n2;
    else
    {
        for(getGcd = n2/2; getGcd >=1; getGcd -=1)
        {
            if(n2 % getGcd == 0 && n1 % getGcd == 0)
            {
                break;
            }
        }
    }
    printf("%d", getGcd);



    return EXIT_SUCCESS;
}
