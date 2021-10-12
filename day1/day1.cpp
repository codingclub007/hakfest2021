#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    int row=1,i,j,k;

for(i=rows/2; i>0; i--){    //print upper part
    for(j=1; j<=i; j++){
      cout<<" ";
}
for(j=1; j<=row; j++){
      cout<<row;
      cout<<" ";
}
cout<<"\n";//move to next line
row++;
}

for(i=0; i<=rows/2; i++){
  for(j=1; j<=i; j++){
      cout<<" ";
}

for(j=row; j>=1; j--){  //print lower part
      cout<<row;
      cout<<" ";
}
cout<<"\n";//move to next line
row--;
        }
    return 0;
}
