#ifndef QUERY_BASE_HPP_
#define QUERY_BASE_HPP_
#include "QueryResult.hpp"
#include "TextQuery.hpp"

class Query_base {
  friend class Query;

protected:
  using lineNo = TextQuery::line_no;
  virtual ~Query_base() = default;

private:
  // virtual QueryResult eval(const TextQuery &tq) const = 0;
  virtual string req() const = 0;
};

#endif
