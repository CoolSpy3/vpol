#pragma once
#include "includes.h"

namespace vpol
{
    namespace util
    {

        std::vector<std::string> split(std::string str, char c);

        size_t next_non_space_char(size_t pos, std::string str);

        constexpr bool is_whitespace(char c) { return c == ' ' || c == '\t'; }

    }
}
