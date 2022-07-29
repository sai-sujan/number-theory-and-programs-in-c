#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n;
    int lin;
    int col;
    int spaces;
    int filler;
    n = 9;
    for(lin = n, spaces = 0; lin >= 1; lin -=1, spaces+=1,printf("\n"))
    {
        for(col = 0, filler=n; col < spaces ; col += 1, filler-=1)
            printf("%d", filler);
        for(col = 0; col < 2 * lin - 1 ; col += 1)
            printf("%d", lin);
        for(col = 0, filler=lin+1; col < spaces ; col += 1, filler+=1)
            printf("%d", filler);

    }
  for(lin = 2, spaces = n-2; lin <= n; lin +=1, spaces-=1,printf("\n"))
    {
        for(col = 0, filler=n; col < spaces ; col += 1, filler-=1)
            printf("%d", filler);
        for(col = 0; col < 2 * lin - 1 ; col += 1)
            printf("%d", lin);
        for(col = 0, filler=lin+1; col < spaces ; col += 1, filler+=1)
            printf("%d", filler);

    }


    return EXIT_SUCCESS;
}
