#include<iostream>
using namespace std;



int main(){
    int arr[]={1,3,8,10,9,12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxVal =INT_MIN;
    int minVal =INT_MAX;
    int minIndex =-1;
    int maxIndex =-1;


    for( int i=0;i<size;i++){
        if(arr[i]<minVal){
            minVal = arr[i];
            minIndex = i;

        }
        if( arr[i]>maxVal){
            maxVal = arr[i];
            maxIndex = i;

        }


    }

    // swap the min and max by help of temp

    int temp = arr[minIndex];
    arr[minIndex]=arr[maxIndex];
    arr[ maxIndex] = temp;

    // Print array after swapping
    cout << "Array after swapping min and max:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;




}