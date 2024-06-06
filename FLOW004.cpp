// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;
int main(){
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        int rem=N%10;
        while(N>9){
            N=N/10;
        }
        cout<<N+rem<<endl;
    }
    return 0;
}

