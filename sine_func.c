#include<stdio.h>
#include<math.h>

int main(){
    const float deg_to_rad = M_PI/180;
    int x = 0;
    float radian, sin_value;
    printf("DEGREE\t\t\t\t\t Sin(Degree)");
    while (x <= 90)
    {
        radian = x * deg_to_rad; 
        sin_value = sin(radian);
        printf("%d\t\t\t\t\t %f\n", x, sin_value);
        x++;
    }
    
}