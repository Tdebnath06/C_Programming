#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char str1[], const char str2[]);
bool isEqual(const char s1[], const char str2[]); 
int main()
{

    const char word1[] = "turjo";
    const char word2[] = "purdue";
    const char word3[] = "aerospace";
    return 0;
}

int stringLength(const char string[])
{
    int count = 0;
    while(string[count] != '\0')
    {
        count++;
    }
     return count;
}

void concat(char result[], const char str1[], const char str2[])
{

    int i, j;
    for(i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }

    for(j = 0; str2[j] != '\0'; ++j)
    {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0';
}

bool isEqual(const char str1[], const char str2[])
{
    int i = 0;
    bool is_Equal = false;
    while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
    {
        ++i;
        if(str1[i] == '\0' && str2[i] == '\0')
        {
            is_Equal = true;
        }

        else
        {
            is_Equal = false;
        }
    }

    return is_Equal;
}