#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
	char Student[10][2],Bill[2];
	int i,j,gift[10],temp,num;
	// Get the number of students
	printf("Enter number of students: ");
	scanf("%d",&num);
	if(num<=0 || num>10)
    {
        exit(0);
    }
    // Get the name and number of gifts purchased by the students
	for(i=0;i<num;i++)
	{
		printf("\nEnter name of student %d: ",i+1);
  		scanf("%s",&Student[i]);
		printf("Enter no of gifts: ");
		scanf("%d",&gift[i]);
	}
	// Sorting to arrange the students in descending order of number of gifts purchased
	// for billing
  	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{

            // If number of gifts greater then sort
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
    // Print the order in which students are billed
	printf("\nOrder in which students are billed:\n");
	printf("\nName\t No. of Gifts\n");
	for(i=num-1;i>=0;i--)
	{
	   printf(" %s\t %d\t\n" ,Student[i],gift[i]);
	}
	getch();
}
