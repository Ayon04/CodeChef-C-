#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        
        if(a<b){
        
          
           cout<<(a+(b-a)*2)<<endl; 
        }
        else{
            
            cout<<b<<endl;
        }
    }
	

}
