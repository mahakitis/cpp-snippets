#include<iostream>
using namespace std;

void printNumbers(){
    int i=0;
    for (i=1;i<=100;i++){
        cout<<i<<endl;
    }
}
 
int findSimpleInterest(int a,int b,int c){
    int si;
    si = a*b*c/100;
    return si;
}

int main(){
    //printNumbers();
    
    //int result = findSimpleInterest(30,60,78);
    //cout<<result<<endl;
       
    return 0;
}