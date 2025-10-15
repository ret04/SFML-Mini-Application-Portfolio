//
// Created by Ryan Takeshita on 11/20/23.
//

#include "Fonts.h"

std::string Fonts::getPath(FontEnum font) {
    switch(font){
        case OPEN_SANS : return "OpenSans-Bold.ttf";
        case ARIAL : return "arial.ttf";
        case STARMONK : return "STARMONK.TTF";
    }
}

void Fonts::loadFont(FontEnum font) {
    fonts[font].loadFromFile(getPath(font));

}

sf::Font &Fonts::getFont(FontEnum font) {
    loadFont(font);
    return fonts[font];
}
