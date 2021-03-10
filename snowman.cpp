#include "snowman.hpp"
namespace ariel{
    std::string snowman(int dna){
        const int dna1 = 33232124;
        const int dna2 =11114411;

        switch(dna){
        case dna1:
            return "   _\n  /_\\\n\\(o_O)\n (] [)>\n (   )";
            break;
        case dna2:
            return "_===_\n(.,.)\n( : )\n( : )";
            break;
        default:
            throw std::invalid_argument{"Invalid code '5'."};
        }
    }  
}

/*
Just basic implimantion.
*/
