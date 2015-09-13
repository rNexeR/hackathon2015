#ifndef FLOATINGOBS_H
#define FLOATINGOBS_H

#include <allegro5/allegro.h>
#include <allegro5/allegro5.h>
#include "allegro5/allegro_image.h"
#include "obstaculos.h"
#include "allegro5/allegro_native_dialog.h"
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

class FloatingObs : public Obstaculos
{
    public:
        ALLEGRO_DISPLAY *display;
        ALLEGRO_EVENT ev;
        ALLEGRO_TIMEOUT timeout;
        ALLEGRO_TIMER *timer;
        ALLEGRO_BITMAP *obstacle;
        ALLEGRO_KEYBOARD_STATE keystate;
        int width, height, x, y, FPS;
        FloatingObs(int w, int h, int x, int y);
        void showFloatingObs();
        virtual ~FloatingObs();
    protected:
    private:
};

#endif // FLOATINGOBS_H
