//program to show producer consumer concept.
#include<stdio.h>
#include<stdlib.h>
int buffersize=0,currentsize=0,c;

void producer(){
    
}

void consumer(){

}


void main(){
    printf("\nEnter max size of the buffer: ");
    scanf("%d",&buffersize);

 do{
    printf("\n1.Producer \n2.Consumer \n3.Exit \nChoose your option: ");
    scanf("%d",&c);
   
    switch (c)
    {
    case 1: if(currentsize>=buffersize)
            printf("Buffer is full, cannot produce");
            else
            producer();
            break;
    
    case 2: if(currentsize<=buffersize)
            printf("Buffer is empty, cannot consume");
            else
            consumer();
            break;
    
    case 3: exit(0);
        break;

    }
}while (1);

}
    