#include<stdio.h>

struct time
{
       int p,art,but,wtt,tat,st,ft;
}a[100];

int process(struct time a[], int pro)
{
       int i,j,temp;//minpro, mintime=999;
       for(i=0;i<pro;i++)
        {       
            for(j=0;j<pro;j++)
                {
                if(a[i].but<a[j].but)
                {
                    temp=a[i].but;
                    a[i].but=a[j].but;
                    a[j].but=temp;
                    
                    
                    temp=a[i].art;
                    a[i].art=a[j].art;
                    a[j].art=temp;

                    
                    temp=a[i].p;
                    a[i].p=a[j].p;
                    a[j].p=temp;

              /*if(a[i].art <= t && a[i].st == 0)
              {
                     if(mintime > a[i].but)
                     {
                           mintime = a[i].but;
                           minpro = i;
                     }
              }*/
               }
else if(a[i].but==a[j].but)
{
if(a[i].art<a[j].art)
{
                    temp=a[i].but;
                    a[i].but=a[j].but;
                    a[j].but=temp;
                    
                    
                    temp=a[i].art;
                    a[i].art=a[j].art;
                    a[j].art=temp;

                    
                    temp=a[i].p;
                    a[i].p=a[j].p;
                    a[j].p=temp;
}

}
            }
        }
//       a[minpro].st = 1;
  //     return minpro;
}

void ganttchart(struct time a[],int gc[],int pro)
{
       int i,x=a[0].art;
       printf("Gantt Chart\n");
//       printf("0");
printf("%d",a[0].art);
       for(i=0;i<pro;i++)
       {
              x = x + a[i].but;
              printf(" -> [P%d] <- %d",a[i].p,x);
       }
       printf("\n");
       return;
}

int main()
{
       int i,pro,curpro,t=0,gc[100];
int totwt=0,totta=0;
//       struct time a[100];
       float avgwt=0,avgtt=0;
       printf("SJF (Shortest Job First) - Non Preemptive\n");
       printf("Note -\n1. Arrival Time of at least on process should be 0\n2. CPU should never be idle\n");
       printf("Enter Number of Processes\n");
       scanf("%d",&pro);
       for(i=0;i<pro;i++)
       {
              printf("Enter Arrival Time & Burst Time for Process P%d\n",i);
              a[i].p = i;
              scanf("%d%d",&a[i].art,&a[i].but);
              a[i].st = 0;
       }
       process(a,pro);
       for(i=0;i<pro;i++)
       {
//              curpro = process(a,pro,t);
               
            
/*  a[curpro].wtt = t - a[curpro].art;
              a[curpro].tat = a[curpro].art + a[curpro].but;
              t = t + a[curpro].but;
              avgwt = avgwt + a[curpro].wtt;
              avgtt = avgtt + a[curpro].tat;
              gc[i] = curpro;*/
 if(i==0)
        {
            a[i].st=a[i].art;
            a[i].wtt=a[i].st-a[i].art;
            a[i].ft=a[i].st+a[i].but;
            a[i].tat=a[i].ft-a[i].art;
        }
        else
        {
            a[i].st=a[i-1].ft;
            a[i].wtt=a[i].st-a[i].art;
            a[i].ft=a[i].st+a[i].but;
            a[i].tat=a[i].ft-a[i].art;
        }
        totwt+=a[i].wtt;
        totta+=a[i].tat;
       }
       printf("***************************************\n");
       printf("Pro\tArTi\tBuTi\tTaTi\tWtTi\n");
       printf("***************************************\n");
       for(i=0;i<pro;i++)
       {
              printf("%d\t%d\t%d\t%d\t%d\n",a[i].p,a[i].art,a[i].but,a[i].tat,a[i].wtt);
       }
       printf("***************************************\n");
       ganttchart(a,gc,pro);
       printf("***************************************\n");
       avgwt = totwt/pro;
       avgtt = totta/pro;
       printf("Average Waiting Time : %.2f\n",avgwt);
       printf("Average Turnaround Time : %.2f\n",avgtt);
       return 0;
}
