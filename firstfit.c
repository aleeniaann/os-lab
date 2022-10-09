//to perform first fit memory management

#include<stdio.h>

int i,flag[10],allocation[10],bno,pno,bsize[10],psize[10];

void main(){
    for ( i=0;i<10; i++)
    {
        flag[i]=0;
        allocation[i]=-1;
    }

    //read bno,bsize,pno,psize;
    printf("\nEnter no of memory blocks: ");
    scanf("%d",&bno);
    printf("\nEnter size of each memory block:");
    for(i=0;i<bno;i++){
        scanf("%d",&bsize[i]);
    }
    printf("\nEnter no of processed: ");
    scanf("%d",&pno);
    printf("\nEnter size of each process:");
    for(i=0;i<pno;i++){ //<bno?
        scanf("%d",&psize[i]);
    }
    
}