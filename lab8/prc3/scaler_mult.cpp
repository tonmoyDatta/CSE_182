#include<iostream>
using namespace std;
int main(){
int a[10][10],result[10][10],r,c,i,j,n;
cout<<"Enter the number of rows = ";
cin>>r;
cout<<"Enter the number of columns = ";
cin>>c;
cout<<"Enter the scaler number = ";
cin>>n;

//first matrix
cout<<"Enter the first matrix elements"<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}


cout<<"scaler multiply of the matrix ="<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
result[i][j]=0;
result[i][j]+=n*a[i][j];

//multiplied[i][j] = result[i][j];
}
}
//for printing result
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<result[i][j]<< " ";
}
cout<<endl;
}
return 0;
}
