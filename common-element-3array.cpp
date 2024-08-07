#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

//  To find the common elements in 3 sorted array-

vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    vector<int> ans;
    int i = 0;
    int j = 0;
    int k = 0;
    set<int> st;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            st.insert(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    for (auto i : st)
    {
        ans.push_back(i);
    }

    return ans;
}
int main()
{
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> result = commonElements(arr1, arr2, arr3);

    cout << "Common elements: ";
    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}