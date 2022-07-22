#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{ int n,Firstnum,Secondnum,Answer;
char option;
do {
    printf(" choose an Operator\n");

    printf(" 1 for addition\n");
    printf(" 2 for subtraction\n");
    printf(" 3 for Multiplication\n");
    printf(" 4 for division\n");
    scanf("%d",&n);
    printf(" Enter first num\n");
    scanf("%d",&Firstnum);
    printf(" Enter Second num\n");
    scanf("%d",&Secondnum);
    switch(n){
        case 1:Answer=Firstnum+Secondnum;
    printf("Addition of %d and %d = %d\n",Firstnum,Secondnum,Answer);break;

        case 2:Answer=Firstnum-Secondnum;
    printf("Subtraction of %d and %d = %d\n",Firstnum,Secondnum,Answer);break;

     case 3:Answer=Firstnum*Secondnum;
    printf("Multiplication of %d and %d = %d\n",Firstnum,Secondnum,Answer);break;

     case 4:Answer=Firstnum/Secondnum;
    printf("Division of %d and %d = %d\n",Firstnum,Secondnum,Answer);break;

    default: printf("Invalid selection");
    }

printf("Do you want to continue?? Y/N\n");
option =getch();

    }
while (option =='y');
getch();


    return 0;
}
