//program to show producer consumer concept.
#include<stdio.h>
#include<stdlib.h>
int buffersize=0,currentsize=0,c,n=0,x;

void producer(){
    printf("\nEnter the no of elements to be produced: ");
    scanf("%d",&n);
    if(0<=(buffersize-(currentsize+n))){
        currentsize+=n;
        printf("%d elements are produced where buffersize is %d",currentsize,buffersize);
    }
    else{
        printf("\nBuffer is'nt sufficient!");
    }

}

void consumer(){
    printf("\nEnter elements to be consumed: ");
    scanf("%d",&x);
    if(currentsize>=x){
    currentsize-=x;
    printf("\nNo of elements consumed: %d and \nNo of elements left: %d",x,currentsize);
    }
    else{
        printf("\nNo of elements consumed should not be greater than no of elements produced.");
    }
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
    