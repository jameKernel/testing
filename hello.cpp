#include<iostream>
using namespace std;
int main(){
    char c; 
    char string[100]; // string variable
    int count = 0;
    cout<< "Enter a string: "<<endl;
    cout<<'\t';
    cin.get(c);
    cout<<c<<c<<endl;
    while (c != '\n')
    {
        string[count] = c;
        count++;
        cin>>c;
    }
    string[count] = '\0';
    cout<<"The input string was \t"<< string << endl;
    cout<<"The number of characters are "<< count<<endl;
}