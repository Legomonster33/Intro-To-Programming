#include <stdio.h>
#include <stdlib.h>


/*this is a comment about what the program does*/

float int1, int2, int3;

int main()
{
    printf("Enter 3 numbers to find the average: ");
    scanf("%f", &int1);
    scanf("%f", &int2);
    scanf("%f", &int3);
    printf("the average is: %f", ((int1+int2+int3)/3));
    
    return 0;
}