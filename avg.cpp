#include<stdio.h>
#include<iostream>
int main(){
    float value, sum= 0.0;
    int cnt= 0;
    do{
        std::cout<<"Enter value: ";
        std::cin>>value;
        sum += value;
        cnt++;
    }while(value >= 0);
    std::cout<<"The average of values is "<< sum/cnt <<std::endl;
}