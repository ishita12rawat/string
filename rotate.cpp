#include<bits/stdc++.h>
using namespace std;
bool rotate(string s,string goal){

    for(int i=0;i<s.length();i++){
       
        s.erase(s.begin());
        s.push_back(s[0]);

        if(s==goal) return true;
    }
    return false;
} 
int main(){
    string s;
    cin>>s;
    cout<<"enter goal string";
    string goal;
    cin>>goal;
if (rotate(s, goal)) {
        cout << "Yes, the goal is a rotation of the string." << endl;
    } 
    else {
        cout << "No, the goal is not a rotation of the string." << endl;
    }

    return 0;
}