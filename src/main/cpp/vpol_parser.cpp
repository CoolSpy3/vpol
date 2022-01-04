#include "vpol_parser.h"

using namespace std;
using namespace vpol::instructions;
using namespace vpol::util;

vector<instruction> vpol::parser::parse(vector<string> lines)
{
    vector<instruction> instructions;

    for(size_t i = 0; i < lines.size(); i++){
        string line = lines[i];

        while(next_non_space_char(0, line))
        {
            
        }
    }

    return instructions;
}
