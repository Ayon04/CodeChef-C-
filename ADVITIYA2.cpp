#include <bits/stdc++.h>
using namespace std;

int main() {
	  
	  int n,a,count;
	  cin>>n;
	  
	  for(int i=0;i<n;i++){
	      count=0;
	      for(int i=0;i<5;i++){
	          
	          cin>>a;
	          
	          count=count+a;
	          
	      }
	      //cout<<count<<endl;
	      
	      if(count>=4){
	          
	          cout<<"YES"<<endl;
	      }
	      else {
	          
	          cout<<"NO"<<endl;
	      }
	  }
	  
	  


    
}
