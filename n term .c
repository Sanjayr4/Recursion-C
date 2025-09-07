// Recursion Basics;
// parameter recursion;
// Recursion is a method where works by call itself again and again until the the base condition satisfies;

#include<stdio.h>
void recursion(int start , int n)  // creating a function called recursion and add some parameters;
{
   if (start == n) // thise is called the base this line decides wheather the program continue or not it act likes the break point of the recursion  
   {
       printf("%d",start); // this will print the last nth term;
       return; // the calling of the function ends here;
   }
   printf("%d\n",start);  
   recursion(start+1,n); // we are increasing the start in the parameter until it reach the nth term ;
}
int main()
{
    recursion(1,10);
}
