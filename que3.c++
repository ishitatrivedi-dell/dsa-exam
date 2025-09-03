
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std ;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mapping ;
    for(string s : strs){
        string t = s ;
        sort(t.begin(), t.end()) ;
        mapping [t].push_back(s) ;
    }
    vector<vector<string>> result ;
    for(auto it : mapping){
        result.push_back(it.second) ;
    }
    return result ;
}
