class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0; i<command.size();i++){
            switch(command.at(i)){
                case 'G':
                    ans+="G";
                    break;
                case '(':
                    if(command.at(i+1)==')'){
                        ans+="o";
                        i++;
                    }
                    else{
                        ans+="al";
                        i+=3;
                    }
            }
        }
        return ans;
    }
};
