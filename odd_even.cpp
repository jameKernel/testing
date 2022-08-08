#include<stdio.h>
int main(){
 A:   int n; //-9
    printf("Enter a value: ");
    scanf("%d", &n); //6 /2 -> 0
    if (n < 0)
    {
        printf("This number is negative.\n");
    }
    else
    {
        if (n > 0){
            printf("This number is positive.\n"); 
            }
        else{
            printf("This number is zero. There is no polarity.\n");
        }
    }

    goto A;
    
    
}
