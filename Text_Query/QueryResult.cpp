#include "QueryResult.hpp"

ostream &print(ostream &os, const QueryResult &qr) {
  os << "the word:" << qr.sought << " "
     << "shows up " << qr.lines->size() << " times " << endl;
  os << "in line: " << endl;
  for (auto num : *qr.lines) {
    os << "\t(line" << num + 1 << ")" << *(qr.file->begin() + num) << endl;
  }
  return os;
}
