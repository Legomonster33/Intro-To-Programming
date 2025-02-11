#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926

float radius;

/*this is a comment about what the program does*/

float getcircumference(float radius)
{
    return 2 * PI * radius;
}

float getarea(float radius)
{
    return PI * radius * radius;
}

void procedure1()
{
    printf("Enter a radius: ");
    scanf("%a",&radius);
    if (radius <= 0)
    {
        printf("The radius must be positive");
    }
    else {
        printf("the circumference is: %2.2f",getcircumference(radius));
        printf("the area is: %2.2f",getarea(radius));
    }
}


float acceleration(float speed, float distance)
{
    return (speed * speed) / (2 * distance);
}

float time(float speed, float distance)
{
    return 2 * distance / speed;
}

void procedure2()
{
    float speed, distance;
    printf("please enter take off speed (m/s) and distance (m): ");
    scanf("%f %f",&speed,&distance);
    if (speed < 0 || distance < 0)
    {
        printf("speed and distance must be positive");
    }
    else
    {
    printf("The acceleration is: %2.2f m/s^2\n",acceleration(speed,distance));
    printf("The time is: %2.2f s",time(speed,distance));
    }

}

int main(){
    while(1){
    int choice;
    printf("\n\nwhich procedure do you want to run? 1/2?: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        procedure1();
        break;
    case 2:
        procedure2();
        break;
    default:
        printf("Invalid choice, exiting");
        exit(1);
    }}
    return 0;
}