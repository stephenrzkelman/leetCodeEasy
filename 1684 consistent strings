class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        sort(allowed.begin(), allowed.end());
        int count = 0;
        for(int i = 0; i<words.size(); i++){
            sort(words[i].begin(), words[i].end());
            int index = 0;
            for(int j = 0; j<words[i].size();j++){
                while(index<allowed.size() && words[i].at(j)!=allowed.at(index)){
                    index++;
                }
                if(index == allowed.size()) {count--; break;}
            }
            count++;
        }
        return count;
    }
};
