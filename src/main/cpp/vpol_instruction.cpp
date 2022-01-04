#include "vpol_instructions.h"

using namespace std;

namespace vpol {
    namespace instructions {

        void serialize(vector<instruction> instructions, ofstream& stream)
        {
            for(instruction& instruction: instructions)
            {
                stream << static_cast<uint8_t>(instruction.id);
                instruction.write(stream);
            }
        }

        vector<instruction> deserialize(ifstream& stream)
        {
            vector<instruction> instructions;

            while(stream.good())
            {
                uint8_t type_id;
                stream >> type_id;
                instruction_id type = static_cast<instruction_id>(type_id);

                switch(type)
                {
                    // Do Code
                }
            }

            return instructions;
        }

    }
}
