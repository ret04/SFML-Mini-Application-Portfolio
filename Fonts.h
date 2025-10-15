
#ifndef CALCULATOR_FONTS_H
#define CALCULATOR_FONTS_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <map>
#include "fontEnum.h"

class Fonts {
private:
    inline static std::map<FontEnum, sf::Font> fonts;
    static std::string getPath(FontEnum font);
    static void loadFont(FontEnum font);

public:
    static sf::Font& getFont(FontEnum font);

};


#endif //CALCULATOR_FONTS_H
