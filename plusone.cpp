#include <iostream>
#include <vector>
using namespace std;
class sol
{
public:
    vector<int> plusone(vector<int> &arr)
    {
        for (int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i] == 9){
                arr[i] = 0;
            }
            else{
                arr[i] += 1;
                return arr;
            }
        }
        arr[0] = 1;
        return arr;
    }
};
int main()
{
    // vector<int> arr = {1, 2, 3};
    // vector<int> arr = {9};
    vector<int> arr = {1, 2, 9};
    sol p;
    vector<int> re = p.plusone(arr);
    for (auto n : re)
    {
        cout << n << " ";
    }
    return 0;
}
