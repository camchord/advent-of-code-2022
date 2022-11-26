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
  int depthChangeCount {0};
  for(int i = 0; i < numbersInput.size() - 3; i++) 
  {
    if (numbersInput[i] < numbersInput[i + 3])
    {
      depthChangeCount++;
    }
  }
  return depthChangeCount;
}

int main(int argc, char const *argv[])
{
  string textInputFileName { argv[1] };
  vector<string> fileContent { readInputFile(textInputFileName) };
  int puzzleSolution { puzzleSolver(fileContent) };
  cout << puzzleSolution << '\n';
  return 0;
}