//bankers algorithm

#include<stdio.h>
int max[100][100],alloc[100][100],avail[100];
int i,j,n,r;

void main(){
    input();
    show();
    cal();

}

void input(){
    printf("\nEnter no of processes: ");
    scanf("%d",&n);
    printf("\nEnter no of resource instances: ");
    scanf("%d",&r);

    printf("\nEnter the max matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<r;j++){
            scanf("%d",&max[i][j]);
        }
    }

    printf("\nEnter the allocation matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<r;j++){
            scanf("%d",&alloc[i][j]);
        }
    }
    
    printf("\nEnter the available resources: ");
        for(j=0;j<r;j++){
            scanf("%d",&avail[j]);
        }

}

void show(){
    printf("\nProcess\tAllocation\tMax\tAvailable");
    for(i=0;i<n;i++){
        printf("%d",i+1);
        printf("\t");
        for(j=0;j<r;j++){
            printf("%d",alloc[i][j]);
        }
        printf("\t");
        for(j=0;j<r;j++){
            printf("%d",max[i][j]);
        }
        printf("\t");
    }
}