#include <stdio.h>
void main()
{
    int i, space, k=0, l= 0, m= 0;
    int rows =5;
    
    for(i=1; i<=rows; ++i)
    {
        for(space=1; space <= rows-i; ++space)
        {
            printf("  ");
            l;
        }

        while(k != 2*i-1)
        {
            if (l <= rows-1)
            {
                printf("%d ", i+k);
                ++l;
            }
            else
            {
                ++m;
                printf("%d ", (i+k-2*m));
            }
            ++k;
        }
        m = l = k = 0;

        printf("\n");
    }
}
