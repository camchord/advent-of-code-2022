#include <iostream>
#include <string>
#include <vector>

#include "../utils/read-file.cpp"
#include "../utils/format-input.cpp"

using namespace std;

int puzzleSolver(vector<string> puzzleInput) 
{
  puzzleInput.push_back("");
  string puzzleResult {};
  int max {0};
  int current {0};
  for(int i = 0; i < puzzleInput.size(); i++) 
  {
    if (puzzleInput[i].size() > 0) {
      current += stoi(puzzleInput[i]);
    } else {
      if (current > max) {
        max = current;
      }
      current = 0;
    }
  }
  return max;
}

int main(int argc, char const *argv[])
{
  string textInputFileName { argv[1] };
  vector<string> fileContent { readInputFile(textInputFileName) };
  int puzzleSolution { puzzleSolver(fileContent) };
  cout << puzzleSolution;
  return 0;
}