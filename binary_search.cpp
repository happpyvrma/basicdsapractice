#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int target = 3;
    int st = 0;
    int end = arr.size() - 1;

    while(end >= st){
        int mid = (st+end)/2;

        if(target > arr[mid]){
            st = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else {
            cout << mid << endl;   
            return mid;
        }
    }

    return 0; 
}