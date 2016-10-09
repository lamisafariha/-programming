#include<stdio.h>
main()
{
int i,j,a;
scanf("%d",&a);
for(i=0;i<=a;i++)
{
for(j=0;j<=a;j++)
{
if(i==a||i==0||j==0||j==a)
printf("*");
else
printf(" ");
}
printf("\n");
}
printf("\n");
for(i=0;i<=a;i++)
{
for(j=0;j<=a;j++)
{
if(i==a||i==0||j==0||j==a)
printf("*");
else
printf(" ");
}
printf("\n");
}
for(i=4;i<=6;i++)
{
printf("*\n");
}
printf("\n");
for(i=0;i<=a;i++)
{
for(j=0;j<=a;j++)
{
if(i==a||i==0||j==0||j==a)
printf("*");
else
printf(" ");
}
printf("\n");
}
for(i=4;i<=6;i++)
{
printf("*\n");
}
printf("\n");
for(i=0;i<=6;i++)
{
for(j=0;j<=a;j++)
{
if(i==3||i==0||j==0||j==a)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
