#include<iostream>
using namespace std;
int main(){
int a[10][10],b[10][10],r,c,i,j,isequal;
cout<<"Enter the number of rows = ";
cin>>r;
cout<<"Enter the number of columns = ";
cin>>c;
//first matrix
cout<<"Enter the first matrix elements"<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
//second matrix
cout<<"Enter the second matrix elements"<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>b[i][j];
}
}
isequal = 1;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j] != b[i][j]){
    isequal =0;
}
}
}
if (isequal == 1){
    cout<<"\nThe matrics are equal"<<endl;
}
else
{
    cout<<"\nThe matrics are not equal"<<endl;

}

return 0;
}
