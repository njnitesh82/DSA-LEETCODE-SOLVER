

class Solution {
public:
    string simplifyPath(string path) {
        string temp;
        string ans;
        vector<string> st;

        istringstream iss(path);   // create stream from string

        while (getline(iss, temp, '/')) {
            // ans += temp;
            if (temp == "" || temp == ".") {
                continue;
            }
            if (temp==".."){
                if(!st.empty()){
                    st.pop_back();
                }
                
            }
            else st.push_back(temp);
            
        }

        // reverse
        reverse(st.begin(), st.end());
        
        while(!st.empty()){
            
            ans +="/"+st.back();
            st.pop_back();
        }

        return ans=="" ? "/":ans;
    }
};
