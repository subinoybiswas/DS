#include<stdio.h>

typedef struct stu{
    char name[50];
    char id[15];
    int semester;
    long long rollno;
    float cgpa;

} Student;
int main(){
    Student Subinoy;
    printf("Enter Name: ");
    gets(Subinoy.name);
    printf("Enter College ID: ");
    gets(Subinoy.id);
    printf("Enter your current semester: ");
    scanf("%d",&Subinoy.semester);
    printf("Enter your Roll No.: ");
    scanf("%lld",&Subinoy.rollno);
    printf("Enter your CGPA: ");
    scanf("%f",&Subinoy.cgpa);

    printf("\n\tRECEIEVED INFO\n\n");
    printf("Name: %s\n",Subinoy.name);
    printf("College ID: %s\n",Subinoy.id);
    printf("Current Semester: %d\n",Subinoy.semester);
    printf("Roll No: %lld\n",Subinoy.rollno);
    printf("CGPA: %0.2f\n",Subinoy.cgpa);
}