#include<bits/stdc++.h>
using namespace std;
int main(){
//convert a string to lowercase 
string s;
cout<<"enter a string :";
cin>>s;

for(int i=0;i<s.size();i++){

 if(s[i]>=65 && s[i]<=90){
    s[i]=s[i]+32;
 }

}
cout<<s;

}