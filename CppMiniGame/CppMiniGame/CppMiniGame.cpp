#include <iostream>
#include "Game.h"


int main()
{

    Game Mini;

    while (Mini.IsCreate()) {
        /*Window.clear(sf::Color(127,46,30,0));
        Window.display();*/
        
        Mini.ExecEvent();
    }

}