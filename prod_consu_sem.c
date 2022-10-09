/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
void producer();
void consumer();
int mutex=1;
int full=0;
int empty,x=0;
void producer()
{
    --mutex;
    ++full;
    --empty;
    x++;
    printf("\nPRODUCER PRODUCE%d",x);
    ++mutex;
}
void consumer()
{
    --mutex;
    --full;
    ++empty;
    x--;
     printf("\nCONUMER CONSUMES%d",x);
     ++mutex;
}
void main()
{
    int ch,i;
    printf("ENTER THE SIZE OF BUFFER\n");
    scanf("%d",&empty);
    printf("\n1:producer\n2:consumer\n3:exit");
    do
    {
        printf("\nENTER YOUR CHOICE\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if((mutex==1)&&(empty!=0))
                    producer();
                    else
                    printf("BUFFER IS FULL\n");
                    break;
            case 2:if((mutex==1)&&(full!=0))
                    consumer();
                    else
                    printf("BUFFER IS EMPTY\n");
                    break;
            case 3:exit (0);
                    break;
                   
        }
    }while(1);
}

