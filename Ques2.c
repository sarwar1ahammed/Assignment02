#include <stdio.h>
int main()
{   
    // a given number without its last digit.
    
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

     printf("Given number without its last digit : %d", num / 10);



    return 0;
}