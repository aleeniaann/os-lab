//sjf preemptive


//no of process, arrival time,bt, temp=bt, bt[9]=9999, 
//for(time=0;count!=n;t++),smallest=9.,
//{i=0 to n: at[i]<=time&&bt[i]<bt[smallest]&bt[i]>0, smallest=i;
//bt[sm]--, if(bt[sm]==0),count++, end=time+1;
//wt= ,tat= }

#include<stdio.h>
int n,i,at[10],bt[10],temp[10],smallest,count=0,end,time;
int wt,tat;
void main(){
    printf("enter no of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nArrival time of process P%d:",i+1);
        scanf("%d",&at[i]);
        printf("\nburst time of process P%d:",i+1);
        scanf("%d",&bt[i]);
        temp[i]=bt[i];
    }
    
    for(time=0;count!=n;time++){
        smallest=9;
        for(i=0;i<n;i++){
            if(at[i]<=time&&bt[i]<bt[smallest]&&bt[i]>0){
                smallest=i;
            }
        }
        bt[smallest]--;
        if(bt[smallest]==0){
            count++;
            end=time+1;
            wt=wt+end-at[smallest]-temp[smallest];
            //tat=ct-at
            //tat=wt+bt-> wt=tat-bt
            tat=tat+end-at[smallest];
        }
    }
    
    // avgwt=wt/n;
    // avgtat=tat/n;
    printf("\nAvg wt=%f",wt/n);
    printf("\nAvg tat: %f",tat/n);
    

}