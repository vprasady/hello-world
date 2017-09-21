#include<stdio.h>
void main()
{
float u,a,t,v,s;
printf("enter value of velocity (u)= ");
scanf("%f",&u);
printf("\nenter value of acceleration (a)= ");
scanf("%f",&a);
printf("\nenter value of time in sec (t)= ");
scanf("%f",&t);	

v=u+a*t;
s=u+a*t*t;

printf("\nfinal velocity = %f",v);
printf("\nTotal distance travel = %f",s);
}
