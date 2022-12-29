#include<bits/stdc++.h>
#define long long long int
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<long> v1;
	    vector<long> v2;
	    long a,b;
	    long n;
	    cin>>n;
	    for(long i=0;i<n;i++){
	        cin>>a;
	        v1.push_back(a);
	    }
	    long m;
	    cin>>m;
	     for(long i=0;i<m;i++){
	        cin>>b;
	        v2.push_back(b);
	    }
	   long num;
	    long mx = INT_MIN;
	    long sum = 0;
	    long x = 0,start=0,end=0,s=0;
	    
	    
	    for(long i=0;i<m;i++){
	        num = v2[i];
	        v1.push_back(num);
	        v2.erase(v2.begin());
	    }
	   //sort(v1.begin(),v1.end());
	    for(long i=0;i<=v1.size();i++){
	       // for(long j=i;j<v1.size();j++){
	       //x = x + v1[i];
	       //if (mx < x)
        //       mx = x;
	       //    // sum += v1[j];
	       // if (x < 0)
        //     x = 0;
        x += v1[i];
         if (mx < x) {
            mx = x;
            start = s;
            end = i;
        }
        if (x < 0) {
            x = 0;
            s = i + 1;
        }
	    }
	    cout<<mx<<endl;
	}
	return 0;
}


