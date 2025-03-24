#include <iostream>
using namespace std;

int main() {
    int a[5][5],i,j;

    for(i=0; i<5; i++)
  
    for(j=0; j<5; j++)
  
    { cout<<"Enter element "<<i+1<<" string " <<j+1<<" column : ";
  
      cin>>a[i][j];}

      cout << "Matrix:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}