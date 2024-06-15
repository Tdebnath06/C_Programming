#include <stdio.h>
#include <stdlib.h>
int main()
{
    double width = 2.3;
    double length = 6.7;
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (width + length);
    area = width * length;

    printf("The perimeter is: %.3f", perimeter);
    printf(" and the area is: %.3f", area);
    return 0;
}