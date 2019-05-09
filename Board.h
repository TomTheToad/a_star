#include <tuple>;
#include <vector>;

using std::tuple;
using std::vector;

struct Board {
public:
  vector<vector<int>> board;
  tuple<int, int> starting_coord;
  tuple<int, int> goal_coord;

  Board(vector<vector<int>> board, tuple<int, int> starting_coord,
        tuple<int, int> goal_coord)
      : board(board), starting_coord(starting_coord), goal_coord(goal_coord) {}
};