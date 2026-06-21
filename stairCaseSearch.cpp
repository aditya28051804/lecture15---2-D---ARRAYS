// only used when both row and colomn are sorted 
//1. Start position is mat[0][m-1] or mat[n-1][0]
//2. Cell < Key then go down 
//3. start > Key then go left 

#include<iostream>
 #include<string>
using namespace std;
 
 bool search(int mat[3][3], int n, int m , int key){
    int i = 0 , j = m-1;
    while (i < n && j >= 0)
    {
        if (mat[i][j] = key)
        {
            cout << "found at cell " << i << ","<< j << endl;
            break;
        }
        else if (mat[i][j] > key)
        {
            j--;
        }
        else{
            i++;
        }
        
    }
    
    cout << "key not found in the matrix" << endl;
    return false;
 }
 
 int main() {
         int matrix[3][3] = {{12,52,74},
                             {43,17,66},
                             {74,89,94}};    
            search(matrix , 3, 3, 75);
 return 0;   
}