#include<stdio.h>
int main()

{
    int English,Hindi,Maths,Science,SS;
    printf ("The marks of the student in English out of 100 is: \n");
    scanf("%d",&English);
    
    printf("The marks of the student in Hindi out of 100 is: \n");
    scanf("%d",&Hindi);
    
    printf("The marks of the student in Maths out of 100 is: \n");
    scanf("%d",&Maths);
    
    printf("The marks of the student in Science out of 100 is: \n");
    scanf("%d",&Science);
    
    printf("The marks of the student in SS out of 100 is: \n");
    scanf("%d",&SS);
    
    int TotalMarks=English+Hindi+Maths+Science+SS;
    float Totalpercentage=(English+Hindi+Maths+Science+SS)/500.0 * 100 ;
    printf("The total marks of the student is %d and the Total percentage is %f",TotalMarks,Totalpercentage);
    return 0;
}