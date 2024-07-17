#include<iostream>
using namespace std;

int main(){
    // square pattern 
    /*int side;
    cout<<"enter side: ";
    cin>>side;
    for(int i=0;i<side;i++){
        cout<<"* ";
        for(int j=1;j<side;j++){
            cout<<"* ";
        }
        cout<<endl;
    }*/

    // rectangle pattern
    /*int x;
    cout<<"enter number of rows: ";
    cin>>x;
    int y;
    cout<<"enter number of columns: ";
    cin>>y;
    //outer lop which represents rows
    for(int i=0;i<x;i++){
        //inner loop which represents column
        for(int j=0;j<y;j++){
            cout<<"+";
        }
        cout<<endl;
    }*/

    //hollow rectangle
    /*int x;
    cout << "Enter number of rows: ";
    cin >> x;
    int y;
    cout << "Enter number of columns: ";
    cin >> y;

    for (int row = 0; row < x; row++) {
        for (int col = 0; col < y; col++) {
            if (row == 0 || row == x - 1) {
                cout << "* ";
            } else {
                if (col == 0 || col == y - 1) {
                    cout << "* ";
                } else {
                    cout << "  "; 
                }
            }
        }
        cout << endl;
    }*/

   // hollow square with diagonal too
    /*int side;
    cout<<"enter side: ";
    cin>>side;
    for(int row =0;row<side;row++){
        for(int col=0;col<side;col++){
            if(row==0 || row==side-1 || col==0 || col==side-1 || row==col){
                cout<< "* ";
            }else{
                cout<< "  ";
            }
        }
        cout<<endl;
    }*/

   //half pyramid
    /*int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int row =0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }*/
   

    // inverted half pyramid
    /*int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int row =0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }*/

    //hollow half pyramid
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int row =0;row<n;row++){
        int totalColumn = row+1;
        for(int col=0;col<totalColumn;col++){
           if(row == 0 || row == n-1 || col == 0 || row == col ){
            cout<<"* ";
           }else{
             cout<<"  ";
           }
        }
        cout<<endl;
    }
    return 0;
}