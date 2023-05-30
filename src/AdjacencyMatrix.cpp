//
// Created by serge on 30.05.2023.
//

//
// Created by serge on 26.05.2023.
//

#include "AdjacencyMatrix.h"

void AdjacencyMatrix::fillMatrix() {
    srand(time(0));

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 2;
        }
    }
}

void AdjacencyMatrix::printMatrix() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

AdjacencyMatrix::AdjacencyMatrix(int n) {
    size = n;

    matrix = new int *[size];
    for (int i = 0; i < size; ++i) {
        matrix[i] = new int[size];
    }
}

AdjacencyMatrix::~AdjacencyMatrix() {
    for (int i = 0; i < size; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}



