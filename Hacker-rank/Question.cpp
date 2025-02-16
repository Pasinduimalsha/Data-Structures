#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Questions{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
      
       int size = nums.size();
       for(int i =0; i<size-1; i++){
    
            if(nums[i]+ nums[i+1] == target){
                vector<int> result;
                result.push_back(i);
                result.push_back(i+1);
                cout << result[0] << " " << result[1] << endl;
                cout << "Found" << endl;
                return result;

            }
        
       }
        return vector<int>();;
    }
};


int main(){

int target;

string input;
getline(cin, input);

vector<int> nums;

istringstream iss(input);

int num;

while(iss >> num){
    nums.push_back(num);
}
cin >> target;


// for(int i=0;i<nums.size();i++){
//     cout << nums[i] << " "; 
// }
// cout << endl;

Questions q;
vector<int> result = q.twoSum(nums, target);
if(!result.empty()){
    cout << result[0] << " " << result[1] << endl;
}else{
    cout << "No sulution found" << endl;
}

    return 0;
}


