#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int col=0; col<mCols; col++){
       if(col & 1){
           // odd index-> Bottom to Top

           for (int row = nRows - 1; row >= 0; row--) {
             // cout << arr[row][col] <<" ";
             ans.push_back(arr[row][col]);
           }
       }
    
       else
       {
           // even Index -> Top to Bootom
           for (int row = 0; row < nRows; row++) {
             // cout << arr[row][col] <<" ";
             ans.push_back(arr[row][col]);
           }
       }
    }

       return ans;
    }

