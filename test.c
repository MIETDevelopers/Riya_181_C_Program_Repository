#include<stdio.h>
int main(){
    struct student
    {
        char name[20];
        int rollno;
        float marks;
    };
    struct student s1[10];
    for(int i=0;i<5;i++)
    {
        printf("Enter student %d name, rollno, marks:\n",i+1);
        scanf("%s",&s1[i].name);
        scanf("%d",&s1[i].rollno);
        scanf("%f",&s1[i].marks);
    }
    for(int i=0;i<5;i++)
    {
        printf("student %d name : %s\n",i+1,s1[i].name);
        printf("student %d rollno : %d\n",i+1,s1[i].rollno);
        printf("student %d marks : %f\n",i+1,s1[i].marks);
    }
}
