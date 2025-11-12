#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
class sol
{
public:
  int singleNumber(vector<int> &arr)
  {
    // try and use unordered_map
    // map<int, int> m1;
    unordered_map<int, int> m1;
    for (int n : arr)
    {
      m1[n]++;
    }
    for (auto p : m1)
    {
      if (p.second == 1)
      {
        return p.first;
      }
    }
    return -1;
  }
};
int main()
{
  vector<int> arr = {2, 2, 1};
  sol p;
  int re = p.singleNumber(arr);
  if (re)
  {
    cout << "accepted";
  }
  else
  {
    cout << "not accepted";
  }
  return 0;
}
