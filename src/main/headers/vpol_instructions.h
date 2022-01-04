#pragma once
#include "includes.h"

namespace vpol
{
    namespace instructions
    {

        enum class instruction_id {
            alloc,
            dealloc,
            push,
            lock,
            goto_,
            if_,
            ifelse,
            class_
        };

        class _instruction
        {

            public:
                _instruction(instruction_id id) : id(id) {}
                const instruction_id id;
                virtual void execute() = 0;
                virtual void write(std::ofstream& stream) = 0;

        };

        typedef _instruction instruction;

        class instruction1 : public _instruction
        {
            public:
                void execute();

        };

        void serialize(std::vector<instruction> instructions, std::ofstream& stream);
        std::vector<instruction> deserialize(std::ifstream& stream);

    }
}
