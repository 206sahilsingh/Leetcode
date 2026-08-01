class Solution {
public:
    int maxFreqSum(string s) {
      unordered_map<char, int>vowel;
      unordered_map<char, int>consonant;

      for(int i=0; i<s.size(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vowel[s[i]]++;
        }
        else{
            consonant[s[i]]++;
        }
      } 

    int vowelFreq = 0;  
    for (auto it :vowel){
    if (it.second >vowelFreq){
        vowelFreq =it.second;
    }
    }

    int consonantFreq = 0;
    for (auto it :consonant){
    if (it.second >consonantFreq){
        consonantFreq = it.second;
    }
}
     return vowelFreq +consonantFreq;
    }
};