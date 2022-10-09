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

        //to print available
        if(i==0){
            for(j=0;j<r;j++){
            printf("%d",avail[j]);
        }
        printf("\t");
        }
    }

}

void cal(){
    //main part
    int finish[100],flag=1,c1,k;
    for(i=0;i<n;i++){
        finish[i]=0;
    }

    for(i=0;i<n;i++){
        for(j=0;j<r;j++){
            need[i][j]=max[i][j]-alloc[i][j];
            printf("\n");
        }
    }

    while(flag){
        flag=0;
        for(i=0;i<n;i++){
            int c=0;
            for(j=0;j<r;j++){
                if(finish[i]==0&&need[i][j]<=avail[j]){
                    c++;
                    if(c==r){
                        for(k=0;k<r;k++){
                            avail[k]+=alloc[i][j];
                            finish[i]=1;
                            flag=1;
                        }
                        printf("\nP%d->",i+1);
                        if(finish[i]==1){
                            i=n;
                        }
                    }
                }
            }
        }

        for(i=0;i<n;i++){
            if(finish[i]==1){
                c1++;
            }
            else{
                printf("P%d->",i+1);
            }

        }

        if(c1==n){
            printf("process is in safe state!");
        }
        else{
            printf("process in deadlock, unsafe state!");
        }

    }

}