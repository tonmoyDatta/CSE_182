#include<iostream>
using namespace std;
int main(){
int a[10][10],result[10][10],r,c,i,j,n;
cout<<"Enter the number of rows = ";
cin>>r;
cout<<"Enter the number of columns = ";
cin>>c;
//first matrix
cout<<"Enter the matrix elements"<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
n=0;
cout<<"Sum of minor diagonal element of the matrix ="<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if ((i+j) == ((r+c)/2)-1)
{
    n += a[i][j];
}
}

}
cout<<n<<" ";

return 0;
}
