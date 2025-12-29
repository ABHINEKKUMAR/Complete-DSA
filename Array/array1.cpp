#include<iostream>
using namespace std;

int main(){
    //creation of array and declare 
    int marks[5]={99,100,54,36,83};

    int size = 5;


   /// loops : 0 to size-1
    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }

    cout<<marks[0]<<endl;

    cout<<sizeof(marks)/sizeof(int)<<endl;


    return 0;
}