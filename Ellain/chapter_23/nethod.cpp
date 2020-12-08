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
struct ChessBoard
{
    ChessPiece board[8][8];
    PlayerColor whose_move;
    ChessPiece getPiece(int x, int y)
    {
        return board[x][y];
    }
    PlayerColor getMove()
    {
        return whose_move;
    }

    void makeMoney(int from_x, int from_y, int to_x, int to_y)
    {
        board[to_x][to_y] = board[from_x][from_y];
        board[from_x][from_y] = EMPTY_SQUARE;
    }
};
