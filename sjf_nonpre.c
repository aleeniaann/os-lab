//sjf non-preemptive
#include<stdio.h>
int sjf_tat=0,sjf_wt=0,i,j,t,bt[30],p[30],tot_tat=0,tot_wt=0,n;

void main(){

    printf("\nenter no of processes: ");
    scanf("%d",&n);

    printf("\nenter burst time of each process: ");
    for(i=0;i<n;i++){
    scanf("%d",&bt[i]);

    }

    sort();
    sjf(&sjf_tat,&sjf_wt);
    //print the stuff..
    printf("\ntotal tat= %d",sjf_tat);
    printf("\navg tat= %d",sjf_tat/n);
printf("\ntotal wt= %d",sjf_wt);
printf("\navg wt= %d",sjf_wt/n);


}

int sort(){
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(bt[i]>bt[j]){
                swap(&bt[j],&bt[i]);
                swap(&p[j],&p[i]);
            }
        }
    }

    swap(int *a, int *b){
        t=*a;
        *a=*b;
        *b=t;
    }
    return 0;
}

int sjf(int *a, int *b){
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

    printf("\nPROCESS\tBT\tTAT\tWT");
        for(i=0;i<n;i++)
        printf("\np[%d]\t%d\t%d\t%d",i+1,bt[i],tat[i],wt[i]);
        return 0;
}