#ifndef ENTIDAD_H
#define ENTIDAD_H
#include "Box.h"
#include <iostream>
#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
//#include <Highscores.h>

using namespace std;


class Entidad
{
    public:
        bool colisionado;
        Box *tamano;// = new Box(0,0,0,0);
        float velocity;// = 1;
        virtual void act(ALLEGRO_EVENT* ev) = 0;
        virtual void draw() = 0;
        Entidad();
        virtual ~Entidad();
    protected:
    private:
};

#endif // ENTIDAD_H
