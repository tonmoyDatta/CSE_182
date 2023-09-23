#include<iostream>
using namespace std;
int main(){
int a[10][10],result[10][10],r,c,i,j,n;
int zero = 0;
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


for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if (a[i][j] == 0)
{
    zero++;
}
}
}
if (zero > (i*j)/2)
{
    cout<<"The matrix is sparse";
}
else{
    cout<<"The matrix is not sparse";

}
return 0;
}
