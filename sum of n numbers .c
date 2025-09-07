// Recursion basics;
// Sum of n numbers;

#include<stdio.h>
int recursion(int n)
{
    if (n <= 0) // Base;
    {
        return 0;
    }
    return n + recursion(n - 1); // recursion condition;
}

int main()
{
    int result = recursion(10);
    printf("%d",result);
}
