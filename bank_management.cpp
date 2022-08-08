#include<iostream>
#include<stdio.h>
#include<string.h>

void hr();
void heading_menu();
int main(){
    char str[100];
    int dec, max=0, min=0;
    FILE *in; // read as 'file pointer in'
    in = fopen("input.txt", "r");
    fscanf(in, "%d", &dec);
    max, min = dec;
    while (dec > 0)
    {
        fscanf(in, "%d", &dec);
        if (dec > max){
            max = dec;
            printf("assign max to %d\n", dec);
        }
        else if ( dec < min){
            if (dec == 0) {}
            else{
                printf("assign min to %d\n", dec);
            min = dec;
            }
        }
    }
    
    fclose(in);
    printf("The max number is: %d\n", max);
    printf("The min number is: %d", min);
    printf("%s", str);
    FILE *expo = fopen("output.txt", "w");
    fprintf(expo, "The max number is:%d\n The min number is:%d", max, min);
}

void heading_menu(){
    printf("++++++++++++++++++++++++++++++++++++++ Bank System Management System ++++++++++++++++++++++++++++++++++++++\n");
    hr();
    printf("|\n|\n");
    printf("|\t\t\t[1]. Bank Account Create.\t\t\t|\n");
    printf("|\t\t\t[2]. Login .\t\t\t|\n");
    printf("|\t\t\t[3]. Bank Account Create.\t\t\t|\n");
    printf("|\t\t\t[1]. Bank Account Create.\t\t\t|\n");
    printf("|\t\t\t[1]. Bank Account Create.\t\t\t|\n");
    printf("|\t\t\t[1]. Bank Account Create.\t\t\t|\n");
    printf("|\t\t\t[1]. Bank Account Create.\t\t\t|\n");
    
}

void hr(){
    for (int i = 0; i < 50; i++)
    {
        printf("_");
    }
    
}
