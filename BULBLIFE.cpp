#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<(n-1);i++){
	        cin>>a[i];
	    }
	    int sum=0;
	    for(int i=0;i<(n-1);i++){
	       sum=sum+a[i];
	    }
	    int z=(x*n)-sum;
	    if(z>0){
	        cout<<z<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	    
	}
	return 0;
}
