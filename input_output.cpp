#include<iostream>
using namespace std;
int main() {

   // two loops are needed for input or output of the whole 2d array
   int arr[3][2];
   int row = sizeof(arr)/(2*sizeof(int));


   for (int  i = 0; i < 3; i++)
   {
    for (int j = 0; j < 2; j++)
    {
        cin >> arr[i][j] ;
    }
    
   }
   cout << " input has been given now wait for the output" << endl;

    for (int  i = 0; i < 3; i++)// this loop runs row wise 
   {
    for (int j = 0; j < 2; j++)
    {
        cout <<  arr[i][j] << " ";
    }
     cout << endl;
   }
   
    return 0;
}