#include "Matrix.h"

Matrix::Matrix() {
    arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
}
Matrix::~Matrix() {
    for (int i = 0; i < n; i++) delete arr[i];
    delete[] arr;
}
void Matrix::input() {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(*(arr + i) + j) = rand() % 10 + 1;
        }
    }
}
void Matrix::show() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << *(*(arr + i) + j);
        }
        cout << endl;
    }
}
void Matrix::mincoords() {
    for (int i = 0; i < n; i++) {
        min = arr[i][0];
        for (int j = 0; j < n; j++) {
            if (min >= *(*(arr + i) + j)) {
                mas2[i] = (j + 1);
                min = *(*(arr + i) + j);

            }
            masmin[i] = min;
            mas1[i] = (i + 1);
        }
    }

}
void Matrix::showcoords() {
    for (int i = 0; i < n; i++) {
        cout << "Координаты элемента " << masmin[i] << ":" << mas1[i] << " " << mas2[i] << endl;
    }
}
void Matrix::fpos(int e1, int e2, int number) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == e1 && j == e2) {
                cout << "Ваш элемент: " << *(*(arr + i) + j) << endl;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == e1 && j == e2) {
                *(*(arr + i) + j) = number;
            }
        }
    }
    show();
}
void Matrix::getpodmatrix(int pod1, int pod2, int size1, int size2) {
    for (int i = pod1; i < size1 + pod1; i++) {
        for (int j = pod2; j < size2 + pod2; j++) {
            cout << setw(4) << *(*(arr + i) + j);
        }
        cout << endl;
    }
}