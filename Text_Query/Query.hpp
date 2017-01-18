/*定义接口类Query作为接口，隐藏整个继承体系;
定义抽象基类Query_base作为根基类*/

#ifndef QUERY_HPP_
#define QUERY_HPP_

#include "QueryResult.hpp"
#include "Query_base.hpp"
#include "TextQuery.hpp"
#include "WordQuery.hpp"
#include <memory>
#include <string>

class Query {

  friend Query operator~(const Query &);
  friend Query operator|(const Query &, const Query &);
  friend Query operator&(const Query &, const Query &);

public:
  Query(const string &s) : q(new WordQuery(s)) {
    cout << "Query(const string &s) : q(new WordQuery(s)) where s=" + s + "\n";
  };
  // QueryResult eval(const TextQuery &tq) const { return q->eval(tq); };
  string req() const { return q->req(); };

private:
  Query(shared_ptr<Query_base> query) : q(query) {
    cout << "Query(shared_ptr<Query_base>) : q(query)" << endl;
  };
  shared_ptr<Query_base> q;
};

inline ostream &operator<<(ostream &os, const Query &query) {
  return os << query.req();
}

#endif
