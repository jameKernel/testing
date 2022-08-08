#include<graphics.h>
#include<iostream>
#include<stdio.h>
#include<string.h>

typedef struct Employee
{
    char empID[20];
    char fname[20];
    char lname[20];
    int age;
    float bsal;
    long phone;
} Employee;
FILE *fp;
Employee emp;
char fileName[] = "EMP.txt";
char tempFileName[] = "temp.txt";

void AddEmployee();
void ListEmployee();
void SearchEmployee();
void ModifyEmployee();
void first();
void file();
int main(){
    char ch = 'a';
    int gd = DETECT, gm, x, y;
}
