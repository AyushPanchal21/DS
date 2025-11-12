// better approach as timecomplexity = O(n)
#include <iostream>
#include <vector>
using namespace std;
class sol{
public:
    int reove(vector<int>& arr,int v){
        int k=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] != v){
                arr[k++] = arr[i];
            }
        }
        return k;
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
