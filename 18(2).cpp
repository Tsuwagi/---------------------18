#include <iostream>
using namespace std;

int main() {
    int a[6][4],i,j;
    int x[3]; 

    for(i=0; i<6; i++)
  
    for(j=0; j<4; j++)
  
    { cout<<"Enter element "<<i+1<<" string " <<j+1<<" column : ";
  
      cin>>a[i][j];}

      cout << "Matrix:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    {
        for (i = 0; i < 6; i += 2) {  // лише по парним рядкам 
            int s = 1;  
        
            for (j = 0; j < 4; j++) {
                if (a[i][j] % 2 != 0) {  
                    s *= a[i][j];  
                }
            }
        
            x[i/2] = s;  //зберігаєм добуток у масив а ділим на два тому що парних рядків лише 3
        }
    }

      for (i = 0; i < 3; i++)

      cout << x[i] << "\t";
  
    cout << endl;

    return 0;
}