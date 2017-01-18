#ifndef ORQUERY_HPP_
#define ORQUERY_HPP_

#include "BinaryQuery.hpp"

class OrQuery : public BinaryQuery {
  friend Query operator|(const Query &, const Query &);
  OrQuery(const Query &left, const Query &right)
      : BinaryQuery(left, right, "|"){};
  QueryResult eval(const TextQuery &) const;
};

inline Query operator|(const Query &lhs, const Query &rhs) {
  return shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

#endif
