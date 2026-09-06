class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>counts;
         unordered_map<int,int>countt;
       if( s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < s.size(); i++){
    counts[s[i]]++;
}
   for(int i = 0; i < t.size(); i++){
    countt[t[i]]++;
}
if(counts==countt){
    return true;
}
return false;
    }
};
