#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int n1;
    long long int n2;
    long long int temp;
 //   n1 = 1160718174;
 //   n2 = 316258250;
 n1 = 9999991LL * 9997777;
 n2 = 9999991LL * 4480649;


    temp =  n1 % n2;
    while(temp != 0)
    {
        n1 = n2;
        n2 = temp;
        temp = n1 % n2;
    }
    printf("%lld", n2);
    return EXIT_SUCCESS;
}
