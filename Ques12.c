#include <stdio.h>
int main()
{
    // the amount in INR and convert it into USD.
    
    float INR;
    float USD;
    printf("Enter the value of \"INR\" : ");
    scanf("%f", &INR);

    USD = INR / 76.23;
    printf("Converted value of \"USD\" is %.2f", USD);

    return 0;
}