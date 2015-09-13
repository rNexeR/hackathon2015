#include "Entidad.h"

Entidad::Entidad()
{
    colisionado;
    tamano = new Box(0,0,0,0);
    velocity = 1;
}

Entidad::~Entidad()
{
    //dtor
}
