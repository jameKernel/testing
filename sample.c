#include<stdio.h>

// int main(){
    
//     int number = 0;
//     repeat:
//     printf("%d\n", number);
//     number = number + 1;
//     if (number == 10)
//     {
        
//     }
//     else
//     {
//         goto repeat;
//     }
    
//     return 0;

// }
int main(){
    int x;
    int sum = 0, count = 0,max, min;
    float avg;
    printf("Enter the number of x: ");
    scanf("%d", &x);
    max = x;
    min = x;
    while (x > 0)
    {
        sum += x;
        
        if (x > max)
        {
            max = x;
        }
        else if ( x < min)
        {
            min = x;
        }
        
        count++;
        printf("Enter the number of x: ");
        scanf("%d", &x);
    }
    avg = sum / count;
    printf("The total sum: %d", sum);
    printf("The average value is: %f", avg);
    printf("The max number is: %d", max);
    printf("The min number is: %d", min);
    
}