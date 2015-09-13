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

enum TIPO {RED, GREEN, BLUE};

class Personaje : public Entidad
{
    public:
        int vida, tipoActual, frame, animacionActual;
        vector<ALLEGRO_BITMAP*> skins[3];
        Personaje(ALLEGRO_EVENT *ev);
        void keydown(int keycode, bool* variable);
        void act();
        void draw();
        bool keyPressed[2];
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
