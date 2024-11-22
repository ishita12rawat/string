#include<bits/stdc++.h>
using namespace std;


bool pallindrome(string s){
    int n=s.length();
  for(int i=0;i<n;i++){
     if (s[i] >= 65 && s[i] <= 90) 
            { 
    s[i]=s[i]+32;}
  }

     int l=0;
     int r=n-1;
     while(r>l){
      if(!isalnum(s[l])) l++;
      if(!isalnum(s[r])) r--;

      if(s[l]!=s[r]) return false;

      l++;
      r--;
     }
   return true;
}

int main(){
    string s;
   getline(cin,s);
 cout<<pallindrome(s);
}