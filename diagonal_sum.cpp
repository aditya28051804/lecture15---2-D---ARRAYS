#include<iostream>
 #include<string>
using namespace std;
 
 void diaSum (int matrix[3][3], int n , int m){
           int currSum = 0;
           int currSum2 = 0;
           int semiFinal = 0;
    for (int i = 0; i < n; i++) // for the pricipal diagonal
    {
        currSum = currSum+matrix[i][i];
    }
    cout << currSum << endl;
      int row = 0;
      int col = m-1;
      int del = 0;
    while (row < n && col >= 0)
    {   
        if (row == col)
        {
          del = matrix[row][col];
        };
         
        currSum2 = currSum2+matrix[row][col];
        row ++ ;
        col -- ;
    };
         semiFinal = currSum2 - del;


    cout << " final answer of diagonal sum is  " << semiFinal + currSum << endl;
 }
 
 int main() {
             int matrix[3][3] = {{12,52,74},{43,17,66},{74,89,94}};
             diaSum(matrix, 3,3);
 return 0;   
}

// this is a good code with complexity of O(n) and it is written by me 