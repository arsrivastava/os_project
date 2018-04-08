#include<stdio.h>
#include<fcntl.h>
#include<conio.h>
int main()
{
int number,process[10],queue[50],flag=0,time_quantum,arrival[20],brust_time[50],j,k,l,count,;
printf("enter no of processes");
scanf("%d",&number);
for(int i=1;i<=number;i++)
{
	printf("Arrival time and cpu time brust for process for \n");
	printf("p[%d]\n",i);
	process[i]=i;
	scanf("%d",&arrival[i]);
	scanf("%d",&brust_time[i]);
}
printf("\n");
printf("enter time quantum\n");
scanf("%d",&time_quantum);
if(time_quantum>10)
{
	printf("please enter time_quantum less than 10");
	return 0;
}
printf("\n");
printf("process  \tarrival time\tcpu brust time\n");
for(int i=1;i<=number;i++)
{
	printf("process P[%d]\t",i);
	printf("%d\t\t",arrival[i]);
	printf("%d\n",brust_time[i]);
}
       int tq=	time_quantum
 for(time=0;remain!=n;time=time+tq)
    {
	flag=0;
        s=9;
        for(i=0;i<n;i++)
        {
            if(at[i]<=time && rt[i]<=rt[s] && rt[i]>0)
            {
                s=i;
            }
        }
	if(rt[s]>=tq){
		flag=1;
        rt[s]=rt[s]-tq;
		}
	else if(rt[s]<tq){
		flag=2;
		if(flag2==0){
			index=s;
			flag2=1;
		}
		if(s!=index)time=time-tq;
		time+=rt[s];
		rt[s]=0;
		}
        if(rt[s]==0)
        {
		if(flag1==0){
			index=s;
			flag1=1;
		}

            remain++;
		if(flag==1)
            endTime=time+tq;
		else if(flag==2)
	    endTime=time;
		else
	    endTime=time+tq;
}
