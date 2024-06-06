#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,a,b,c,v,m;
	cin>>n;
	
	for(int i=0;i<n;i++){
	    
	    cin>>a>>b>>c;
	    v=a*b;
	    m=c*24*60;
	    
	    if(v<=m){
	       
	       cout<<"YES"<<endl; 
	        
	    }
	    else{
	        
	       cout<<"NO"<<endl; 
	    }
	    
	}

}
