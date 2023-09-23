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
int check =1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j && a[i][j] != 1){
check =0;
 }
 else if (i != j && a[i][j] != 0)
            {
             check =0;

            }

        }
    }

if (check == 0){

        cout<<"This is not identity";
    }
    else {
              cout<<"This is identity";

    }
return 0;
}
