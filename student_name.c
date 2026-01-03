#include<stdio.h>
#include<conio.h>

void main()
{
	char sname[50];
	int rno,s1,s2,s3,Total;
	double per;
	printf("\nEnter student name : ");
	gets(sname);
	printf("\nEnter Roll no of the student : ");
	scanf("%d",&rno);
	printf("\nEnter marks of subject 1 : ");
	scanf("%d",&s1);
	printf("\nEnter marks of subject 2 : ");
	scanf("%d",&s2);
	printf("\nEnter marks of subject 3 : ");
	scanf("%d",&s3);
	Total=s1+s2+s3;
	per=Total / 3.0;
	printf("\nStudent name : %s",sname);
	printf("\nRollno : %d",rno);
	printf("\nTotal : %d",Total);
	printf("\nper : %lf",per);
	
	if(per>=70)
	{
		printf("\nDistinction");
		
	}
	else if(per>=60)
	{
		printf("\nFirst class");
	}
	else if(per>=50)
	{
		printf("\nsecond class ");
		
	}
	else if(per>=40)
	{
		printf("\npass class");
	}
	else 
	{
		printf("\nfail");
	}
	getch();
}
