#include<bits/stdc++.h>

//Count vowels, consonants, and spaces
using namespace std;
vector<int>coutn(string &s){
    int conso=0;
int vowel=0;
int sp=0;
for(int i=0;i<s.length();i++){
    if(s[i] == ' ') sp++;

    else if(s[i] == 'a' || s[i]== 'e' ||s[i]=='i' || s[i]=='o' ||s[i]=='u') vowel++;

    else conso++;
}
vector<int>r;
r.push_back(conso);
r.push_back(vowel);
r.push_back(sp);
return r;

}
int main(){
string s;
getline(cin,s);
vector<int> counts = coutn(s);
 cout << "Consonants: " << counts[0] << endl;
    cout << "Vowels: " << counts[1] << endl;
    cout << "Spaces: " << counts[2] << endl;
}