#include <iostream>
using namespace std;

int main(){
    cout<<"Please enter a positive integer greater than 9:";
    int n;
    cin>>n;
    cout<<n;
    int steps=0;
    while(n > 9){
        int sum = 0;
        while(sum > 0){
            sum += n%10;
            n /= 10;
        }
        n = sum;
        steps++;
        cout<< " -> "<< n;
    }
    cout<<"Final value:"<<n;
    cout<<"Total steps:"<<steps;
}