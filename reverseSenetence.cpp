#include<bits/stdc++.h>
using namespace std;
string reveresentence(string &s){
vector<string>v;
string a;
    for(int i=0;i<s.length();i++){
     
     if(s[i] != ' '){
        a+=s[i];
     }

else if(a.length()>0){
    v.push_back(a);
    a="";
}
 

    }
    if(a.length()>0) v.push_back(a);
    string res;
  for(int i=v.size()-1;i>0;i--){
res+=v[i];
res+=" ";
  }
  res+=v[0];
  return res;

    }
int main(){
    string s;
    getline(cin,s);
    cout<<reveresentence(s);
}