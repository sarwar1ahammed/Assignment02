#include <stdio.h>
int main()
{
    // input a three-digit number and display the sum of the digits.
    
    int num, sum;
    printf("Enter a three digit number : ");
    scanf("%d", &num);

    sum = (num / 100) + ((num / 10) % 10 ) + num % 10;

    printf("Sum of the given digit is : %d", sum);

    return 0;


}