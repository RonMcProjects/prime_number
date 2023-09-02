#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef int bool;
#define true (1 == 1)
#define false (1 == 0)

int
main(int argc, char *argv[])
{
    int number;
    int i, j, k;
    bool prime;
    int modulo;

    if (argc < 2)
    {
        printf("Primes up to: ");
        scanf("%d", &number);
    }
    else
    {
        number = atoi(argv[1]);
    }

    k = 0;
    printf("1 2 ");
    for (i = 3; i <= number; i+=2)
    {
        prime = true;
        for (j = 3; j <= i/2; j+=2)
        {
            modulo = i % j;
            if (modulo == 0)
            {
                prime = false;
                continue;
            }
        }
        if (prime == true)
        {
            printf("%d ", i);
            k = k + 1;
            if ((k % 10) == 0)
                printf("\n");
        }
   }
   printf("\n");
   return(0);
}
