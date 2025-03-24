#include <iostream>

using namespace std;

void ggwpswapper(int a[5][4]) {
    int min = 9999, max = 0;
    int index1 = 0, index2 = 0;

    for (int i = 0; i < 5; i++) {
        int totalLength = 0;
        for (int j = 0; j < 4; j++) {
            int number = a[i][j];
            int length = 0;

            while (number != 0) { // Подсчет количества цифр
                number /= 10;
                length++;
            }

            totalLength += length; //сума всех чисел строки
        }

        if (totalLength > max) { 
            max = totalLength;
            index1 = i;
        }
        if (totalLength < min) {
            min = totalLength;
            index2 = i;
        }
    }

    for (int i = 0; i < 4; i++) {
        a[index2][i] = a[index1][i]; //дублироование наибольшей строки в наименьшую
    }
}

int main() {   
    int a[5][4] = {
        {1, 1, 12, 1},
        {1, 12, 12, 1},
        {1, 12, 12, 12},
        {1, 1, 12, 1},
        {1, 1, 1, 1}
    };

    cout << "Original Matrix:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    ggwpswapper(a);

    cout << "New Matrix:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    } 

    return 0;
}
