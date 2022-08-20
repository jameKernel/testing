#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    const char fraction = '.';
    const char digit[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char datatype[6]="";
    printf("Enter the value");
    scanf("%s", string);
    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (string[i]== fraction)
            {
                datatype[] = "float";
                break;
            }
            else datatype[] = "int";
            
        }
        
    }
    
}
