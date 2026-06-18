#include<iostream>
 #include<string>
using namespace std;
 
 void mat(int matrix[3][3] , int n, int m ){
 int srow = 0, scol =0;
 int erow = n-1, ecol = m-1;
while (srow <= erow && scol <= ecol )
{
    //top
for (int i = scol; i < ecol; i++)
{
    cout << matrix[srow][i] << " " ;
}
//right 
for (int i = srow; i < erow; i++)
{
    cout << matrix[i][ecol] << " ";
}
//bottom
for (int i = ecol -1; i >= scol; i--)
{
    cout << matrix[erow][i] << " ";
}
// left 
for (int i = erow -1; i >= srow +1; i--)
{
    cout << matrix [i][scol] << " ";
}

srow++ ; scol++;
erow--; ecol ++; 
}




 }
 
 int main() {
         int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
         for (int i = 0; i < 3; i++)
         {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j] << " " ;
            }
            cout << endl;
         }

         mat(matrix , 3,3);
         
 return 0;   
}