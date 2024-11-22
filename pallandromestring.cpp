#include<bits/stdc++.h>
using namespace std;
int main(){


string s;
cout<<"enter a string: ";
cin>>s;
int n=s.size();
for(int i=0;i<n/2;i++){
   
   if(s[i]!=s[n-i-1]) cout<<"false";

}


cout<<"true";

}
