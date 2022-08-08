/*
    SIM Team
    12 - 7 - 2022/ Akai
    population.c

*/
#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

long int density_of_popu(float a, long p);
int growth_popu(long p, float rate, short next_years,  short curr_year=2022); // current year as default 2022

// global variable 
const float RATIO = 1.0/2.788e+7; // sq mile to sq feet
const int N_YEARS = 2022; // current years 

int main(){
    long int p; // population
    int density; // density of population by feet
    float percent; // average percent of population rating
    float area; // with miles
    short year;
    cout<<"Enter the population: ";
    cin >> p;
    cout<<"Enter the average percent of population rate: ";
    cin>> percent;
    cout<<"Enter the area of the town: ";
    cin>> area;
    cout << "Enter the next coming year: ";
    cin >> year;
    density = density_of_popu(area, p); // current density of population
    cout<< "The current density of population is " << density <<endl;
    long int population = growth_popu(p, percent, year, N_YEARS);
    density = density_of_popu(area, population); // after the next years of density of population 
    cout<< "The "<< year << " of density of population is " << density <<endl;
}
long int density_of_popu(float a, long p){
    double ft= 0.0; // feet
    ft = RATIO * a;
    float dens = ft*p;
    cout<<dens<<endl;
    return ceil(dens);
}

int growth_popu(long p, float rate, short next_years, short current_year){
    int cnt = next_years - current_year;
    for (int i = 0; i < cnt; i++)
    {
        p += p*(rate/100.0);
    }
    cout<< p <<endl;
    return p;
    
}