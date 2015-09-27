#include "FloatingObs.h"
#include "obstaculos.h"
#include "Box.h"

using namespace std;

FloatingObs::FloatingObs()
{
    obstacle = al_load_bitmap("resources/obstacle.png");
    velo=3;

    cuadro->width = al_get_bitmap_width(obstacle);
    cuadro->height = al_get_bitmap_height(obstacle);
}

void FloatingObs :: act()
{
    cuadro->y-=3;
    cuadro->x+=velo;
    if(cuadro->x >= 768-cuadro->width)
        velo = -3;
    else if (cuadro->x <= 0)
        velo = 3;

}

void FloatingObs :: draw()
{
    al_draw_bitmap(obstacle, cuadro->x, cuadro->y, 0);
}

FloatingObs::~FloatingObs()
{
    al_destroy_bitmap(obstacle);
    delete cuadro;
}
