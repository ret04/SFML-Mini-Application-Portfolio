//
// Created by Ryan Takeshita on 12/5/23.
//

#ifndef CHESSGAME_IMAGE_H
#define CHESSGAME_IMAGE_H

#include <SFML/Graphics.hpp>

class image {

private:
    static sf::Texture texture;
    static void loadTexture();

public:
    static sf::Texture& getImage();

};


#endif //CHESSGAME_IMAGE_H
