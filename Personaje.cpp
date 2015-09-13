#include "Personaje.h"

Personaje::Personaje(ALLEGRO_EVENT *ev)
{
    vida = 3;
    animacionActual = 0;
    velocity = 10;
    tipoActual = RED;
    skins[RED].push_back(al_load_bitmap("resources/blobs/red1.png"));
    skins[RED].push_back(al_load_bitmap("resources/blobs/red2.png"));
    skins[RED].push_back(al_load_bitmap("resources/blobs/red3.png"));
    skins[RED].push_back(al_load_bitmap("resources/blobs/red4.png"));
    skins[GREEN].push_back(al_load_bitmap("resources/blobs/green1.png"));
    skins[GREEN].push_back(al_load_bitmap("resources/blobs/green2.png"));
    skins[GREEN].push_back(al_load_bitmap("resources/blobs/green3.png"));
    skins[GREEN].push_back(al_load_bitmap("resources/blobs/green4.png"));
    skins[BLUE].push_back(al_load_bitmap("resources/blobs/blue1.png"));
    skins[BLUE].push_back(al_load_bitmap("resources/blobs/blue2.png"));
    skins[BLUE].push_back(al_load_bitmap("resources/blobs/blue3.png"));
    skins[BLUE].push_back(al_load_bitmap("resources/blobs/blue4.png"));

    cuadro->width = al_get_bitmap_width(skins[RED][0]);
    cuadro->height = al_get_bitmap_height(skins[RED][0]);

    this->ev = ev;
    keyPressed[0] = false;
    keyPressed[1] = false;
}

    void Personaje :: keydown(int keycode, bool* variable)
    {
        if(ev->type == ALLEGRO_EVENT_KEY_DOWN)
        {
            if(ev->keyboard.keycode == keycode)
                *variable=true;
        }
        if(ev->type == ALLEGRO_EVENT_KEY_UP)
        {
            if(ev->keyboard.keycode == keycode)
                *variable=false;
        }
    }
    void Personaje :: act()
    {
        keydown(ALLEGRO_KEY_LEFT, &keyPressed[0]);
        keydown(ALLEGRO_KEY_RIGHT, &keyPressed[1]);
        if(keyPressed[0] && cuadro->x >= -1+velocity)
            cuadro->x-=velocity;
        if(keyPressed[1] && cuadro->x + cuadro->width <= 768)
            cuadro->x+=velocity;
        if(frame%13==0)
        {
            if(animacionActual < 3)
                animacionActual++;
            else
                animacionActual=0;
        }
        frame++;
    }
    void Personaje :: draw()
    {
        //al_draw_scaled_bitmap(skins[tipoActual][1], cuadro->x, cuadro->y, cuadro->width, cuadro->height, cuadro->x, cuadro->y, cuadro->width, cuadro->height, 0);
        al_draw_bitmap(skins[tipoActual][animacionActual], cuadro->x, cuadro->y, 0);
        //cambiar de skin
    }

Personaje::~Personaje()
{
    //dtor
}
