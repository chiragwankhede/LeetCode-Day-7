#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Find the index of 1st repeating element in array

int firstRepeated(vector<int> &arr) {
        int n = arr.size();
        unordered_map <int , int> hash;
        
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        
        for(int i=0 ;i<n;i++){
            if(hash[arr[i]] >1){
                return i+1;
            }
        }
        
        return -1;
    }
int main()
{

 vector<int> arr = {1, 2, 3, 4, 5, 2, 7, 8, 9};
    int result = firstRepeated(arr);
    
    if(result != -1)
        cout << "The index of the first repeating element is: " << result << endl;
    else
        cout << "No repeating element found in the array." << endl;
    
    return 0;
}