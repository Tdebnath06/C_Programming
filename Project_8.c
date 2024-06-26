#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int x, int y)
{
    int answer;
    if(x < y)
    {
        answer = x;
    }

    else
    {
        answer = y;
    }

    while(answer > 0)
    {
        if(x%answer == 0 && y%answer == 0)
        {
            break;
        }
        answer--;
    }

    return answer;
}

float absValue(float x)
{
    float answer;
    
    if(x < 0)
    {
        answer = -1 * x;
    }
    else
    {
        answer = x;
    }

    return answer;
}

float squareRoot(float x)
{
    float answer;
    float argument = x;
    if( x < 0)
    {
        argument = absValue(x);
    }
    answer = pow(2, 0.5 * log2(argument));
    return answer;

}

float main()
{
    printf("gcd of is: %d\n",gcd(36, 48));
    printf("Absolute Value is: %f\n",absValue(-32));
    printf("The square root is: %f\n", squareRoot(-15));
    return 0.0;
}