#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> readInputFile(string fileName)
{
  ifstream inputFile { fileName };
  vector<string> fileContent;
  if (inputFile.is_open()) 
  {
    string line;
    while (getline(inputFile, line)) {
      fileContent.push_back(line);
    }
  } 
  else 
  {
    cout << "Input file " << fileName << " not found.\n";
  }

  return fileContent;
}