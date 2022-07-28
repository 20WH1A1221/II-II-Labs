#include<stdio.h>
int main(){
    int stream[20],frames;
    int pf=0,n,i,j;
    printf("Enter the size of stream\n");
    scanf("%d",&n);
    printf("Enter stream\n");
    for(i=0;i<n;i++){
    	scanf("%d",&stream[i]);
    }	
    printf("Enter number of frames\n");
    scanf("%d",&frames);
    int s;
    int temp[frames];
    for(i=0;i<frames;i++){
        temp[i]=-1;
    }
    for(i=0;i<n;i++){
        s=0;
        for(j=0;j<frames;j++){
              if(stream[i]==temp[j]){
                    s++;
                    pf--;   
              }
        }
        pf++;
        if((pf<=frames) && (s==0)){
              temp[i]=stream[i];
        }
        else if(s==0){
              temp[(pf-1)%frames]=stream[i];
        }
        printf("\n");
        printf("%d\t\t\t",stream[i]);
        for(j=0;j<frames;j++){
            if(temp[j]!=-1){
                printf("%d\t\t\t",temp[j]);
            }
            else
               printf("-\t\t\t");
        }
    }
    printf("Total page faults:\t%d\n",pf);
    return 0;
    
}                   
                     
              
