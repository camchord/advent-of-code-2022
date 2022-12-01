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

vector<string> splitString(string inputString, string delimiter = " ") {
  vector<string> outputList {};

  int start { 0 };
  int end = inputString.find(delimiter);
  string stringSection {};
  while (end != -1) {
    stringSection = inputString.substr(start, end - start);
    outputList.push_back(stringSection);
    start = end + delimiter.size();
    end = inputString.find(delimiter, start);
  }
  outputList.push_back(inputString.substr(start, inputString.size() - start));

  return outputList;
}