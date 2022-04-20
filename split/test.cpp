#include <vector>
#include <sstream>
#include <iostream>
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

int main() {
    string str = "Hello,there,guy";
    vector<string> test = split(str, ",");
    for (string i : test) {
        cout << i << endl;
    }
    return 0;
}
