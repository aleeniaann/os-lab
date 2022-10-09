//redoing bankers algo

#include<stdio.h>

int alloc[100][100],max[100][100],avail[100],n,r,i,j;
void input();
void show();
void cal();

int main(){
    input();
    show();
    cal();
    return 0;
}

void input(){
    //n,r,alloc,max,avail
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