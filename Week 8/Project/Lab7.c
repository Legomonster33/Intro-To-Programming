#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

/*this is a comment about what the program does*/

void procedure1() /*function1*/
{
    printf("Enter the month (1 for January, 12 for December): ");
    int month;
    scanf("%d", &month);
    if (month < 1 || month > 12){
        printf("Invalid input, exiting");
        exit(1);
    }
    printf("enter the starting day of the week (1 = monday, 7 = Sunday): ");
    int startday;
    scanf("%d", &startday);
    if (startday < 1 || startday > 7){
        printf("Invalid input, exiting");
        exit(1);
    }

    char leap = 'N';

    if(month == 2){
        printf("Is this a leap year (Y for yes, Anything else for no):");
        
        scanf(" %c", &leap);
    }
    int daysinmonth;
    if (month == 2){
        if (leap == 'Y' || leap == 'y'){
            daysinmonth = 29;
        }
        else{
            daysinmonth = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        daysinmonth = 30;
    }
    else{
        daysinmonth = 31;
    }

    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    for (int i = 1; i < startday; i++){
        printf("    ");
    }
    for (int i = 1; i<= daysinmonth; i++){
        printf("%4d", i);
        if ((i + startday - 1) % 7 == 0){
            printf("\n");
        }
    }
}

int function2(char *pointer){
    int len = strlen(pointer);
    if(len < 2){
        return(-1);
    }
    if (len >= 2 && pointer[len-1] == 'H' && pointer[len-2] == 'O'){
        return(1);
    }
    else if (len >= 3 && pointer[len-1] == '4' && pointer[len-2] == 'O' && pointer[len-3] == 'S'){
        return(2);
    }
    else{
        return(0);
    }

}

void procedure2()
{
    printf("Enter a string: max 80 characters\n");
    char string[80];
    scanf("%s", string);
    printf("The return value is: %d", function2(string));
}

void procedure3(){
    printf("Nuh Uh");
}

int main(){
    while(1){
    int choice;
    printf("\n\nwhich procedure do you want to run? 1/2/3?: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        procedure1();
        break;
    case 2:
        procedure2();
        break;
    case 3:
        procedure3();
        break;
    
    default:
        printf("Invalid choice, exiting");
        exit(1);
    }}
    return 0;
}