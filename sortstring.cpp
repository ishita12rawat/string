#include<bits/stdc++.h>
using namespace std;
string sort(string &s){
unordered_map<int,int>fr;
for(int i=0;i<s.length();i++){
    fr[s[i]]++;
}
string nw;
for(int i=0;i<fr.size();i++){
    int n=fr[i];
    while(n--){
        nw+=char(i);
    }

}
return nw;
}
int main(){
 string s;
 cin>>s;
 cout<<sort(s);

}