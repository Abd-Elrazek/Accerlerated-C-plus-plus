#ifndef gen_sentence_H
#define gen_sentence_H
#include "grammar.h"

bool bracketed(const std::string& s);
int nrand(int n);

void gen_aux(const Grammar& g,const std::string& word,std::list<std::string>& ret);
std::list<std::string> gen_sentence(const Grammar& g);

#endif // gen_sentence_H
