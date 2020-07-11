#include<stdio.h>
void main()
{
int mark=0;
printf("Enter the mark of student:");
scanf("%d",&mark);

if(mark>=85&&<=100)
printf("Grade A");
else if(mark>=70&&<=84)
printf("Grade B");
else if(mark>=55&&<=69)
printf("Grade C");
else if(mark>=40&&<=54)
printf("Grade D");
else
printf("Grade F");

return(0);
}
