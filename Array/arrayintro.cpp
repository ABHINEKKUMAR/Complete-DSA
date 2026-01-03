#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    cout<<"printing the array "<< endl;
    //printing the array 

    for( int i=0;i<size;i++){
        cout<<arr[i]<< "  ";
    }
   cout<<"function called " << endl;

}

int main(){

    //declare these is the way array declare 
    int number [15];// these is the size of the array 
   //access an array 
    cout<<"value at 0 index<"<< number[0]<<endl;

    //initialising an array
    int second[3]={4,5,9};

    cout<<"value at 2 index"<< second[2]<<endl<<endl;

    int third[15]={2,5};

    int n =3;
    cout<<"printing the array"<<endl;

    //printing the array 


    for(int i=0;i<n;i++){
        cout<<third[i]<< " ";
    }


    //intitializing all location with 0
    int fourth[10]={0};
     n=10;

    cout<<"printing the array"<<endl;

    //printing an array 
    for( int i=0;i<n;i++){
        cout<<fourth[i] <<  " ";
    }


    // calling function in these 
    int fifth[10]={5,8};

     n=3;
     printArray(fifth,3);

    cout<<endl<<"everything is fine "<<endl<<endl;

    return 0;
}