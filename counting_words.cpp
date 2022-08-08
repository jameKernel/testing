#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
int main(){
    int n;
    float x, sum, avg;
    ifstream fin;
    ofstream fout;
    fin.open("doc.txt");
    if (fin.fail()){
        cout<<"Can't open doc.data"<<endl;
        return 0;
    }
    fout.open("final.data");
    if (fout.fail()){
        cout<<"Can't open final.data"<<endl;
        return 0;
    }
    sum = 0.0;
    n = 0;
    cout<< "Reading input file"<<endl;
    fin>>x;
    cout<<x;
    while (!fin.eof())
    {
        sum += x;
        n++;
        fin>>x;
    }
    avg = sum /n;
    cout<<"Writing results to file "<<endl;
    fout<<"The average of "<<n << " numbers is "<< avg<<endl;
    fin.close();
    fout.close();
    return 0;
}