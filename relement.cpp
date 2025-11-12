#include <iostream>
#include <vector>
using namespace std;
class sol{
public:
    int reove(vector<int>& arr,int v){
        for(int i=0;i<arr.size();i++){
            if(v == arr[i]){
                arr.erase(arr.begin() + i);
            }
        }
        return ;
    }
};
int main() {
  vector<int>arr = {3,2,2,3};
  sol p;
  int v=3;
  int result = p.reove(arr,v);
  cout<<result;
return 0;
}
