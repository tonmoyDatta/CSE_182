#include<iostream>
using namespace std;
int main()
{
int arr[10][10];
int row, col, total_row, total_col, islower;
// Input elements in matrix from user
cout<<"Enter the rows and columns: ";
cin>>total_row>>total_col;
for(row=0; row<total_row; row++)
{
for(col=0; col<total_col; col++)
{
cin>>arr[row][col];
}
}
// Check Upper triangular matrix condition
islower = 1;
for(row=0; row<total_row; row++)
{
for(col=0; col<total_col; col++)
{
//If elements below the main diagonal (col<row)
//is not equal to zero then it is not upper triangular
if(col>row && arr[row][col]!=0)
{
islower = 0;
}
}
}
if(islower == 1)
{
cout<<"\nThe matrix is lower triangular matrix."<<endl;
}
else
{
cout<<"\nThe matrix is not lower triangular matrix."<<endl;
}
return 0;
}
