#include <string>
#include <map>
#include <iostream>

using std::cin;
using std::cout;    using std::endl;
using std::string;

int main()
{
  string s;
  std::map<string, int> counters;  // store each word and and associated counter

  // read the input, keeping track of each word and how often we see it
  while (cin >> s)
    ++counters[s];

  // write the words and associated counts
  for (std::map<string, int>::const_iterator it = counters.begin();
       it != counters.end(); ++it) {
    cout << it->first << "\t" << it->second << endl;
  }
  return 0;

}
