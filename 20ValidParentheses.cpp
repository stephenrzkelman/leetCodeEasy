class Solution {
public:
    bool isValid(string s) {
        stack<int> opens;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]=='(') opens.push(1);
            else if (s[i] == '[') opens.push(2);
            else if (s[i] == '{') opens.push(3);
            else
            {
                if(opens.empty()) return false;
                char open = opens.top();
                opens.pop();
                switch(open)
                {
                    case 1:
                        if(s[i] != ')') return false;
                        else break;
                    case 2:
                        if(s[i] != ']') return false;
                        else break;
                    case 3:
                        if(s[i] != '}') return false;
                        else break;
                }
            }
        }
        if(opens.empty()) return true;
        else return false;
    }
};
