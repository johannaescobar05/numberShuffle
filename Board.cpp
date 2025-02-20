/*
Johanna Esocbar

*/

#include <iostream>
#include "Board.hpp"
using namespace std;

Board::Board(){
    numRows = 3;
    numCols = 3;
    panel = new int*[numRows];
    int value = 1;
    for(int row = 0; row <numRows; row++){
        panel[row] = new int[numCols];
        for(int col = 0; col < numCols; col++){
            panel[row][col] = value;
            value++;
        }
    }
}

Board::~Board(){
    for(int row = 0; row < numRows; row++){
         delete[] panel[row];
    }
    delete[] panel;
    panel = nullptr;
    
}

Board::Board(int m, int n){
    numRows = 3;
    numCols = 5;
    panel = new int*[numRows];
    int value = 1;
    for (int row = 0; row < numRows; row++){
        panel[row] = new int[numCols];
        for (int col = 0; col < numCols; col++){
            panel[row][col] = value;
            value++;
        }
    }
}

Board::Board(int** arr, int m, int n){
    numRows = m;
    numCols = n;
    panel = new int*[numRows];
    for(int row = 0; row < numRows; row++){
        panel[row] = new int[numCols];
        for(int col = 0; col < numCols; col++){
            panel[row][col] = arr[row][col];
        }
    }
}


