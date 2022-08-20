#include <stdio.h>
int main()
{   
    // swap values of two int variables
    
    int a,b,c;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);

    printf("You've enter a = %d & b = %d\n", a,b);

    c = a;
    a = b;
    b = c;

    printf("After swaping a = %d & b = %d", a, b);

    return 0;
}