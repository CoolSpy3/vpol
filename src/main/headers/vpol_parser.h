#pragma once
#include "includes.h"
#include "vpol_instructions.h"
#include "vpol_util.h"

namespace vpol
{
    namespace parser
    {
        std::vector<std::string> split(std::string str, char c);
        std::vector<vpol::instructions::instruction> parse(std::vector<std::string> lines);

    }
}
