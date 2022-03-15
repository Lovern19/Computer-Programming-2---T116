#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
   
    {
        printf("Wrong Entry");
    } 
         else if(marks<=50)
    
    {
        printf("Grade F");
    }
      
       else if(marks>=50 && marks <60)
    
    {
        printf("Grade D");
    }
    else if(marks>=60 && marks <68)
    {
        printf("Grade C");
    }
    else if(marks>=68 && marks<76)
    {
        printf("Grade B-");
    }
    else if(marks>=76 && marks<84)
    {
        printf("Grade B");
    }
    else if(marks>=84 && marks<92)
    {
        printf("Grade A-");
    }
    else if(marks>=92 && marks<99)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A");
    }
}