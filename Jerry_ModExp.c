#include <stdio.h>

int power(int a, unsigned int b, int c) //function to calculate remainder of (a^b)/c.
{
    int result = 1; // initializing result

    a = a % c; // updating a if it is more than or equal to c

    while (b > 0)
    {
        // If b is odd, multipling a with result
        if (b & 1)
        {
            result = (result * a) % c;
        }

        // b must be even now
        b = b / 2;
        a = (a * a) % c;
    }
    return result;
}

int main()
{
    int a, c, result;
    unsigned int b;
    printf("enter a , b , c :");
    scanf("%d %d %d", &a, &b, &c);
    result = power(a, b, c);

    printf("result remainder is  %d", result);
    return 0;
}