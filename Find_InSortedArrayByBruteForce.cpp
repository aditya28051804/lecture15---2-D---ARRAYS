#include<iostream>
 #include<string>
using namespace std;
 
 
 // brute force
 void search(int matrix[3][3], int m, int n, int q){
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        if (matrix[i][j] == q)
        {
            cout << i << "," << j << endl;
        }
        
    }
    
   }
   
 }
 int main() {
    int q;
           int matrix[3][3] = {{12,52,74},{43,17,66},{74,89,94}};
           cin >> q;  
           search(matrix , 3, 3 , q);
 return 0;   
}