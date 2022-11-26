#include <iostream>
#include <string>
#include <vector>

#include "../utils/read-file.cpp"
#include "../utils/format-input.cpp"

using namespace std;

int puzzleSolver(vector<string> puzzleInput) 
{
  string puzzleResult {};
  vector<int> numbersInput = convertToIntVector(puzzleInput);
  int result {0};
  for(int i = 0; i < numbersInput.size() - 1; i++) 
  {
    result += numbersInput[i];
  }
  return result;
}

int main(int argc, char const *argv[])
{
  string textInputFileName { argv[1] };
  vector<string> fileContent { readInputFile(textInputFileName) };
  int puzzleSolution { puzzleSolver(fileContent) };
  cout << puzzleSolution << '\n';
  return 0;
}