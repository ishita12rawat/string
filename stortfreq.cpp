#include<bits/stdc++.h>
using namespace std;
string freq(string &s){

unordered_map<int,int>fr;
for(int i=0;i<s.length();i++){
    fr[s[i]]++;

}
vector<pair<int,int>>v(123);
for(int i=0;i<v.size();i++){
v[i].first=fr[i];
v[i].second=i;
}
sort(v.begin(),v.end(),greater<pair<int ,int>>());
int i=0;
string res;
while(v[i].first !=0 && i<=122){
    int n=v[i].first;
 
    char ch=char(v[i].second);
    while(n--){
        res.push_back(ch);
    }
    i++;
}

return res;
}
int main(){

string s;
cin>>s;
cout<<freq(s);


}