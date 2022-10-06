#include<stdio.h>
int i,n,bt[30],tat[30],tot_tat=0,wt[30],tot_wt=0;
fcfs_tat=0,fcfs_wt=0;
//float 
void main(){
    printf("enter no of process: ");
    scanf("%d",&n);
    printf("enter burst time of each process: ");
    for(i=0;i<n;i++){
    scanf("%d",&bt[i]);

    }

    printf("fcfs algorithm");
    fcfs(&fcfs_tat,&fcfs_wt);
    printf("\ntotal tat= %d",fcfs_tat);
    printf("\navg tat= %d",fcfs_tat/n);
printf("\ntotal wt= %d",fcfs_wt);
printf("\navg wt= %d",fcfs_wt/n);


    //the printing stuff..

}
int fcfs(int *a,int *b){
        for(i=0;i<n;i++){
            if(i==0)
            tat[i]=bt[i];
            else
            tat[i]=tat[i-1]+bt[i];
            tot_tat=tot_tat+tat[i];
        }
        *a=tot_tat;
        wt[0]=0;
        for(i=0;i<n;i++){
            wt[i]=wt[i-1]+bt[i-1];
            tot_wt=tot_wt+wt[i];

        }
        *b=tot_wt;

        printf("PROCESS\tBT\tTAT\tWT");
        for(i=0;i<n;i++)
        printf("p[%d]\t%d\t%d\t%d",i+1,bt[i],tat[i],wt[i]);
        return 0;
}


