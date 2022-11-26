#include <string>
#include <vector>

using namespace std;

vector<int> convertToIntVector(vector<string> stringVector) {
  vector<int> outputVector {};

  for (vector<string>::iterator stringIterator { stringVector.begin() }; stringIterator != stringVector.end(); stringIterator++) {
    int convertedIntValue { stoi(*stringIterator) };
    outputVector.push_back(convertedIntValue);
  }

  return outputVector;
}