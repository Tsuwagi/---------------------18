#include <iostream>

using namespace std;

void ggwpswapper(int a[5][4]) {
    int min = 9999, max = 0, length = 0, index1, index2;
    for(int i = 0; i < 5; i++) {
        for(int n = 0; n < 4; n++) {
           int temp = a[i][n];
           while(temp % 10 != 0) { // удаляет последнюю цифру 
                temp /= 10;
                length++; // записывает сколько раз удалили последнюю цифру
           }
        }
      if(max < length) {
            max = length;
            index1 = i;
       } 
       if(min > length) {
            min = length;
            index2 = i;
       }
       length = 0;
    }

    for(int i = 0; i < 4; i++) {
        int temp = a[index1][i];
        a[index1][i] = a[index2][i];
        a[index2][i] = a[index1][i];
    }  

}

int main()
{   
    int a[5][4] = {
        {1,1,10,1},
        {1,10,10,1},
        {1,10,10,10},
        {1,1,10,1},
        {1,1,1,1}
    };

    cout << "Matrix:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    ggwpswapper(a);

    cout << "new Matrix:\n";
    for(int i = 0; i < 5; i++) {
        for(int n = 0; n < 4; n++) {
            cout << a[i][n];
        }
        cout << endl;
    } 
    return 0;
}
