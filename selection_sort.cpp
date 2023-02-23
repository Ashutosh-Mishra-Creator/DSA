#include<iostream>
using namespace std;

class selection_sorting{
    public:
    void sorted_array(int unsorted_array[]){
        int n = 5;
        for(int i = 0; i < 5; i++){ //passes
            int j = i; //start from the sorted part towards the right 
            for(int k = i+1; k < n; k++){
                if(unsorted_array[k] < unsorted_array[j]){ //to find the smallest element to the right of i th element
                    j = k;
                }
            }
        
            swap(unsorted_array[j], unsorted_array[i]);
        }
        for(int i = 0; i < 5; i++){ //passes
            cout<<unsorted_array[i]<<"\n";
        }
        
    }
};


int main(){
    int unsorted_array[5] = {45, 43, 7, 11, 99};
    selection_sorting myobj;
    myobj.sorted_array(unsorted_array);
}