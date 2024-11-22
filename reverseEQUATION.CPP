#include<bits/stdc++.h>
using namespace std;
string sort(string &s){
string final;
string re;
for(int i=0;i<s.length();i++){
    
    if(s[i] == '+' || s[i] == '-' ||s[i]=='*'|| s[i]=='/') {
   
     reverse(re.begin(),re.end());
     final+=re;
     re="";
     final.push_back(s[i]);
    }
    else {
        re+=s[i];
    }

}
if(re.length()>0){
    reverse(re.begin(),re.end());
    final+=re;
}
reverse(final.begin(),final.end());

return final;

}
int main(){
 string s;
 cin>>s;
 cout<<sort(s);

}