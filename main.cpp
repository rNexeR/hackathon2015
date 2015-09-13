#include <iostream>

#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
//#include <Highscores.h>
#include "coins.h"
#include "lives.h"
#include "obstaculos.h"
#include "FloatingObs.h"

using namespace std;

ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_EVENT_QUEUE *event_queue = NULL;
//ALLEGRO_MAP *mapa = al_open_map("/tmx", "lab.tmx");
//al_draw_map(mapa, 0, 0, 0); // (map, dx, dy, flags)

//EVENTOS Y TIMERS
ALLEGRO_EVENT ev;
ALLEGRO_TIMEOUT timeout;
ALLEGRO_TIMER *timer = NULL;

//Elementos Generales
ALLEGRO_BITMAP  *logo   = NULL;
ALLEGRO_BITMAP  *instru   = NULL;
ALLEGRO_BITMAP  *fondo   = NULL;
ALLEGRO_BITMAP  *pausa   = NULL;

ALLEGRO_SAMPLE *music = NULL;
ALLEGRO_SAMPLE_ID imusic;
ALLEGRO_SAMPLE *effect = NULL;
ALLEGRO_SAMPLE_ID ieffect;
ALLEGRO_SAMPLE *game = NULL;
ALLEGRO_SAMPLE_ID igame;

ALLEGRO_KEYBOARD_STATE keystate;

//ALLEGRO_

struct Box{
    Box(int w, int h, int x, int y){
        width = w;
        height = h;
        this->x = x;
        this->y = y;
    }
    int width, height, x, y;
};

ALLEGRO_BITMAP* bitmap;
ALLEGRO_BITMAP* nubes;
Box bitmapBox(1000, 1000, 0, 0);

ALLEGRO_FONT *normalFont = NULL;

int width = 768, height = 1280, FPS = 30, seconds=1, timer2=0, moveSpeed=5,moveSpeedB1=1, moveSpeedB2=3;
string currentuser="hola";
<<<<<<< HEAD
        int bg1=0, bg2=0;
=======
bool izq=false, der=false;

void keydown(int keycode, bool* variable)
{
    if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
    {
        if(ev.keyboard.keycode == keycode)
            *variable=true;
    }
        if(ev.type == ALLEGRO_EVENT_KEY_UP)
    {
        if(ev.keyboard.keycode == keycode)
            *variable=false;
    }
}

bool press(int keycode)
{
    if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
    {
        if(ev.keyboard.keycode==keycode)
        {
            return true;
        }
        return false;
    }
}
>>>>>>> 9ff6a39be386a26343238ff793624837fc6d482b

int initAllegro()
{
    if(!al_init())
    {
        cout<<"failed to initialize allegro!\n"<<endl;
        return -1;
    }

    if(!al_init_image_addon())
    {
        cout<<"Error: Failed to initialize al_init_image_addon!"<<endl;
        return -1;
    }

    display = al_create_display(width, height);
    if(!display)
    {
        cout<<"failed to create display!\n"<<endl;
        return -1;
    }

    event_queue = al_create_event_queue();
    if(!event_queue)
    {
        cout<<"failed to create event_queue!\n"<<endl;
        al_destroy_display(display);
        return -1;
    }

    timer = al_create_timer(1.0 / FPS);
    if(!timer)
    {
        cout<<"failed to create timer!"<<endl;
    }

    if(!al_install_keyboard())
    {
        cout<<"failed to initialize the keyboard!"<<endl;
    }

    if(!al_install_audio() || !al_init_acodec_addon() || !al_reserve_samples(2))
    {
        cout<<"failed to initialize Audio!"<<endl;
    }

    al_init_font_addon(); // initialize the font addon
    al_init_ttf_addon();// initialize the ttf (True Type Font) addon
    cout<<"Llego aki";
//    normalFont = al_load_ttf_font("PIXEL-LI.TTF",50,0 );
//    cartoonFont = al_load_ttf_font("GameFiles/fonts/kenpixel_blocks.ttf",50,0 );
//
//    if (!normalFont || !cartoonFont)
//    {
//        cout<<"Failed to initialize the font"<<endl;
//        return -1;
//    }

    al_register_event_source(event_queue, al_get_display_event_source(display));//registrar eventos del display
    al_register_event_source(event_queue, al_get_timer_event_source(timer));//registrar eventos del timer
    al_register_event_source(event_queue, al_get_keyboard_event_source());//registrar eventos del teclado

    al_start_timer(timer);

    al_init_timeout(&timeout, 0.06);
}

//string ingresarNombre()
//{
//    string name = "";
//    while(1)
//    {
//        al_clear_to_color(al_map_rgb(0,0,0));
//        bool get_event = al_wait_for_event_until(event_queue, &ev, &timeout);
//        if(get_event && ev.type == ALLEGRO_EVENT_KEY_DOWN)
//        {
//            if (teclaDownEvent(ALLEGRO_KEY_ESCAPE) || teclaDownEvent(ALLEGRO_KEY_ENTER))
//                break;
//            for(int x = 1; x <= 27; x++)//for para obtener los valores de todas las letras
//                if (teclaDownEvent(x))//comparamos que tecla está siendo presionada
//                {
//                    char e = x+64; //de ser así, sumarle al valor ASCII equivalente
//                    name.push_back(e);//concatenarla al nombre
//                }
//
//            if (teclaDownEvent(ALLEGRO_KEY_BACKSPACE) && name.size()>0)//comprar si vamos a borrar una letra
//            {
//                string temp = name;
//                name = "";
//                for(int x = 0; x<temp.size()-1; x++)
//                    name+=temp[x];
//            }
//        }
//        al_draw_bitmap(fondo,0,0,0);
//        al_draw_text(normalFont, al_map_rgb(102,204,0), width/2, (height/2)-35,ALLEGRO_ALIGN_CENTER, "INGRESE SU NOMBRE:");
//        al_draw_text(normalFont, al_map_rgb(255,255,255), width/2, height/2,ALLEGRO_ALIGN_CENTRE, name.c_str());//dibuja el nombre
//        al_flip_display();//necesario para cambiar a la siguiente parte del buffer (que dibujará)
//    }
//    return name;
//}

int main()
{
    initAllegro();
<<<<<<< HEAD
    al_install_keyboard();

=======
//    A
    cout<<"llrego alo"<<endl;
>>>>>>> 9ff6a39be386a26343238ff793624837fc6d482b
    bitmap = al_load_bitmap("resources/blobs/blue1.png");
    fondo = al_load_bitmap("resources/fondo-cielo.png");
    nubes = al_load_bitmap("resources/nubes.png");

//    Highscores *high=new Highscores();
//    high->highs.insert(pair<int, string>(seconds, currentuser));
    while(true){
        bool get_event = al_wait_for_event_until(event_queue, &ev, &timeout);

//            al_get_keyboard_state(&keystate);
            keydown(ALLEGRO_KEY_RIGHT, &der);
            keydown(ALLEGRO_KEY_LEFT, &izq);
            if(izq)
                bitmapBox.x -= moveSpeed;
            if(der)
                bitmapBox.x += moveSpeed;

        if(ev.type == ALLEGRO_EVENT_TIMER) {
            timer2++;
            if(timer2==60)
            {
                cout<<seconds++<<endl;
                timer2=0;
            }
            if(timer2%2==0)
            {

            }
        }
        if(get_event && ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
        {
            break;
        }
//        al_clear_to_color(al_map_rgb(0,0,255));
        al_draw_bitmap(fondo, 0, bg1, 0);
        al_draw_bitmap(fondo, 0, bg1+2560, 0);
        al_draw_bitmap(nubes, 0, bg2, 0);
        al_draw_bitmap(nubes, 0, bg2+2560, 0);
        bg1-=moveSpeedB1;
        bg2-=moveSpeedB2;
        if(bg1<=-2560)
            bg1=0;
        if(bg2<=-2560)
            bg2=0;
        al_draw_bitmap(bitmap, bitmapBox.x ,bitmapBox.y, 0);
        al_flip_display();

    }
    return 0;
}
