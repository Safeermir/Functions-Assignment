// Progam to print the square of n natural numbers using function.
#include<iostream>
using namespace std;
int Square(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"Enter the limit :";
    cin>>n;
    for(int i=1;i<=n;i++){  
        cout<<Square(i)<<endl;
    }
}