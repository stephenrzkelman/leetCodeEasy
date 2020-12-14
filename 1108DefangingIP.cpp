class Solution {
public:
    string defangIPaddr(string address) {
        int a = address.find('.');
        int b = address.find('.',a+1);
        int c = address.find('.',b+1);
        return address.substr(0,a)+"[.]"+address.substr(a+1,b-a-1)+"[.]"+address.substr(b+1,c-b-1)+"[.]"+address.substr(c+1,address.size()-c-1);
    }
};
