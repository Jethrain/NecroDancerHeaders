// Generated automatically. Do not edit!
#ifndef _ControllerIntro_
#define _ControllerIntro_
template<class T> class Array;
class Image;
class List4;
class Sprite;
class String;
class SubtitleData;
#include "Controller.hpp"

class ControllerIntro : public Controller  {
public:
    Sprite * splashScreen;
    Image * videoImg;
    String * introVideoName;
    String * introSongName;
    List4 * subtitles;
    int splashStartTime;
    int numKeyHits;
    bool delayFrame;
    Array<int> * currentFramePixels;
    bool startedPlayback;
    bool videoSprInitialized;
    SubtitleData * curSubtitle;
    Sprite * subtitleImg;
    int endVideoDelay;
    float splashAlpha;
    static Sprite * * videoSpr;
    static bool * quitIntro;

    // Wrappers
    ControllerIntro() {
        ptr::CSTR_ControllerIntro(this);
        ptr::New(this);
    }

    inline ControllerIntro * New() { return ptr::New(this); }
    inline void RegainFocus() { ptr::RegainFocus(this); }
    inline virtual void DrawFrame() { ptr::DrawFrame(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerIntro * (*New)(ControllerIntro * self);
        static void (*RegainFocus)(ControllerIntro * self);
        static void (*DrawFrame)(ControllerIntro * self);
        static void (*Update)(ControllerIntro * self);
        static void (*Render)(ControllerIntro * self);
        static void (*Destructor)(ControllerIntro * self);
        static void (*mark)(ControllerIntro * self);
        static void (*CSTR_ControllerIntro)(ControllerIntro * self);
    };
};

#ifdef _WIN32
Sprite * * ControllerIntro::videoSpr = (Sprite* *) 0x835b80;
bool * ControllerIntro::quitIntro = (bool*) 0x835b62;

ControllerIntro * (*ControllerIntro::ptr::New)(ControllerIntro * self) = (ControllerIntro * (*)(ControllerIntro * self)) 0x542e90;
void (*ControllerIntro::ptr::RegainFocus)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x53a860;
void (*ControllerIntro::ptr::DrawFrame)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x543da0;
void (*ControllerIntro::ptr::Update)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x543eb0;
void (*ControllerIntro::ptr::Render)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x544680;
void (*ControllerIntro::ptr::Destructor)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x5447b0;
void (*ControllerIntro::ptr::mark)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x544800;
void (*ControllerIntro::ptr::CSTR_ControllerIntro)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x542ba0;
#endif

#ifdef __linux__
Sprite * * ControllerIntro::videoSpr = (Sprite* *) 0x856a84c;
bool * ControllerIntro::quitIntro = (bool*) 0x856a848;

ControllerIntro * (*ControllerIntro::ptr::New)(ControllerIntro * self) = (ControllerIntro * (*)(ControllerIntro * self)) 0x8379130;
void (*ControllerIntro::ptr::RegainFocus)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x806f6a0;
void (*ControllerIntro::ptr::DrawFrame)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x8350d00;
void (*ControllerIntro::ptr::Update)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x83149c0;
void (*ControllerIntro::ptr::Render)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x841f300;
void (*ControllerIntro::ptr::Destructor)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x80fd180;
void (*ControllerIntro::ptr::mark)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x80ab110;
void (*ControllerIntro::ptr::CSTR_ControllerIntro)(ControllerIntro * self) = (void (*)(ControllerIntro * self)) 0x8151370;
#endif
#endif
