#ifndef OBSTACULOS_H
#define OBSTACULOS_H
#include <iostream>
#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include "Entidad.h"

using namespace std;

class Obstaculos : public Entidad
{
    public:
        bool ene;
        Obstaculos();
        virtual void effect()=0;
        virtual ~Obstaculos();
    protected:
    private:
};

#endif // OBSTACULOS_H
