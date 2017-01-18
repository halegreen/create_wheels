#ifndef BINARYQUERY_HPP_
#define BINARYQUERY_HPP_

#include "Query.hpp"

class BinaryQuery : public Query_base {
protected:
  BinaryQuery(const Query &lq, const Query &rq, const string &s)
      : lhs(lq), rhs(rq), opSym(s){};
  string req() const {
    return "(" + lhs.req() + " " + opSym + " " + rhs.req() + ")";
  }
  Query lhs, rhs;
  string opSym;
};

#endif
