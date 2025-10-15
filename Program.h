//
// Created by Ryan Takeshita on 12/11/23.
//

#ifndef FINALPORTFOLIO_PROGRAM_H
#define FINALPORTFOLIO_PROGRAM_H
#include "Nameable.h"
#include "Drawable.h"
#include "EventHandlerable.h"
#include "Updatable.h"


class Program : public Nameable, public sf::Drawable, public EventHandlerable,
        public Updatable{

};


#endif //FINALPORTFOLIO_PROGRAM_H
