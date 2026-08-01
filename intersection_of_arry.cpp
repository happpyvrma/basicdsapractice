#include<iostream>
using namespace std;


int intersection(int arr1[],int arr2[],int size){

    for(int i=0 ; i<size ; i++){
int count=0;
     for(int j=0 ; j<size ; j++){
         if(arr1[i] == arr2[j]){
            count++;
         }

     }
        if(count==0){
            cout<<arr1[i]<<" ";
        }
    }


}

int main(){

int arr1[]={14,51,62,84,12,55,90,19};
int arr2[]={45,76,14,38,92,44,11,55};

int size =8;

intersection(arr1,arr2,size);

}