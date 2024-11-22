#include<bits/stdc++.h>
using namespace std;

bool paliindrome(string &s){

    string res;
    for(int i=0;i<s.length();i++){

  if(s[i]>=65 && s[i]<=90 ) res+=s[i]+32;

  else if(s[i]>= 97 && s[i]<=122) res+=s[i];
  else if(s[i]-'0'>=0 && s[i]-'0'<=9) res+=s[i];

    }
    int n=res.length();
    for(int i=0;i<=n/2;i++){
        if(res[i]!= res[n-i-1]) return 0;
    }
    return 1;

}
int main(){
    //no special character and space , only use alphabet and number 
    string s;
    getline(cin,s);
    cout<<paliindrome(s);
}