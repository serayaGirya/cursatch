//
// Created by serge on 30.05.2023.
//

#ifndef REWORK_MODEL_ADJACENCYMATRIX_H
#define REWORK_MODEL_ADJACENCYMATRIX_H


#include <iostream>
#include <ctime>

class AdjacencyMatrix {
private:
    int **matrix;
    int size;

public:
    //constructor
    explicit AdjacencyMatrix(int n);

    //filling the matrix
    void fillMatrix();

    //print the matrix
    void printMatrix();

    ~AdjacencyMatrix();

};


#endif //REWORK_MODEL_ADJACENCYMATRIX_H
