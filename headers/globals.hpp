// Generated automatically. Do not edit!

#ifndef NECROHEADERS_GLOBALS_H
#define NECROHEADERS_GLOBALS_H
template<class T> class Array;
class ControllerGame;
class GraphicsContext;
class InputDevice;
class List26;
class Player;
class String;
class XMLDoc;
class gxtkAudio;
class gxtkGraphics;

namespace global {
#ifdef _WIN32
inline String * * logTimestamp = (String * *) 0x833ebc;
inline String * * GAMEDATA_VERSION = (String * *) 0x833ee0;
inline Array<Player *> * * players = (Array<Player *> * *) 0x833f68;
inline Array<int> * * beatData = (Array<int> * *) 0x833fbc;
inline Array<int> * * lastPlayerMoveBeat = (Array<int> * *) 0x833fc4;
inline String * * DEBUG_HOTKEY_MODE = (String * *) 0x833fcc;
inline String * * DEBUG_HOTKEY_TEXT = (String * *) 0x833fd0;
inline String * * DEBUG_RAND_SEED = (String * *) 0x833fd4;
inline bool * DEBUG_ALL_TILES_VISIBLE = (bool *) 0x83570a;
inline List26 * * bpmStorage = (List26 * *) 0x83570c;
inline int * bpmCalculatorStart = (int *) 0x835710;
inline int * bpmCalculatorBeats = (int *) 0x835714;
inline bool * DEBUG_DISCOFLOOR_ON = (bool *) 0x835768;
inline bool * CHRISTMAS_MODE = (bool *) 0x835769;
inline bool * DEBUG_STOP_ENEMY_MOVEMENT = (bool *) 0x83576c;
inline bool * DEBUG_MOUSE_COORDS = (bool *) 0x83576e;
inline bool * DEBUG_SHOW_BEAT_INDICATORS = (bool *) 0x83576f;
inline float * DEBUG_VOLUME_MULTIPLIER = (float *) 0x8357e0;
inline int * lastReportedFPSUpdate = (int *) 0x835828;
inline int * lastReportedFPS = (int *) 0x83582c;
inline bool * DEBUG_SHOW_GUI = (bool *) 0x835838;
inline int * totalPlaytimeLastAdded = (int *) 0x83583c;
inline bool * incrementFixedBeatNum = (bool *) 0x835861;
inline int * lastEnemyMoveBeat = (int *) 0x835864;
inline bool * DEBUG_GOD_MODE = (bool *) 0x835894;
inline bool * debugEnablePrototypes = (bool *) 0x835899;
inline int * totalPlaytimeMilliseconds = (int *) 0x8358e0;
inline int * subRunPlaytimeMilliseconds = (int *) 0x83593c;
inline int * runPlaytimeLastAdded = (int *) 0x835940;
inline int * runPlaytimeMilliseconds = (int *) 0x835944;
inline int * hardcoreModeSuccessScore = (int *) 0x835948;
inline int * speedrunSuccessScore = (int *) 0x83594c;
inline int * dailyChallengeSuccessScore = (int *) 0x835950;
inline bool * gamePaused = (bool *) 0x83596c;
inline int * currentDepth = (int *) 0x835a70;
inline bool * showScoreMessage = (bool *) 0x835a8b;
inline bool * hasWon = (bool *) 0x835ac0;
inline bool * DEBUG_OUTPUT = (bool *) 0x835b43;
inline ControllerGame * * controllerGamePointer = (ControllerGame * *) 0x835b44;
inline bool * DEBUG_GO_STRAIGHT_TO_GAMEPLAY = (bool *) 0x835b61;
inline bool * DEBUG_LOG_OUTPUT = (bool *) 0x835b88;
inline XMLDoc * * xmlData = (XMLDoc * *) 0x835ba4;
inline bool * DEBUG_DISABLE_CLOUD_SAVES = (bool *) 0x835ba9;
inline int * player1 = (int *) 0x835bf0;
inline int * bb_random_Seed = (int *) 0x835bf8;
inline int * numPlayers = (int *) 0x835c00;
inline int * currentZone = (int *) 0x835c0c;
inline int * currentLevel = (int *) 0x835c10;
inline bool * DEBUG_BUILD = (bool *) 0x835c1e;
inline bool * uncapFrameRate = (bool *) 0x835c1f;
inline InputDevice * * bb_input_device = (InputDevice * *) 0x835c20;
inline gxtkAudio * * bb_audio_device = (gxtkAudio * *) 0x835c24;
inline GraphicsContext * * bb_graphics_context = (GraphicsContext * *) 0x835c28;
inline gxtkGraphics * * bb_graphics_renderDevice = (gxtkGraphics * *) 0x835c2c;
inline gxtkGraphics * * bb_graphics_device = (gxtkGraphics * *) 0x835c34;
inline int * lastGCAllocCount = (int *) 0x835c40;
inline int * lastGCS = (int *) 0x835c44;
inline int * lastFrameCount = (int *) 0x835c48;
inline int * lastFPS = (int *) 0x835c4c;
inline int * lastFrameTime = (int *) 0x835c50;
inline int * lastFrameCountUpdate = (int *) 0x835c54;
inline int * globalFrameCounter = (int *) 0x835c58;
inline int * lastFPSUpdate = (int *) 0x835c5c;
inline int * lastFrameTimeUpdate = (int *) 0x835c60;
inline int * FRAMES_PER_SEC = (int *) 0x835c64;
inline int * FIXED_HEIGHT = (int *) 0x835c68;
inline int * FIXED_WIDTH = (int *) 0x835c6c;
inline float * GLOBAL_SCALE_FACTOR = (float *) 0x835c70;
#endif

#ifdef __linux__
inline String * * logTimestamp = (String * *) 0x856ab2c;
inline String * * GAMEDATA_VERSION = (String * *) 0x856a8f8;
inline Array<Player *> * * players = (Array<Player *> * *) 0x856a674;
inline Array<int> * * beatData = (Array<int> * *) 0x856a450;
inline Array<int> * * lastPlayerMoveBeat = (Array<int> * *) 0x856a440;
inline String * * DEBUG_HOTKEY_MODE = (String * *) 0x856a314;
inline String * * DEBUG_HOTKEY_TEXT = (String * *) 0x856a310;
inline String * * DEBUG_RAND_SEED = (String * *) 0x856a308;
inline bool * DEBUG_ALL_TILES_VISIBLE = (bool *) 0x856a3d8;
inline List26 * * bpmStorage = (List26 * *) 0x856a2f0;
inline int * bpmCalculatorStart = (int *) 0x856a2f4;
inline int * bpmCalculatorBeats = (int *) 0x856a2f8;
inline bool * DEBUG_DISCOFLOOR_ON = (bool *) 0x856a304;
inline bool * CHRISTMAS_MODE = (bool *) 0x856a30c;
inline bool * DEBUG_STOP_ENEMY_MOVEMENT = (bool *) 0x856a30e;
inline bool * DEBUG_MOUSE_COORDS = (bool *) 0x856a6ec;
inline bool * DEBUG_SHOW_BEAT_INDICATORS = (bool *) 0x856a2fc;
inline float * DEBUG_VOLUME_MULTIPLIER = (float *) 0x856a444;
inline int * lastReportedFPSUpdate = (int *) 0x856a2e8;
inline int * lastReportedFPS = (int *) 0x856a2ec;
inline bool * DEBUG_SHOW_GUI = (bool *) 0x856a30d;
inline int * totalPlaytimeLastAdded = (int *) 0x856a31c;
inline bool * incrementFixedBeatNum = (bool *) 0x856a318;
inline int * lastEnemyMoveBeat = (int *) 0x856a360;
inline bool * DEBUG_GOD_MODE = (bool *) 0x856a370;
inline bool * debugEnablePrototypes = (bool *) 0x856a488;
inline int * totalPlaytimeMilliseconds = (int *) 0x856a900;
inline int * subRunPlaytimeMilliseconds = (int *) 0x856a33c;
inline int * runPlaytimeLastAdded = (int *) 0x856a340;
inline int * runPlaytimeMilliseconds = (int *) 0x856a34c;
inline int * hardcoreModeSuccessScore = (int *) 0x856a364;
inline int * speedrunSuccessScore = (int *) 0x856a368;
inline int * dailyChallengeSuccessScore = (int *) 0x856a36c;
inline bool * gamePaused = (bool *) 0x856a348;
inline int * currentDepth = (int *) 0x856a4d8;
inline bool * showScoreMessage = (bool *) 0x856a6df;
inline bool * hasWon = (bool *) 0x856a6e0;
inline bool * DEBUG_OUTPUT = (bool *) 0x856a319;
inline ControllerGame * * controllerGamePointer = (ControllerGame * *) 0x856a850;
inline bool * DEBUG_GO_STRAIGHT_TO_GAMEPLAY = (bool *) 0x856a31a;
inline bool * DEBUG_LOG_OUTPUT = (bool *) 0x856ab30;
inline XMLDoc * * xmlData = (XMLDoc * *) 0x856a8fc;
inline bool * DEBUG_DISABLE_CLOUD_SAVES = (bool *) 0x856aadd;
inline int * player1 = (int *) 0x856a670;
inline int * bb_random_Seed = (int *) 0x856a44c;
inline int * numPlayers = (int *) 0x856a678;
inline int * currentZone = (int *) 0x856a654;
inline int * currentLevel = (int *) 0x856a658;
inline bool * DEBUG_BUILD = (bool *) 0x856ab68;
inline bool * uncapFrameRate = (bool *) 0x856a320;
inline InputDevice * * bb_input_device = (InputDevice * *) 0x856abbc;
inline gxtkAudio * * bb_audio_device = (gxtkAudio * *) 0x856abb8;
inline GraphicsContext * * bb_graphics_context = (GraphicsContext * *) 0x856abac;
inline gxtkGraphics * * bb_graphics_renderDevice = (gxtkGraphics * *) 0x856aba8;
inline gxtkGraphics * * bb_graphics_device = (gxtkGraphics * *) 0x856abc0;
inline int * lastGCAllocCount = (int *) 0x856a328;
inline int * lastGCS = (int *) 0x856a324;
inline int * lastFrameCount = (int *) 0x856a330;
inline int * lastFPS = (int *) 0x856a32c;
inline int * lastFrameTime = (int *) 0x856a334;
inline int * lastFrameCountUpdate = (int *) 0x856a75c;
inline int * globalFrameCounter = (int *) 0x856a760;
inline int * lastFPSUpdate = (int *) 0x856a758;
inline int * lastFrameTimeUpdate = (int *) 0x856a764;
inline int * FRAMES_PER_SEC = (int *) 0x856ab1c;
inline int * FIXED_HEIGHT = (int *) 0x856ab20;
inline int * FIXED_WIDTH = (int *) 0x856ab24;
inline float * GLOBAL_SCALE_FACTOR = (float *) 0x856ab28;
#endif

}
#endif
