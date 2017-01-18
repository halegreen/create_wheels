#ifndef TEXTQUERY_HPP_
#define TEXTQUERY_HPP_
#include "QueryResult.hpp"
#include <fstream>
#include <iterator>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class QueryResult;
class TextQuery {
public:
  using line_no = vector<string>::size_type;
  TextQuery(ifstream &infile);
  ~TextQuery(){};
  QueryResult query(string) const;

private:
  shared_ptr<vector<string>> file;
  map<string, shared_ptr<set<line_no>>> word_map;
};

#endif
