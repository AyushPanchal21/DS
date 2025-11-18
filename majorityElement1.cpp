#include <iostream>
#include <vector>
#include <map>
using namespace std;
class sol{
public:
// wont work for some cases.
int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int maxfre,result;
        for (auto n : nums) {
            m[n]++;
        }
        for(auto &p: m){
            p.second >= maxfre;
            maxfre = p.second;
            result = p.first;
        }
       
        return result;
    }
};
int main() {
  vector<int>arr={2,2,1,1,1,3};
  sol p;
  p.majorityElement(arr);
return 0;
}
