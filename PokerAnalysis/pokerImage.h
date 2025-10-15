//
// Created by Ryan Takeshita on 10/19/23.
//

#ifndef FRIENDFUNCTIONS_IMAGE_H
#define FRIENDFUNCTIONS_IMAGE_H

#include <SFML/Graphics.hpp>

class pokerImage {

private:
    static sf::Texture texture;
    static void loadTexture();

public:
    static sf::Texture& getImage();

};


#endif //FRIENDFUNCTIONS_IMAGE_H
