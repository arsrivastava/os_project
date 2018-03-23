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
for(i=0;i<100;i=i+time_quantum)
{
	if(i=arrival[i])
	{
		printf()
	}
}
}
