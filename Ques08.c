#include <stdio.h>
int main()
{
    // even or odd using a bitwise operator.

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num & 1 == 1)
    {
        printf("Given number is Odd number");
    }
    else 
    {
        printf("Given number is Even number");
    }

    return 0;
}