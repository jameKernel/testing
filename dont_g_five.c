#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int start, count=0;
    int end;
    int n[1600]; 
    int q,r; // quotient and remainder
    int e = 0; // expotential
    printf("Enter the start: ");
    scanf("%d", &start);
    printf("Enter the end point: ");
    scanf("%d", &end);
    if (start == 0) {n[0]= 0; count = 1;}
    for (int i = start; i <= end; i++)
    {
        int e = log10(abs(i)); // 10^2 = 100 log10 0 = 100 + 20 + 2
        int temp = abs(i);
        printf("%d", e);
        for (int b = e; b>=0; b--){
            int p = pow(10, b); // factor of 10
            printf("Temp: %d, p: %d, q: %d, r: %d\n ", temp, p, q, r);
            q = temp / p;
            temp = temp % p;
            r = temp;

            if (r == 5 || q == 5){ break;}   
        }
        if (r == 5 || q == 5){}
        else
        {
            n[count] = i;
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d,", n[i]);
    }
}