#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void main()
{
int s[10],pr[10],i,j,n,z,bt[10],wt[10];
float average_wt,total;
printf("Ques.Ten students (a,b,c,d,e,f,g,h,i,j) are going to attend an event. There are lots of gift shops, \n");
printf("they all are going to the gift shops and randomly picking the gifts. After picking the gifts they are randomly arriving in the billing counter.\n");
printf(" The accountant gives the preference to that student who has maximum number of gifts.");
printf("\n\nEnter Number of Students Came To The Gift Shop:");
scanf("%d",&n);
 
for(i=0;i<n;i++)
{
printf("\nS[%d]\n",i+1);
printf("Enter the Maximum Gifts Took By A Student: ");
scanf("%d",&pr[i]);
printf("Billing Time Of Student: ");
scanf("%d",&bt[i]);
s[i]=i+1;                 
}

for (i=0;i<n;++i) 
{
for (j=i+1;j<n;++j) 
{
if (pr[i]<pr[j]) 
{
z=pr[i];
pr[i]=pr[j]; 
pr[j]=z;


z=bt[i];
bt[i]=bt[j];
bt[j]=z;

z=s[i];
s[i]=s[j]; 
s[j]=z;
}
}
}
wt[0]=0;

for(i=1;i<n;++i)
{
wt[i]=0;
for(j=0;j<i;++j){
wt[i]=wt[i]+bt[j];
average_wt=+wt[i];
}
}
total=(float)average_wt/n;
printf("\nStudents\t\tMax-Gifts\t\tBilling-time\t\twaiting-time\t");
for (i=0;i<n;i++) 
{
printf("\nS[%d]\t\t\t%d\t\t\t%d\t\t\t\t%d\n",s[i],pr[i],bt[i],wt[i]);
};
printf("\n\nAverage Waiting Time Of A Student=%f\n",total);
}
