#include <stdio.h>

int main()
{

    int primes[24] = {3};
    int composites[75];

    int x = 0;
    int y = 0;
    int is_prime = 0;

    for(int i = 4; i <= 100; i++)
    {
        for(int n = 2; n < i; n++)
        {
            if (i % n == 0)
            {
                is_prime = 0;
                break;
            }
            else
            {
                is_prime = 1;
            }
        }
        
        if (is_prime == 1)
        {
            y++;
            primes[y] = i;
        }
    }
//        printf("test pt.2");

//    printf("test");

    for(int i = 0; i < 24; ++i)
    {
  //      printf("TEST");
        printf("%d|", primes[i]);
    }
}