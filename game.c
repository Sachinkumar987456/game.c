#include<stdio.h>
#include<conio.h>
 int main()
{
    int choice;
    clrscr();
    printf("Enter number (1- 4)");
    scanf("%d",&choice);
    if(choice==1)
    printf("you are handsome");
    else if(choice==2)
    printf("you are a good guy");
    else if(choice==3)
    printf("you are bad guy");
    else if(choice==4)
    printf("you are confident guy");
    else
    printf("you are enter wrong key");
    getch();
    return 0;
} 
