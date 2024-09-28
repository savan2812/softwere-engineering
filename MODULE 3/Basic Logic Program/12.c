/*12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/
#include<stdio.h>
int main() 
{
    int total,Students,PerStudent = 5;

    printf("Enter the number of students: ");
    scanf("%d", &Students);

    total = Students * PerStudent;

    printf("Total apples required: %d\n", total);

    return 0;
}
