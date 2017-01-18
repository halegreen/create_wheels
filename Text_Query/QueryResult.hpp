#ifndef QUERYRESULT_HH_
#define QUERYRESULT_HH_
#include "TextQuery.hpp"
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <vector>
using namespace std;

class QueryResult {
  friend ostream &print(ostream &os, const QueryResult &qr);

public:
  using line_no = vector<string>::size_type;
  QueryResult(string s, shared_ptr<vector<string>> f,
              shared_ptr<set<line_no>> l)
      : sought(s), file(f), lines(l){};
  ~QueryResult(){};

private:
  string sought;
  shared_ptr<vector<string>> file;
  shared_ptr<set<line_no>> lines; // lines where words in
};

ostream &print(ostream &os, const QueryResult &qr);

#endif
