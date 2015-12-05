#ifndef _ZORK_DEF_
#define _ZORK_DEF_

#include <functional>
#include <list>

using namespace std;

typedef function<void(const string&)> Action;
typedef function<bool()> Condition;

list<string> WordParser(const string &input);
Action ActionParser(const string& input);
Condition ConditionParser(const string& obj,const string& status);
Condition ConditionParser(bool has,const string& obj,const string& owner);

#endif
