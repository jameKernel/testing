#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a character: ";
    cin >> c; // '/n' မတိုင်မချင်း ရိုက်လို့ရတယ်။ ဆိုပေမယ့် ယူသွားတဲ့ char သည် ရှေ့ဆုံး char ကိုပဲယူသွားပါတယ်
    cout<<"the charcter that you entered was: "<<c<<endl;
    cin.get(c);
    cout<<"The charcter that you entered was: "<<c<<endl;

}