class Solution {
    vector<string> split(string s,char del)
    {
        string temp = "";
        vector<string> splitS;
        for(char c : s)
        {
            if(c == del)
            {
                splitS.push_back(temp);
                temp = "";
            }
            else temp += c;
        }
        splitS.push_back(temp);
        return splitS;
    }
    bool checkHexa(string s)
    {
        if(s.length() > 4 || s.length() == 0) return false;
        for(char c : s)
        {
            if(!((c >= '0' && c <= '9') || (toupper(c) >= 'A' && toupper(c) <= 'F')))return false;
        }
        return true;
    }
    bool checkDec(string s)
    {
        if(s.length() == 0) return false;
        if(s.length() >= 2 && s[0] == '0' )return false;
        for(char c : s)
        {
            if(!(c >= '0' && c <= '9'))return false;
        }
         int t = stoi(s);
         if(t >= 256) return false;
        return true;
    }
        
    string check(int f,string ip)
    {
        vector<string> arr;
        if(f)
        {
           arr = split(ip,'.');
           if(arr.size() != 4) return "Neither";
           for(string s : arr)
           {
              if(!checkDec(s)) return "Neither";
           }
            return "IPv4";
        }
        else
        {
           arr = split(ip,':');
           if(arr.size() != 8) return "Neither";
           for(string s : arr)
           {
               if(!checkHexa(s))
                   return "Neither";
           }
            return "IPv6";
        }
        return "";
    }
public:
    string validIPAddress(string IP) {
        if(IP.length() == 0 || IP.length() > 50) return "Neither";
        for(char c : IP)
        {
            if(c == '.')
            {
                return check(1,IP);
            }
            else if(c == ':')
            {
                return check(0,IP);
            }
        }
        return "Neither";
    }
};