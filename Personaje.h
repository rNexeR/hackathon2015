#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "Box.h"
#include "Entidad.h"
#include <iostream>
#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <vector>

//#include <Highscores.h>

using namespace std;


class Personaje : public Entidad
{
    public:
        int vida;
        vector<ALLEGRO_BITMAP*> skins;
        Personaje();
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
