//Program to print all odd number between two numbers (including start & end points)
#include<iostream>
using namespace std;
int Odd(int start, int end){
    for(int i=start;i<=end;i++){
        if(i%2!=0) cout<<i<<" ";
    }
}
int main(){
    int start;
    int end;
    cout<<"Enter the starting point:";
    cin>>start;
    cout<<"Enter the Ending Point: ";
    cin>>end;
    if (start > end) {
        cout<<"Invalid input. Starting point should be less than ending point."<<endl;
    }
    else{
        cout<<"The Odd number from "<<start<<" to "<<end<<" are: ";
    Odd(start,end);
    }
    return 0;
}