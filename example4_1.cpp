#include<stdio.h>

int main(){
    // int wave_amount = 3000040040400408;
    int current_amount = 60000;
    int transfer_amount;
    printf("Enter the transfer amount: ");
    scanf("%d", &transfer_amount);
    if (current_amount >= transfer_amount)
    { // scope 
        printf("You can transfer to another person.");
        current_amount = current_amount - transfer_amount;
        printf("Your current amount is: %d", current_amount);
    }
    if (current_amount < transfer_amount)
    {
        printf("Your transfer amount is greater than your current amount.\n");
    }
    
}