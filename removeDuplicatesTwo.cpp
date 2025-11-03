#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 2, idx = 2;
        int n = nums.size();

        if (n <= 2)
        {
            return n;
        }
        
        while(i < n)
        {
            if (nums[i] != nums[i - 2])
            {
                nums[idx] = nums[i];
                i++;
                idx++;
            }else{
                i++;
            }
            
        }
        
        
        for(auto e : nums){
            cout << e << " " << "\n";
        }
         cout << "\n" << "IDX = "  << idx  - 1<< endl;


        return idx - 1; 
    }
};

int main(){
    vector<int> arr = {0,0,1,1,1,1,2,3,3};
    Solution s;
    s.removeDuplicates(arr);
    return 1;
}