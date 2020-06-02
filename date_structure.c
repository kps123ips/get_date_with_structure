#include<stdio.h>
struct date
{
	int d,m,y;
};
void main()
{
	struct date today,d1;
	d1=today;
	printf("Enter todays Date");
	scanf("%d / %d / %d",&d1.d,&d1.m,&d1.y);
	printf("Date : %d / %d / %d",d1.d,d1.m,d1.y);
	getch();
	
}
