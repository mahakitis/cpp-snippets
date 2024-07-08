#include <cmath>
#include<iostream>

using namespace std;
double sipCalculator(double monthly_investment , double return_rate , int years){
    double r = return_rate / 12 / 100;
    int n = years*12;

    double maturityAmount = monthly_investment * (pow(1+r,n)-1)/r*(1+r);
    return maturityAmount;   
}

int main(){
    double monthly_investment;
    double return_rate;
    int years;

    cout<<"Enter monthly investment amount: ";
    cin>>monthly_investment;

    cout<<"Enter annual return rate in % : ";
    cin>>return_rate;

    cout<<"Enter investment period : ";
    cin>>years;

    double maturityAmount = sipCalculator(monthly_investment,return_rate,years);
    cout<<"Maturity Amount : "<<maturityAmount << endl;

    return 0;

    return 0;
}