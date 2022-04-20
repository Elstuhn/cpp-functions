#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, string delimiter = " ") {
  stringstream ss(str);
  stringstream sresult;
  vector<string> result;
  if (delimiter == " ") {
    string word;
    while (ss >> word) {
      result.push_back(word);
    }
    return result;
  }
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == delimiter[0]) {
      result.push_back(sresult.str());
      sresult.str("");
      continue;
    }
    sresult << str[i];
  }
  if (str[-1] != delimiter[0]) {
    result.push_back(sresult.str());
  }
  return result;
}
