class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int index = 0;
        string lcp = "";

        if (strs.size() < 2){
            return strs[0];
            }

        while(index < 200){
            if (index >= strs[0].size()){
                return lcp;
            }
            char current_char = strs[0][index];   
            for(int i=1; i < strs.size(); i++){
                if (current_char != strs[i][index]){
                    return lcp;
                }  
            }
            lcp = lcp + current_char;
            index++;
        }
    return lcp;
    }
};
