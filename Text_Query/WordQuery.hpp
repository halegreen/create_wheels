#ifndef WORDQUERY_HPP_
#define WORDQUERY_HPP_
#include "Query_base.hpp"
class WordQuery : public Query_base {
  friend class Query;
  WordQuery(const string &s) : query_word(s){};
  QueryResult eval(const TextQuery &tq) const { return tq.query(query_word); };
  string req() const { return query_word; };
  string query_word;
};

#endif
