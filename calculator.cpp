#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float addition(); 
float different(); 
float multiple(); // will return float type
float division(float dividend, float divisor); // will return integer type
float remainder(int dividend, float divisor);
float power(float base, int expo);
int factorial(int n); 
void optional();

int main(){
    while (1)
    {
        char usr_input;
        printf("************** THIS IS THE CALCULATOR **************\n");
        printf("Please press 'h' for help\n");
        printf("Please press 'c' for clear the terminal.\n");
        scanf("%c", &usr_input);
        switch (usr_input)
        {
            case 'h': optional(); break;

            case 'c': system("clear"); break;

            case '+': addition(); break;
            
            case '-': different(); break;
            
            case '*': multiple(); break;

            case '/':
                float div, dividend;
                printf("Enter divisor: "); scanf("%f", &div);
                printf("Enter dividend: "); scanf("%f", &dividend);
                division(dividend, div); break;

            case '%': 
                int d, q;
                printf("Enter divisor: "); scanf("%d", &d);
                printf("Enter dividend: "); scanf("%d", &q);
                remainder(d, q); break;

            case '^': 
                int base, exp;
                printf("Enter base: "); scanf("%d", &base);
                printf("Enter expotent: "); scanf("%d", &exp);
                power(base, exp); break;

            case '!': 
                int fac;
                printf("Enter the positive number of n: "); scanf("%d", &fac);
                if (fac > 0) factorial(fac); 
                else printf("Negative number is invalid!"); break;

            default: 
                printf("The entered input is not valid.\n"); 
                system("clear");
                optional();
                break;
        }
    }
    
    
    
}
void optional()
{
    printf("[h].    help\n");
    printf("[c].    clear the console/ terminal.\n");
    printf("[+].    Addition\n");
    printf("[-].    Different\n");
    printf("[*].    Multiple\n");
    printf("[<].    Division\n");
    printf("[>].    Remainder\n");
    printf("[!].    Factorial\n");
    printf("[^].    Power\n");
}

float addition(){
    float a, sum = 0.0;
    do{
        scanf("%f", &a);
        sum += a;
    }while(a != 0);
    return sum;
}

float different(){
    float a, diff = 0.0;
    do{
        scanf("%f", &a);
        diff -= a;
    }while(a != 0);
    return diff;
}

float multiple(){
    float a, multi = 0.0;
    do{
        scanf("%f", &a);
        multi *= a;
    }while(a != 0);
    return multi;
}

float division(float dividend, float divisor){
    float quatient; 
    quatient = dividend/divisor;
    return quatient;
}

float remainder(int dividend, int divisor){
    float fraction;
    fraction = dividend % divisor;
    return fraction;
}

float power(float base, int expo){
    float result = 1.0;
    int e = fabs(expo);
    for(int i=0; i<e; i++){
        result *= base;
    }
    if (expo < 0) return 1.0/ result;
    return base;
}

int factorial(int n){
    long int fact;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}