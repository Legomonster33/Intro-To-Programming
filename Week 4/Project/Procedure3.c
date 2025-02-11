#include <stdio.h>
#include <stdlib.h>


/*this is a comment about what the program does*/

int main()
{
    float FAHRENHEIT;

    printf("Enter the degrees fahrenheit: ");
    scanf("%a",&FAHRENHEIT);
    printf("The celsius conversion is: %f",((FAHRENHEIT-32)*(5.0/9.0)));
    return 0;
}