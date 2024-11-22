#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int st=0;
    int e=n-1;
    while(e>st){
        swap(s[st],s[e]);
        st++;
        e--;
    }
    cout<<s;
}