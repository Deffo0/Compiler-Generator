//
// Created by Meniem on 28-Nov-23.
//

#include <string>
#ifndef COMPILER_REGULARDEFINITION_H
#define COMPILER_REGULARDEFINITION_H


class regularDefinition {
    private:
        std::string name;
        std::string regex;

    public:
        regularDefinition();
        regularDefinition(std::string name, std::string regex);

        [[nodiscard]] const std::string &getName() const;
        [[nodiscard]] const std::string &getRegex() const;
        void standardizeRegex();


};


#endif //COMPILER_REGULARDEFINITION_H
