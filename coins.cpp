#include "coins.h"
#include "obstaculos.h"

Coins::Coins(int w, int h, int x, int y)
{
    this->width = w;
    this->height = h;
    this->x = x;
    this->y = y;
}

Coins::~Coins()
{
    //dtor
}

void Coins::showCoins()
{
    while(true)
    {
        coin = al_load_bitmap("resources/coin.png");
        al_draw_bitmap(coin, 0, 0, 0);
        al_flip_display();
    }
}
