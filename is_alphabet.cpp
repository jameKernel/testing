#include<iostream>
#include<stdio.h>
using namespace std;
int is_alphabet(char c); 

int main(){
A:  char usr_input;
    printf("Enter a character: ");
    cin.get(usr_input);
    // char string[6] = is_alphabet(usr_input); // will return false or true
    printf("%c\n", is_alphabet(usr_input)); // character arrary => string
    
}

int is_alphabet(char c){
    short int index = 26, i = 0;
    char result; 
//     const char upper_list[index] = {
//         'A', 'B', 'C', 'D', 'E',
//         'F', 'G', 'H', 'I', 'J',
//         'K', 'L', 'M', 'N', 'O',
//         'P', 'Q', 'R', 'S', 'T',
//         'U', 'V', 'W', 'X', 'Y','Z'
//         };
//     const char lower_list[index] = {
//         'a', 'b', 'c', 'd', 'e',
//         'f', 'g', 'h', 'i', 'j',
//         'k', 'l', 'm', 'n', 'o',
//         'p', 'q', 'r', 's', 't',
//         'u', 'v', 'w', 'x', 'y','z'
//         };
            if ( 65 <= c <= 90 || 97<= c <= 122 ){
                result = 'T';
            }
            else{
                result = 'F';
            }
        return result;
}