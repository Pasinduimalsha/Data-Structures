#include<iostream>
#include<vector>
#include<sstream>

using namespace std;



class Lsbustring {

    public:
        int lengthOfLongestSubstring(string s) {

            vector<char> v;
            istringstream iss(s);
            char c;
            while(iss >> c){
                v.push_back(c);
            }
 
            for(int i=0; i<v.size(); ++i){
                cout << v[i] << " ";
            }

           int newSize = v.size();
            for(int i=0; i< v.size()-1;++i){
                for(int j = i+1; j< v.size();++j ){
                    
                    if(v[i] == v[j]){

                        newSize = newSize -1;
                        
                    }
                }
            }

            return newSize;
           
            
        }

    };

int main(){


    string s;
    cin >> s;
    
    Lsbustring obj;
    int result = obj.lengthOfLongestSubstring(s);
    cout << result << endl;

    return 0;
}