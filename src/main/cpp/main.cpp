#include "includes.h"
#include "vpol_parser.h"

using namespace std;

void error(string err_msg)
{
    cerr << err_msg << "\n";
    exit(1);
}

int main(int argc, char** argv)
{

    if(argc < 0) error("Usage: vpol [file]");

    vector<string> args;
    args.assign(argv + 1, argc + argv);

    string file_name = args[0];

    size_t ext_pos;

    if((ext_pos = file_name.find_last_of('.')) == string::npos || ext_pos >= file_name.length() - 1) error("Unknown File Type: " + file_name);

    string file_ext(file_name.substr(ext_pos + 1));

    ifstream is(file_name);

    if(!is.is_open()) error("Failed to open file: " + file_name);

    if(file_ext == ".vpol")
    {
        vector<string> lines;
        string buffer;

        while(getline(is, buffer)) lines.push_back(buffer);

        vpol::parser::parse(lines);
    }
    else if(file_ext == ".cvpol")
    {
        // Execute
    }
    else
    {
        is.close();
        error("Unknown File Type: " + file_name);
    }
}
