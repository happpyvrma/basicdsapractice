#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> vec={5,9,7,3,0};

cout<<"value on 2nd index of the vector is :"<<vec[2]<<endl;

for(int i : vec){
    cout<<i<<endl;
}


cout<<"size of vector is "<<vec.size()<<endl;


vector<int>vecnew;

cout<<"size of new vector "<<vecnew.size()<<endl;

vecnew.push_back(48);
cout<<"size after pushback func "<< vecnew.size() <<endl;

cout<<"the first int of vec is "<<vec.front()<<endl;
cout<<"the last int of vec is "<<vec.back()<<endl;



    return 0;
}