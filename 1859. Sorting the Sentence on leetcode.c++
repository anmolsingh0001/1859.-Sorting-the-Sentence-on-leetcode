class Solution {
public:
    string sortSentence(string s) {
        map<int,string> order;
        string test="";
        for(int i=0; i<s.length(); i++){
            
            if(!isdigit(s[i])){
                test+=s[i];
            }
            if(isdigit(s[i])){
                order[s[i]-'0']=test;
                test="";
            }
             
          
        }
        string result="";
        for(auto j:order){
            result+=j.second+" ";
        }
        if(result[0]==' '){
            result.erase(0, 1);
        }
        
        result.erase(result.length()-1, 1);
        for(int k=0; k<result.length(); k++){
            if(result[k]==' '&&  result[k+1]==' '){
                result.erase(k,1);
            }
        }
        return result;
    }
};