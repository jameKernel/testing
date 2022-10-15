#include<stdio.h>
int main(){
    int math, science, program, jp; // subjects' marks
    int G_math, G_sci, G_prog, G_jp; // subjects' grades.
    int marks, count = 1;
    float avg = 0.0, total_marks = 0.0;
    printf("Enter a student of math: ");
    scanf("%d", &math);
    printf("Enter a student of science: ");
    scanf("%d", &science);
    printf("Enter a student of programming: ");
    scanf("%d", &program);
    printf("Enter a student of japanese: ");
    scanf("%d", &jp);
    total_marks = math + science + program + jp;
    avg = (total_marks)/4.0;
    printf("%d %d %d %d\n", math, science, program, jp);
    loop: // run again these instructions
    if(count == 1){
        marks = math;
        printf("%d", marks);
        if (marks >= 0 && marks <= 20) G_math = 'F';
        else if (marks > 20 && marks <= 40) G_math = 'D';
        else if (marks > 40 && marks <= 60) G_math = 'C';
        else if (marks > 60 && marks <= 80) G_math = 'B';
        else if (marks > 80 && marks <= 100) G_math = 'A';
    }
    else if (count == 2)
    {
        marks = science;
        if (marks >= 0 && marks <= 20) G_math = 'F';
        else if (marks > 20 && marks <= 40) G_sci = 'D';
        else if (marks > 40 && marks <= 60) G_sci = 'C';
        else if (marks > 60 && marks <= 80) G_sci = 'B';
        else if (marks > 80 && marks <= 100) G_sci = 'A';
    }
    else if (count == 3){
        marks = program;
        if (marks >= 0 && marks <= 20) G_math = 'F';
        else if (marks > 20 && marks <= 40) G_prog = 'D';
        else if (marks > 40 && marks <= 60) G_prog = 'C';
        else if (marks > 60 && marks <= 80) G_prog = 'B';
        else if (marks > 80 && marks <= 100) G_prog = 'A';
    }
    else if (count == 4){
        marks = jp;
        if (marks >= 0 && marks <= 20) G_jp = 'F';
        else if (marks > 20 && marks <= 40) G_jp = 'D';
        else if (marks > 40 && marks <= 60) G_jp = 'C';
        else if (marks > 60 && marks <= 80) G_jp = 'B';
        else if (marks > 80 && marks <= 100) G_jp = 'A';
    }
    else goto endloop; // if count is next 4 repeat instructions will be exit.
    count++;
    goto loop;
    endloop:
    if (avg > 50){
        printf("This student pass the exam.\n ");
        printf("\t\tReported Card!!!\n");
        printf("%c\t%c\t%c\t%c\t\t%.2f\t%.2f", G_math, G_sci, G_prog, G_jp, avg, total_marks);
    }
    esle{
        printf("This student fail the exam.\n");
        printf("\t\tReported Card!!!\n");
        printf("%c\t%c\t%c\t%c\t\t%.2f\t%.2f", G_math, G_sci, G_prog, G_jp, avg, total_marks);
}
