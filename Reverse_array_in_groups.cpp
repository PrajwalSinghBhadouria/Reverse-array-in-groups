//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void reverseInGroups(vector<long long int> &arr, int k) {
         int t=0;
         int c = k-1;
         int d = (t + k)/2;
         bool flag = false;
         if(k>=arr.size()){
             int s = arr.size()-1;
             for(int i =0; i<arr.size()/2; i++){
                 swap(arr[i],arr[s]);
                 s--;
                 flag = true;
             }
         }
         else{
              
              int p=k;
              
              while((t<k) && (k<arr.size())){
                  
                  if(t<d){
                      swap(arr[t],arr[c]);
                      t++,c--;
                  }
                  else if(t<arr.size()){
                      t = k;
                      k = k + p;
                      c = k-1;
                      d = (t + k)/2;
                  }
              }
              
              
         }
         if(t<arr.size() && flag == false){
                  c= arr.size()-1;
                  d = (t+arr.size())/2;
                  for(int i=t; i<d; i++){
                      swap(arr[i],arr[c]);
                      c--;
                  }
              }
         
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<long long int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.reverseInGroups(arr, k);
        for (long long i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
