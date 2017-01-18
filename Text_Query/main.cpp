#include "Query.hpp"
#include "QueryResult.hpp"
#include "TextQuery.hpp"
#include <fstream>
#include <iostream>
using namespace std;

void RunQueries(ifstream &infile) {
  string s, line, word;
  TextQuery tq(infile);
  Query q = Query("fiery") & Query("bird") | Query("wind");
  cout << q;
  // while (true) {
  //   cout << "enter the word to look for,or enter q to quit" << endl;
  //   if (!(cin >> s) || s == "q")
  //     break;
  //   print(cout, tq.query(s)) << endl;
  // }
}

int main(int argc, char *argv[]) {
  ifstream file("input_file.txt");
  if (!file) {
    cout << "could not open the file!" << endl;
    return 0;
  }
  RunQueries(file);
  return 0;
}
