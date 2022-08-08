#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

void caeser_encrpyt(int Key, char str[]){
    cout<< str;
    char string[100];
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 32){ string[i] = ' ';}
        else{
            str[i]= str[i] + Key;
            string[i] = str[i];
            if (str[i] > 122) {
                str[i] -= 26;
                string[i] = str[i];
            }
        }
        // cout<< str;
    }
    cout << string << endl;

    // return 0;
}

int main(){
    char str[100], ch;
    int n=0;
    cout<<"Enter a string: ";

    do
    {
        cin.get(ch);
        str[n] = ch;
        n++;
        
    } while (ch != '\n');
    str[n] = '\0';
    cout<<str<<endl;
    caeser_encrpyt(3, str);
}

