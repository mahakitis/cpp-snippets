#include<iostream>
using namespace std;

int voteEligible(int age){
    if(age>=18){
        cout<<"eligible to vote"<<endl;
    }
    else{
        cout<<"not eligible to vote"<<endl;
    }
 
}

int main(){
     int result = voteEligible(8);

     return 0;

}