#include <stdio.h>
#include <stdbool.h>

int main()
{
  enum companies {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
  enum companies company1;
  enum companies company2;
  enum companies company3;
  company1 = XEROX;
  company2 = GOOGLE;
  company3 = EBAY;
  printf("The value of Xerox is: %d\n", company1);
  printf("The value of Google is: %d\n", company2);
  printf("The value of Ebay is: %d\n", company3);
  
}