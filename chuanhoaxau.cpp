#include<bits/stdc++.h>
using namespace std;

string chuanhoa(string s){
    s[0]=toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
        s[i] = tolower(s[i]);
    return s;
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector <string> v;
    while (ss >> word){
        cout << word << " " ;
        word = chuanhoa(word);
        v.push_back(word);
    }
    cout << endl;
    for(int i = 0; i < s.size(); i++)
        cout << v[i] << " ";
}

