// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s = "You know nothing john snow";
    vector<string> sentenceArray;
    int n = s.length();
    string word = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            sentenceArray.push_back(word); 
            word = ""; 
        } else {
            word += s[i]; 
        }
    }
    sentenceArray.push_back(word); 
    
    //Approach 1
    
    // int arraySize = sentenceArray.size();
    
    // for(int i = arraySize-1;i >= 0;i--){
    //     cout<<sentenceArray[i]<<" ";
    // }
    
    //Approach 2
    
    
    int start =0;
    int end = sentenceArray.size()-1;
    
    while(start<end){
        swap(sentenceArray[start],sentenceArray[end]);
        start++;
        end--;
    }
    
    for(int i = 0 ;i < sentenceArray.size();i++){
        cout<<sentenceArray[i]<<" ";
    }

    
    return 0;
}
