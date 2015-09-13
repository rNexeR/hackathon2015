#include "lives.h"
#include "obstaculos.h"

Lives::Lives(int w, int h, int x, int y)
{
    this->width = w;
    this->height = h;
    this->x = x;
    this->y = y;
}

Lives::~Lives()
{
    //dtor
}

void Lives::showLives()
{
    while(true)
    {
        heart = al_load_bitmap("resources/heart.png");
        al_draw_bitmap(heart, 0, 0, 0);
        al_flip_display();
    }
}
