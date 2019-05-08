#include "Coord.h";
#include <vector>;

using std::vector;

struct Board {
public:
  vector<vector<int>> board;
  Coord starting_coord;
  Coord goal_coord;

  Board(vector<vector<int>> board, Coord starting_coord, Coord goal_coord)
      : board(board), starting_coord(starting_coord), goal_coord(goal_coord) {}
};