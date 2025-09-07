//Recursion 
// Foctorial

#include<stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1; // here return 1 , if we return 0 zero then (0 * anything = 0) Therefore we use return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int result = factorial(4);
    printf ("%d",result);
}
