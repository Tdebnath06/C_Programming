#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char str[100];

    printf("Input the string: ");
    scanf("%s", str);

    int length;

    length = strlen(str);

    printf("The string reversed is: \n");
    for(int i = length; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
