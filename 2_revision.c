#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int arrival[100],burst[100],rt[100],turn=0,total_time,i,smallest_process,tq,flag,flag1=0,flag2=0,index=1024,process_queue[100],q_var=0;
    int remain=0,n,time,total_wait=0,total_turnaround=0;
    sleep(1);
    printf("\t\t\t***Process Scheduling initiated*** \n\n");
    sleep(1);
	printf("Enter number of Processes: ");
    scanf("%d",&n);
     for(i=0;i<(n*5);i++)
    {
    	process_queue[i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("Enter arrival time for Process P[%d]: ",i+1);
        scanf("%d",&arrival[i]);
        printf("Enter burst time for Process P[%d]: ",i+1);
        scanf("%d",&burst[i]);
        rt[i]=burst[i];
    }
    
	printf("Enter time quantum less than 10: ");
        scanf("%d",&tq);
        if(tq<11)
        {
    printf("\n\t\t!!!Processor will not entertain any process for 3 time units!!!\n\n");
    while(turn<3)
	{
	sleep(1);
    turn++;
	}
	printf("\t\t\t\t\tNow Scheduling Processes");
	sleep(1);
	printf("\n\nProcess\t|Waiting Time|Turnaround Time \n\n");
    rt[9]=1024;
    time=0;
    while(remain!=n)
    {
	flag=0;
        smallest_process=9;
        for(i=0;i<n;i++)
        {
            if(arrival[i]<=time && rt[i]<=rt[smallest_process] && rt[i]>0)
            {
                smallest_process=i;
            }
        }
	if(rt[smallest_process]>=tq){
		flag=1;
        rt[smallest_process]=rt[smallest_process]-tq;
        process_queue[q_var]=smallest_process+1;
        q_var++;
		}
	else if(rt[smallest_process]<tq){
		flag=2;
		if(flag2==0){
			index=smallest_process;
			flag2=1;
		}
		if(smallest_process!=index)time=time-tq;
		time+=rt[smallest_process];
		rt[smallest_process]=0;
		process_queue[q_var]=smallest_process+1;
		q_var++;
		}
        if(rt[smallest_process]==0)
        {
		if(flag1==0){
			index=smallest_process;
			flag1=1;
		}
		remain++;
		if(flag==1)
            total_time=time+tq;
		else if(flag==2)
	    total_time=time;
		else
	    total_time=time+tq;
	//	printf("\n\n%d",total_time);
            printf("\n\nP[%d]\t|\t%d\t|\t%d\n\n",smallest_process+1,total_time-burst[smallest_process]-arrival[smallest_process]+turn,total_time-arrival[smallest_process]+turn);
			total_wait+=total_time-burst[smallest_process]-arrival[smallest_process]+turn;
            total_turnaround+=total_time-arrival[smallest_process]+turn;
            sleep(1);
        }
        time=time+tq;
    }
    printf("\n\nAverage waiting time = %f\n",total_wait*1.0/n);
    printf("Average Turnaround time = %f\n",total_turnaround*1.0/n);
    q_var=0;
    printf("Process Queue:\t");
    while(process_queue[q_var]>0)
    {
    	sleep(1);
    	printf("P[%d]  ",process_queue[q_var]);
    	q_var++;
    	
	}
}
    return 0;
}
