#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,a,b,c;
	cin>>n;
	
	for(int i=0;i<n;i++){
	    cin>>a>>b>>c;
	    
	    if((a+b+c)>=100 && a>=10 && b>=10 && c>=10){
	        
	        cout<<"PASS"<<endl;
	        
	    }
	    else{
	        
	        cout<<"FAIL"<<endl;
	    }
	    
	    
	    
	}

}
