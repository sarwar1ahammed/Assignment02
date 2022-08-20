#include <stdio.h>
int main()
{
    // a three-digit number from the user and rotate its digits.
    
    int num, newNum;
    printf("Enter a three digit number : ");
    scanf("%d", &num);

    newNum = (num % 10 * 100) + (num / 10 % 10 * 10) + (num / 100);
    printf("Modify number is %d", newNum);

    return 0; 

}