#include <stdio.h>

struct student {
    char name[20];
    int rno;
    int t_marks;
};

int main() {
    struct student std;
    printf("Enter name of student: \n");
    scanf("%s", std.name);
    printf("Enter roll no of student: \n");
    scanf("%d", std.rno);
    printf("Enter percentage of student: \n");
    scanf("%d", std.t_marks);
   
    printf("Student Name: %s\n", std.name);
  printf("Student Roll No: %d\n", std.rno);
    printf("Student Percentage: %d\n", std.t_marks);
    return 0;
}
