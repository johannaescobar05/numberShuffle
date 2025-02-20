#ifndef Board_H
#define Board_H

class Board {
public:
    Board(); //3 * 3 board
    Board(int m, int n); //m * n board
    Board(int** arr, int m, int n); //m * n board where data is stored in a 2-dimensional array
    ~Board();//destructor
    void randomize();
    void getInfo(); //find out emptyCellRow, emptyCellCol, and numCorrect from panel
    bool valueCorrect(int row, int col) const;
    void display() const;
    void slideUp();
    void slideDown();
    void slideLeft();
    void slideRight();
    void play();

private://private
    int numRows;
    int numCols;
    int** panel;
    int emptyCellRow;
    int emptyCellCol;
    int numCorrect;

};
#endif