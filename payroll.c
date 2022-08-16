#include<stdio.h>
#include<string.h>

const int MaxRegularHours = 40;
const int OvertimeFactor = 1.5;

int main(){
    FILE *in = fopen("paydata.txt", "r");
    FILE *out = fopen("payroll.txt", "w");
    typedef char name[10]; // user-defined data type
    name fstName, lstName; // char array 
    char Name[40]; // fstName + lstName
    double hours, rate, regPay, ovtPay, netPay;

    fprintf(out, " Name\t\t\tHours\t\tRate\t\tRegular\t\tOvertime\t\tNet\n");
    for (int i = 0; i < 75; i++)
    {
        fprintf(out, "=");
    }
    fprintf(out, "\n\n");
    fscanf(in, "%s", fstName);
    while (strcmp(fstName, "END")!= 0)
    {
        fscanf(in, "%s %lf %lf", lstName, &hours, &rate);
        if (hours <= MaxRegularHours)
        {
            regPay = hours*rate;
            ovtPay = 0;
        }
        else{
            regPay = hours*rate;
            ovtPay = (hours - MaxRegularHours)* rate * OvertimeFactor;

        }
        netPay = regPay + ovtPay;
        // make one name out of firstname and lstname
        strcpy(Name, fstName);
        strcat(Name, " ");
        strcat(Name, lstName);
        fprintf(out, "%-15s %5.1f\t %7.2f", Name , hours, rate);
        fprintf(out, "\t %9.3f \t%9.2f \t\t%7.2f\n", regPay, ovtPay, netPay);
        fscanf(in, "%s", fstName);
    }
    fclose(in);
    fclose(out);    
}