#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/*this is a comment about what the program does*/

void procedure1()
{
    int N = 0;
    while (N < 5 || N > 60){
        printf("input value N: ");
        scanf("%d", &N);
        if (N < 5 || N > 60){
            printf("Invalid input, try again\n");
        }}
    for (int i = 1; i <= N; i++){
        for (int p = 1; p <= N; p++){
            if (p == i){
                printf("%d ",i);
            }
            else{
                printf("* ");
            }}
            if (i % 2 == 0){
                printf("E\n");
            }
            else{
                printf("O\n");
            }

    }
    

}

void procedure2()
{
    int start, end, step, count = 0;
    printf("enter starting value, largest value, and step size: ");
    scanf("%d %d %d", &start, &end, &step);
    if (start > end || step < 1){
        printf("Invalid input, exiting");
        exit(1);
    }
    for (int i = start; i <= end; i += step){
        printf("%d", i);
        count += i;
        if (i != end){
            printf(" + ");
        }
    }
    printf("\nthe calculation result is: %d\n", count);
}

void procedure3(){
    int N = 0;
    printf("input integer N: ");
    scanf("%d", &N);
    if (N < 1){
        printf("Invalid input, exiting");
        exit(1);
    }
    for (int i = 1; i <= N; i++){
        for (int p = 1; p <= i; p++){
            printf("%d ", p);
        }
        printf("\n");
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