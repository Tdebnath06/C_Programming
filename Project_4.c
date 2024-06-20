#include <stdio.h>

int main()
{
    double hoursWorked = 0;
    printf("Please enter the amount of hours you worked this week: \n");
    scanf("%lf", &hoursWorked);
    double payRate = 12.00;
    double overtimePayRate = 18.00;
    double payAfterTax;
    double overtimeHours;
    double payBeforeTax;
    if (hoursWorked <= 40)
    {
        
        payBeforeTax = hoursWorked * payRate;
        if (payBeforeTax <= 300)
        {
            payAfterTax = payBeforeTax * 0.85;
        }

        else if(payBeforeTax > 300 && payBeforeTax <= 450)
        {
            payAfterTax = payBeforeTax * 0.8;
        }

        else
        {
            payAfterTax = payBeforeTax * 0.75;
        }
        
    }

    else
    {
        overtimeHours = hoursWorked - 40;
        payBeforeTax = (overtimeHours * overtimePayRate) + (40 * payRate);
        payAfterTax = payBeforeTax  * 0.75;
    }

    printf("Your take home pay after tax is: %lf", payAfterTax);
}