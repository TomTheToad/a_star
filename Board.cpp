#include "Coord.h";
#include <vector>;

using std::vector;

struct Board {
public:
  vector<vector<int>> board;
  Coord starting_coord;
  Coord goal_coord;
};