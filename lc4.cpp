#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Median(vector<int> &merged)
{
    int size = merged.size();
    int key = size / 2;
    sort(merged.begin(), merged.end());

    if (size % 2 == 0)
        return (merged[key - 1] + merged[key]) / 2.0;
    else
        return merged[key];
}
void display(vector<int> merged)
{

    for (int i : merged)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> num1 = {1, 3};
    vector<int> num2 = {2, 4};
    vector<int> merged = num1;

    merged.insert(merged.end(), num2.begin(), num2.end());
    cout << "Merged vector: ";
    display(merged);
    int result = Median(merged);
    cout << "Median of the merged sorted vector is : " << result;

    return 0;
}