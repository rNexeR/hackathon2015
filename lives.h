#ifndef LIVES_H
#define LIVES_H
#include "obstaculos.h"

#include <allegro5/allegro.h>
#include <allegro5/allegro5.h>
#include "allegro5/allegro_image.h"
#include "obstaculos.h"
#include "allegro5/allegro_native_dialog.h"
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

class Lives : public Obstaculos
{
    public:
        int width, height, x, y;
        Lives(int w, int h, int x, int y);
        ALLEGRO_BITMAP *heart;
        void showLives();
        virtual ~Lives();
    protected:
    private:
};

#endif // LIVES_H
