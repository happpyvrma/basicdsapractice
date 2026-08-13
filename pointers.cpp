#include<iostream>
using namespace std;

int main(){

    int ptr = 10;
    int* pointer= &ptr;
    // int* ptr;
    cout<< ptr<<endl;
    cout<< &ptr << endl;
    cout<< pointer<<endl;
     int ** pointer2 = &pointer ;

     cout<< pointer2<<endl;






    return 0;
}