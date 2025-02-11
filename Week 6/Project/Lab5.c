#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/*this is a comment about what the program does*/

void procedure1()
{
    int numberisdivisible;
    int num;
    printf("Input a number to test: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d is divisible by 2\n",num);
        numberisdivisible = 1;
    }
    if(num % 3 == 0){
        printf("%d is divisible by 3\n",num);
        numberisdivisible = 1;
    }
    if(num % 4 == 0){
        printf("%d is divisible by 4\n",num);
        numberisdivisible = 1;
    }
    if(num % 5 == 0){
        printf("%d is divisible by 5\n",num);
        numberisdivisible = 1;
    }
    if(numberisdivisible){
        printf("Well Done\n");
    }
    else{
        printf("BINGO\n");
    }
}

void procedure2()
{
    int numberofpoints;
    float x,y;
    printf("input the number of points: ");
    scanf("%d",&numberofpoints);
    for (int i = 0; i < numberofpoints; i++){
        printf("input the x coordinate: ");
        scanf("%f",&x);
        printf("input the y coordinate: ");
        scanf("%f",&y);
        if(x == -99999 && y == -99999){
            break;
        }
        if(x > 0 && y > 0){
            printf("The point is in the first quadrant\n");
        }
        else if(x < 0 && y > 0){
            printf("The point is in the second quadrant\n");
        }
        else if(x < 0 && y < 0){
            printf("The point is in the third quadrant\n");
        }
        else if(x > 0 && y < 0){
            printf("The point is in the fourth quadrant\n");
        }
        else if(x == 0 && y == 0){
            printf("The point is at the origin\n");
        }
        else if(x == 0){
            printf("The point is on the y axis\n");
        }
        else if(y == 0){
            printf("The point is on the x axis\n");
        }
    }


}

void procedure3(){
    char character;
    printf("enter a character: ");
    while ( getchar() != '\n' && getchar()!=EOF); //Remove the line feed or End of File indicator from the end of the first input. 
    character = getchar();
    character = tolower(character);
    switch (character)
    {
    case 'n':
        int number1;
        printf("enter an integer: ");
        scanf("%d",&number1);
        printf("evan");
        break;
    case 'r':
        float number2, number3, result;
        printf("enter two numbers: ");
        scanf("%f %f",&number2,&number3);
        result = sqrt(number2)+sqrt(number3);
        printf("the sum of roots is: %f",result);
        break;
    case 'z':
        char character2;
        printf("enter a character: ");
        while ( getchar() != '\n' && getchar()!=EOF); //Remove the line feed or End of File indicator from the end of the first input. 
        character2 = getchar();
        printf("the characters ascii is: %d",character2);
        break;
    default:
        printf("goodbye");
        break;
    }
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