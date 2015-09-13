#include "FireBarrier.h"
#include "obstaculos.h"
#include "Box.h"

FireBarrier::FireBarrier()
{
    firebarrier = al_load_bitmap("resources/firebarrier.png");

    cuadro->width = al_get_bitmap_width(firebarrier);
    cuadro->height = al_get_bitmap_height(firebarrier);
al_draw_bitmap(firebarrier,0,0,0);

}

FireBarrier::~FireBarrier()
{

}

void Entidad::draw()
    {
      //  al_draw_bitmap(firebarrier);
    }
