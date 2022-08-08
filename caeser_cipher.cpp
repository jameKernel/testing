#include<iostream>

using namespace std;


char caeser_encrypt(int n, char str[]);
int main(){
    int n;
    char str[100];
    float avg;
    char data[100];
    cout<< "Enter how many time to encrypt: ";
    cin >> n;
    getchar();
    cout<< "Enter a string: ";
    cin >> data;
    getchar();
    avg = caeser_encrypt(n, data);
//  ceaser(n, str);
}

char caeser_encrypt(int n, char str[]){
    char string [100];
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 32) {}
        else{
            str[i]+= n;
            if (str[i] > 122) str[i] -= 26;
        }
    }
    cout<< str<<endl;
    return 0;
}