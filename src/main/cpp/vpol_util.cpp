#include "vpol_util.h"

using namespace std;

namespace vpol
{
    namespace util
    {
        vector <string> split(string str, char c)
        {
            vector<string> split_str;
            size_t pos = str.find(c);

            while(pos != string::npos)
            {
                split_str.push_back(str.substr(0, pos));
                str = str.substr(pos);
                pos = str.find(c);
            }

            return split_str;
        }

        size_t next_non_space_char(size_t pos, string str)
        {
            while(pos != str.length() && is_whitespace(str[pos])) pos++;

            if(pos == str.length()) return string::npos;

            return pos;
        }
    }
}