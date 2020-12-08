enum ChessPiece
{
    EMPTY_SQUARE,
    WHITE_PAWN
};

enum PLayerColor
{
    PC_WHITE,
    PC_BLACK
};

class ChessBoard
{
public:
    ChessPiece getPiece(int x, int y);
    PLayerColor getMove();
    void makeMove(int from_x, int from_y, int to_x, int to_y);

private:
    ChessPiece _board[8][8];
    PLayerColor _whose_move;
};

ChessPiece ChessBoard::getPiece(int x, int y)
{
    return _board[x][y];
}

PLayerColor ChessBoard::getMove()
{
    return _whose_move;
}

void ChessBoard::makeMove(int from_x, int from_y, int to_x, int to_y)
{
    _board[to_x][to_y] = _board[from_x][from_y];
    _board[from_x][from_y] = EMPTY_SQUARE;
}