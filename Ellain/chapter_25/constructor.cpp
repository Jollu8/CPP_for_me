enum ChessPiece
{
    EMPTY_SQUARE,
    WHITE_PAWN
};
enum PlayerColor
{
    PC_WHITE,
    PC_BLACK
};

class ChessBoard
{
public:
    ChessBoard();
    PlayerColor getMove();
    ChessPiece getPiece(int x, int y);
    void makeMove(int from_x, int from_y, int to_x, int to_y);

private:
    ChessPiece _board[8][8];
    PlayerColor _whose_move;
};

ChessBoard::ChessBoard()
{
    _whose_move = PC_WHITE;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            _board[i][j] = EMPTY_SQUARE;
        }
    }
}