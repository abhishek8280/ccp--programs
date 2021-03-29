#include<stdio.h>
#include<conio.h>
typedef struct student
    {
        int roll_no;
        char name[50],section,department[25],result;
        float fees,marks,highest_marks;
    }student;
    student s1,s2;
void StudentPrintAndCompare(struct student s1, struct student s2);
int main()
{
    
    printf("Enter the student_1 roll_no,name :\n");
    scanf("%d %s",&s1.roll_no,s1.name);
    fflush(stdin);
    printf("Enter the student_1 section,department, fees :\n");
    scanf("%c %s %f",&s1.section,s1.department,&s1.fees);
    fflush(stdin);
    printf("Enter the student_1 marks , result :\n");
    scanf("%f %c",&s1.marks,&s1.result);
    fflush(stdin);
    printf("Enter the student_2 roll_no,name :\n");
    scanf("%d %s",&s2.roll_no,s2.name);
    fflush(stdin);
    printf("Enter the student_2 section,department, fees :\n");
    scanf("%c %s %f",&s2.section,s2.department,&s2.fees);
    fflush(stdin);
    printf("Enter the student_2 marks , result :\n");
    scanf("%f %c",&s2.marks,&s2.result);
    fflush(stdin);
    StudentPrintAndCompare(s1,s2);
}
void StudentPrintAndCompare(struct student s1, struct student s2){
    printf("Student_1 details : Name=%s\n roll_no=%d\n section=%c\n department=%s\n fees=%f\n marks=%f\n result=%c\n",s1.name,s1.roll_no,s1.section,s1.department,s1.fees,s1.marks,s1.result);
    printf("Student_2 details : Name=%s\n  roll_no=%d\n section=%c\n department=%s\n fees=%f\n marks=%f\n result=%c\n",s2.name,s2.roll_no,s2.section,s2.department,s2.fees,s2.marks,s2.result);
    if(s1.marks>s2.marks)
    {
        printf("Highest marks is obtained by roll_no=%d\n  name=%s\n marks=%f\n",s1.roll_no,s1.name,s1.marks);
    }
    else {
        printf("Highest marks is obtained by roll_no=%d\n  name=%s\n  marks=%f\n",s2.roll_no,s2.name,s2.marks);
    }
    getch();
    return;
}
