#include "FloatingObs.h"
#include "obstaculos.h"

FloatingObs::FloatingObs(int w, int h, int x, int y)
{
    this->width = w;
    this->height = h;
    this->x = x;
    this->y = y;
}

FloatingObs::~FloatingObs()
{
    //dtor
}

void FloatingObs::showFloatingObs()
{
    while(true)
    {
        obstacle = al_load_bitmap("resources/obstacle.png");
        al_draw_bitmap(obstacle, 0, 0, 0);
        al_flip_display();
    }

}
