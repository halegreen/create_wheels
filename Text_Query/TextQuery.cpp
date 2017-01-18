#include "TextQuery.hpp"

TextQuery::TextQuery(ifstream &infile) : file(new vector<string>) {
  string text;
  while (getline(infile, text)) {
    file->push_back(text);
    int n = file->size() - 1;
    istringstream line(text); // split line into words
    string word;
    while (line >> word) {
      auto &lines = word_map[word];
      if (!lines) // if firstly find
        lines.reset(new set<line_no>);
      lines->insert(n);
    }
  }
}

QueryResult TextQuery::query(string look_up_word) const {
  static shared_ptr<set<line_no>> no_data(new set<line_no>);
  auto position = word_map.find(look_up_word);
  if (position == word_map.end())
    return QueryResult(look_up_word, file, no_data);
  else
    return QueryResult(look_up_word, file, position->second);
}
