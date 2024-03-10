// Program to find the number of digits in a number and find the square of the number.
#include<iostream>
using namespace std;
int no_Ofdigits(int digit){
    int count=0;
    while(digit!=0){
        digit/=10;
        count++;
    }
    return count;
    
}
int Square(int digit){
    return digit*digit;
}
int main(){
    int digit;
    cout<<"Enter the number: ";
    cin>>digit;
    cout<<"The Number of digits in an number are: "<<no_Ofdigits(digit)<<endl;
    cout<<"The square of the "<<digit<<"is :"<<Square(digit);
  

}