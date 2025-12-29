//find smallest and largest  in array


#include<iostream>
using namespace std;

int main(){

    int nums[]={5,21,22,1,-15,24};

    int size =6;
  // INT_MAX =+infinity
    int smallest = INT_MAX;//these for smaleest number 
    int largest = INT_MIN;  // these for largest number 

     int smallestIndex =-1;
     int largestIndex =-1;
    for(int i =0;i<size;i++){
        if(nums[i]<smallest){
            smallest = nums[i];
            smallestIndex =i;
        }
    }

    for( int i=0;i<size;i++){
        if(nums[i]>largest){
            largest =nums[i];
            largestIndex=i;
        }
    }

    cout<<"smallest= "<<smallest
         <<"at index = "<<smallestIndex<<endl;

    cout<<"largest= " <<largest
    <<"atindex= "<<largestIndex<<endl;
    return 0;
}

//summary of the. code 
 //in these code we will insilize with smallest number with +infinity  and then comparese
  // if(nums[i]<smallest)
