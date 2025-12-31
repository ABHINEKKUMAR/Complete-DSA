#include<iostream>
using namespace std;


bool isSorted( int arr[] , int n ){
    for( int i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]);
       return false ;


    }
    return true;
}


int main(){

    int arr[] = {5, 21, 22, 1, -15, 24};

     int size = sizeof(arr) / sizeof(arr[0]);
     
     //check if array is sorted 

     if(isSorted(arr,size)){

     //swap array: swap first and last 

     int temp = arr[0];
     arr[0] = arr[size-1];
     arr[size-1]=temp;

     cout<<"array was aortes . swap first and last element \n";

     }else{


        //unsorted array: find min and max 

        int maxVal = INT_MAX;
        int minVal = INT_MIN;
         int minIndex =0, maxIndex =0;


         for( int i=0;i<size;i++){
            if(arr[i]<minVal){
                minVal = arr[i];
                minIndex =i;
            }
            if(arr[i]>maxVal){
                maxVal= arr[i];
                maxVal =i;

            }
         }
         //swap the min and max 
         int temp = arr[minIndex];
         arr[minIndex] =arr[maxIndex];
         arr[maxIndex]= temp;

         cout<<"array was sorted . swapped min and max \n";
     }
     cout<<"final array:\n";
     for( int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
     return 0;

}