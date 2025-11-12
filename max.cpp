#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class sol {
public:
    int largest(vector<int> &arr) {
        int maxVal = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            if (maxVal < arr[i]) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    sol p;
    int result = p.largest(arr);
    cout << result;
    return 0;
}
