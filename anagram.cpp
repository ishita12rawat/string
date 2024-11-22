#include<bits/stdc++.h>
using namespace std;
bool anagram(string &s,string &t){
    unordered_map<int ,int>fr;
    unordered_map<int ,int>re;
    for(int i=0;i<s.length();i++){
        fr[s[i]]++;
    }
       for(int i=0;i<t.length();i++){
        re[s[i]]++;
    }
       for(int i=0;i<fr.size();i++){
        if( fr[i] != re[i]) return 0;
    }
    return 1;
}
int main(){
    string s;
    cin>>s;
    cout<<"enter the another string";
   string t;
   cin>>t;
   cout<<anagram(s ,t);
}