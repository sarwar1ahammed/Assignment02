#include <stdio.h>
int main()
{
    // Append a digit in the number and print the resulting number.
    
    int num, digit, newNum;
    printf("Enter a number & a digit : ");
    scanf("%d %d", &num, &digit);

    newNum = (num / 10) * 100 + (num % 10 * 10 + digit);

    printf("Modify number is %d", newNum);

    return 0;
}