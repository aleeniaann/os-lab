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
        
    }
}