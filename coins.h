#ifndef COINS_H
#define COINS_H

#include <allegro5/allegro.h>
#include <allegro5/allegro5.h>
#include "allegro5/allegro_image.h"
#include "obstaculos.h"
#include "allegro5/allegro_native_dialog.h"
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

class Coins : public Obstaculos
{
    public:
        ALLEGRO_DISPLAY *display;
        ALLEGRO_EVENT ev;
        ALLEGRO_TIMEOUT timeout;
        ALLEGRO_TIMER *timer;
        ALLEGRO_BITMAP *coin;
        ALLEGRO_KEYBOARD_STATE keystate;
        int width, height, x, y, FPS;
        Coins(int w, int h, int x, int y);
        void showCoins();
        virtual ~Coins();
    protected:
    private:
};

#endif // COINS_H
