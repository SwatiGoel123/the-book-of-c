#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program to print all factors of a number
    * input -> a positive integer
    * Expected output, if number entered is less than 1 print "Invalid input" without quotes
    * If valid input was received then print all factors of that number in increasing order on a single line separated by a single space
    * E,g. input -> 7
    * output -> "1 7 ", without quotes
    * input -> 10
    * output -> "1 2 5 10 ", without quotes
    * Note that there is one space after each number */
    
    int number=0,i=1;
    scanf("%d",&number);
    if(number<1)
    {
        printf("Invalid input");
    }
    else
    {
        for(;i<=number/2 ;i++)
        {
            if(number%i==0)
            printf("%d ",i);
        }
    
        printf("%d ",number);
    }
    return 0;
}
