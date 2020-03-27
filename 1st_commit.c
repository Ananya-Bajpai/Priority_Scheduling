#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
	char Student[10][2],Bill[2];
	int i,j,gift[10],temp,num;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter name of student %d: ",i+1);
  		scanf("%s",&Student[i]);
		printf("Enter no of gifts: ");
		scanf("%d",&gift[i]);
	}

  	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{

			if(gift[i]>gift[j])
			{
				temp=gift[i];
				gift[i]=gift[j];
				gift[j]=temp;
				strcpy(Bill,Student[i]);
				strcpy(Student[i],Student[j]);
				strcpy(Student[j],Bill);
			}
		}
	}
	printf("Order in which students are billed:");
	printf("No. of Gifts");
	for(i=num-1;i>=0;i--)
	{
	   printf(" %s %d" ,Student[i],gift[i]);
	}
	getch();
}
