#include<stdio.h>
int main()
{
    int process,i,p,t,j,exe[10],Pro[10],str[10],end[100],total=0,totalt=0;
    printf("Enter no. of process : ");
    scanf("%d",&process);
    for(i=1;i<=process;i++)
    {
        printf("Enter execution time for p%d : ",i);
        scanf("%d",&exe[i]);
    }
    for(i=1;i<=process;i++)
    {
        Pro[i]=i;
    }
    printf("process\tExecution time\n");
    for(i=1;i<=process;i++)
    {
        printf("p%d\t\t\t %d\n",i,exe[i]);
    }
    int n = process;
    for(i=0;i<n-1;++i){
        for(j=0;j<=n-i-1;++j){
            if(exe[j]>exe[j+1]){
                t=exe[j];
                exe[j]=exe[j+1];
                exe[j+1]=t;
                t=Pro[j];
                Pro[j]=Pro[j+1];
                Pro[j+1]=t;
        }
    }    
        }
    for(i=1;i<=n-1;i++)
    {
        str[i+1] = str[i] + exe[i];
    }
    for(i=0;i<=n;i++)
    {
        end[i+1] = end[i] + exe[i+1];
    }
    printf("Process\t Exe time\t Str\t End\n");
    for(i=1;i<=n;i++){
      
        printf("p%d\t\t\t %d\t\t %d\t\t %d\n",Pro[i],exe[i],str[i],end[i]);
    }
    
    
}