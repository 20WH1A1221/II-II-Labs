#include<stdio.h>
int main(){
    int process[10]={1,2,3};
    int bt[10]={5,8,12};
    int n,wt[10],tat[10],i;
    float total_wt=0,average_wt=0,total_tat=0,average_tat=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
      wt[0]=0;
      wt[i]=wt[i-1]+bt[i-1];
    }
    for(i=0;i<n;i++){
       tat[0]=0;
       tat[i]=bt[i]+wt[i];
    }
        
    for(i=0;i<n;i++){
         total_wt+=wt[i];
         total_tat+=tat[i];
    
         printf("%d\t %d\t\t %d\t %d\n",i+1,bt[i],wt[i],tat[i]);
     }
     average_wt=(float)total_wt/(float)n;
     average_tat=(float)total_tat/(float)n;
     printf("Average waiting time is: %f\n",average_wt);
     printf("Average turn around time is: %f",average_tat);    
     return 0;
}     
         
    
    
