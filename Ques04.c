#include <stdio.h>
int main()
{
    // swap values of two int variables without using a third variable.

    int a, b;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);

    printf("You've enter a = %d & b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping value of a = %d & b = %d", a, b);

    return 0;

}