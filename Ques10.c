#include <stdio.h>
int main()
{
    // last digit of a number stored in a variable as zero.
    
    int num, newNum;
    printf("Enter a number : ");
    scanf("%d", &num);

    newNum = num - (num % 10);

    printf("Modify number is %d", newNum);

    return 0;

}