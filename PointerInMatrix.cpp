#include<iostream>
 #include<string>
using namespace std;
 
 
 
 int main() {
         int matrix[3][3] = {{12,52,74},
                             {43,17,66},
                             {74,89,94}};
                             
cout << matrix << endl;// it is pointing the 12, 52, 74
cout << matrix + 1 << endl; // it is pointing the next row ie 43 17 66
 return 0;   
}