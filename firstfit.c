//to perform first fit memory management

#include<stdio.h>

int i,j,flag[10],allocation[10],bno,pno,bsize[10],psize[10];

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
    printf("\nEnter no of processes: ");
    scanf("%d",&pno);
    printf("\nEnter size of each process:");
    for(i=0;i<pno;i++){ //<bno?
        scanf("%d",&psize[i]);
    }
    
    for(i=0;i<pno;i++)
    for(j=0;i<bno;j++){
        if(flag[j]==0){
            if(bsize[j]>=psize[i]){
                allocation[i]=j;
                bsize[j]-=psize[i];
                break;
            }
        }
    }

    printf("\nProcess no\tProcess size\tBlock no\t");
    for(i=0;i<pno;i++){
        printf("\nP%d\t\t%d\t\t",i+1,psize[i]);
        if(allocation[i]!=-1)
        printf("%d\n",allocation[i]+1);
        else
        printf("Not allocated\n");
    }
}