#include<stdio.h>

int main(){
    int work_hours, hourly_rate, ot ;
    float ot_wage, wage;
    const int reg_wk_hr = 40;
    const float ot_rate = 1.5;
    printf("Enter an employee's worked hours: ");
    scanf("%d", &work_hours);
    printf("Enter hourly rate: ");
    scanf("%d", &hourly_rate);
    if (work_hours > reg_wk_hr){
        ot = work_hours - reg_wk_hr; 
        ot_wage = ot * (hourly_rate* ot_rate);
        wage = (reg_wk_hr * hourly_rate) + ot_wage;
    }
    else{
        wage = work_hours * hourly_rate;
    }
    printf("The employee's total wage is %f", wage);
}

// id376
// အလုပ်သမား -> 10000 = 8 hours overtime 1500 1hour
// တပတ်ကို တခါရှင်း 
// အနည်းဆုံး ၈ * ၅ = ၄၀ ၁၀၀၀၀*၅ ၅၀၀၀၀
// အချိန်ပို ၅ ၁၅၀၀ * ၅ = ၇၅၀၀ + ၅၀၀၀၀ = ၅၇၅၀၀