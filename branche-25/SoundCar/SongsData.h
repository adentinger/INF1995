#ifndef SONGS_DATA_H
#define SONGS_DATA_H 1

typedef uint8_t Tone;

const uint16_t tonesTable[13] = {0,523,554,587,622,659,698,740,784,830,880,932,988};
enum Tones
{
    O, C, Cs, D, Ds, E, F, Fs, G, Gs, A, As, B
};

// ------------
// | CHANSONS |
// ------------

// Chanson vide
Tone tones01[] = {0};
Tone tones02[] = {0};
uint8_t nTones0 = 1;
uint8_t beatDiv0 = 1; // speed: 1 note = 1/32 de sec

// Gradation
Tone tones11[] = {C|0x20,D|0x20,E|0x20,F|0x20,G|0x20,A|0x20,B|0x20,C|0x30,B|0x20,A|0x20,G|0x20,F|0x20,E|0x20,D|0x20,C|0x20,E|0x20,G|0x20,C|0x30,G|0x20,E|0x20,C|0x20,0};
uint8_t nTones1 = 22;
uint8_t beatDiv1 = 8; // speed: 1 note = 1/4 de sec

// Never Gonna Give You Up ("Rick Roll")
Tone tones31[] = {
    B|0x10,Cs|0x20,D|0x20,B|0x10, Fs|0x20,0|0x40/*x2*/,Fs|0x20, 0|0x40/*x2*/,E|0x60/*x2*/, 0|0xC0/*x4*/, B|0x10,Cs|0x20,D|0x20,B|0x10, E|0x20,0|0x40/*x2*/,E|0x20, 0|0x40/*x2*/,D|0xA0/*x3*/,Cs|0x20,B|0x10,0,
    B|0x10,Cs|0x20,D|0x20,B|0x10, D|0xE0/*x4*/, E|0x60/*x2*/,Cs|0xA0/*x3*/, B|0x10,A|0x90/*x3*/, 0,A|0x50/*x2*/, E|0xE0/*x4*/, D|0xE0/*x4*/, 0|0xC0/*x4*/,
    B|0x10,Cs|0x20,D|0x20,B|0x10, Fs|0x20,0|0x40/*x2*/,Fs|0x20, 0|0x40/*x2*/,E|0x60/*x2*/, 0|0xC0/*x4*/, B|0x10,Cs|0x20,D|0x20,B|0x10, A|0xE0/*x4*/, Cs|0x60/*x2*/,D|0x60/*x2*/, Cs|0x60/*x2*/,B|0x10,0,
    B|0x10,Cs|0x20,D|0x20,B|0x10, D|0xE0/*x4*/, E|0x60/*x2*/,Cs|0xA0/*x3*/, B|0x10,A|0x90/*x3*/, 0,A|0x50/*x2*/, E|0xE0/*x4*/, D|0xE0/*x4*/, 0|0xC0/*x4*/
};
uint8_t nTones3 = 70;
uint8_t beatDiv3 = 4; // speed: 1 note = 1/8 de sec

// Ghostbusters
Tone tones41[] = {
    B|0x50/*x2*/,0|0x40/*x2*/, B|0xD0/*x4*/, Ds|0x60/*x2*/,E|0x60/*x2*/, Fs|0x60/*x2*/,0|0x40/*x2*/, A|0xE0/*x4*/, 0|0xC0/*x4*/, E|0xE0/*x4*/, 0|0xC0/*x4*/,
    B|0x50/*x2*/,0|0x40/*x2*/, B|0xD0/*x4*/, Ds|0x60/*x2*/,E|0x60/*x2*/, Fs|0x60/*x2*/,0|0x40/*x2*/, A|0x60/*x2*/,0|0x40/*x2*/, A|0xE0/*x4*/, E|0xE0/*x4*/, 0|0xC0/*x4*/,
    B|0x50/*x2*/,0|0x40/*x2*/, B|0xD0/*x4*/, Ds|0x60/*x2*/,E|0x60/*x2*/, Fs|0x60/*x2*/,0|0x40/*x2*/, A|0xE0/*x4*/, 0|0xC0/*x4*/, E|0xE0/*x4*/, 0|0xC0/*x4*/,
    B|0x50/*x2*/,0|0x40/*x2*/, B|0xD0/*x4*/, Ds|0x60/*x2*/,E|0x60/*x2*/, Fs|0x60/*x2*/,0|0x40/*x2*/, A|0x60/*x2*/,0|0x40/*x2*/, A|0xE0/*x4*/, E|0xE0/*x4*/, 0|0xC0/*x4*/,
    
    B|0x50/*x2*/,0|0x40/*x2*/, B|0x20,0,B|0x20,0, Ds|0xF0/*x4*/, B|0x60/*x2*/,0|0x40/*x2*/, Cs|0xF0/*x4*/, A|0x60/*x2*/,0|0x40/*x2*/, E|0xE0/*x4*/, 0|0xC0/*x4*/,
    B|0x50/*x2*/,0|0x40/*x2*/, B|0xD0/*x4*/, B|0x20,0,B|0x20,0, B|0x20,0,B|0x20,0, A|0xE0/*x4*/, B|0x60/*x2*/,0|0x40/*x2*/, E|0xE0/*x4*/, 0|0xC0/*x4*/,
    B|0x50/*x2*/,0|0x40/*x2*/, B|0x20,0,B|0x20,0, Ds|0xF0/*x4*/, B|0x60/*x2*/,0|0x40/*x2*/, Cs|0xF0/*x4*/, A|0x60/*x2*/,0|0x40/*x2*/, E|0xE0/*x4*/, 0|0xC0/*x4*/,
    B|0x50/*x2*/,0|0x40/*x2*/, B|0xD0/*x4*/, B|0x20,0,B|0x20,0, B|0x20,0,B|0x20,0, A|0xE0/*x4*/, Cs|0x70/*x2*/,0|0x40/*x2*/, B|0xE0/*x4*/, 0|0x40/*x2*/,B|0x40/*x2*/,
    
    D|0xE0/*x4*/, D|0x60/*x2*/,B|0x50/*x2*/, B|0xC0/*x4*/, D|0xE0/*x4*/, D|0x60/*x2*/,B|0x50/*x2*/, B|0xC0/*x4*/, D|0xE0/*x4*/, D|0x60/*x2*/,B|0x50/*x2*/,
    A|0xC0/*x4*/, D|0xE0/*x4*/, D|0x60/*x2*/,B|0x50/*x2*/, A|0xC0/*x4*/, D|0x60/*x2*/,A|0x40/*x2*/, B|0x50/*x2*/,A|0x40/*x2*/, A|0x50/*x2*/,As|0x50/*x2*/, B|0x50/*x2*/,A|0x40/*x2*/,
    D|0xE0/*x4*/, D|0x60/*x2*/,B|0x50/*x2*/, Gs|0xC0/*x4*/, D|0xE0/*x4*/, D|0x60/*x2*/,B|0x50/*x2*/, Gs|0xC0/*x4*/, D|0xE0/*x4*/, D|0x60/*x2*/,B|0x50/*x2*/,
    E|0xC0/*x4*/, D|0xE0/*x4*/, D|0x60/*x2*/,B|0x50/*x2*/, E|0xC0/*x4*/, D|0x60/*x2*/,E|0x40/*x2*/, B|0x50/*x2*/,E|0x40/*x2*/, A|0x50/*x2*/,As|0x50/*x2*/, B|0x50/*x2*/,E|0x40/*x2*/,
    
    Fs|0xE0/*x4*/, Fs|0x60/*x2*/,D|0x60/*x2*/, B|0xC0/*x4*/, Fs|0xE0/*x4*/, Fs|0x60/*x2*/,D|0x60/*x2*/, B|0xC0/*x4*/, Fs|0xE0/*x4*/, Fs|0x60/*x2*/,D|0x60/*x2*/,
    A|0xC0/*x4*/, Fs|0xE0/*x2*/, Fs|0x60/*x2*/,D|0x60/*x2*/, A|0xC0/*x2*/, Fs|0x60/*x2*/,A|0x40/*x2*/, D|0x60/*x2*/,A|0x40/*x2*/, C|0x60/*x2*/,Cs|0x60/*x2*/, D|0x60/*x2*/,A|0x40/*x2*/,
    Fs|0xE0/*x4*/, Fs|0x60/*x2*/,D|0x60/*x2*/, Gs|0xC0/*x2*/, Fs|0xE0/*x4*/, Fs|0x60/*x2*/,D|0x60/*x2*/, Gs|0xC0/*x2*/, Fs|0xE0/*x4*/, Fs|0x60/*x2*/,D|0x60/*x2*/,
    E|0xC0/*x4*/, Fs|0xE0/*x4*/, Fs|0x60/*x2*/,D|0x60/*x2*/, E|0xC0/*x4*/, Fs|0x60/*x2*/,E|0x40/*x2*/, D|0x60/*x2*/,E|0x40/*x2*/, C|0x60/*x2*/,Cs|0x60/*x2*/, D|0x60/*x2*/,E|0x40/*x2*/
};
uint16_t nTones4 = 203;
uint8_t beatDiv4 = 2; // speed: 1 note = 1/16 de sec

// Tetris
Tone tetrisTones1[] = {
    E|0xE0/*x4*/, B|0x50/*x2*/,C|0x60/*x2*/, D|0x60/*x2*/,E|0x20,D|0x20, C|0x60/*x2*/,B|0x50/*x2*/, A|0x90/*x3*/,0, A|0x50/*x2*/,C|0x60/*x2*/, E|0xE0/*x4*/, D|0x60/*x2*/,C|0x60/*x2*/,
	B|0x90/*x3*/,0, B|0x50/*x2*/,C|0x60/*x2*/, D|0xE0/*x4*/, E|0xE0/*x4*/, C|0xE0/*x4*/, A|0x90/*x3*/,0, A|0xD0/*x4*/, 0|0xC0/*x4*/,
	/* à continuer ici */D|0x20,D|0x20,D|0x20,0, D|0x20,D|0x20,F|0x20,F|0x20, A|0x20,A|0x20,A|0x20,A|0x20, G|0x20,G|0x20,F|0x20,F|0x20, E|0x20,E|0x20,E|0x20,E|0x20, 0,0,C|0x20,C|0x20, E|0x20,E|0x20,E|0x20,E|0x20, D|0x20,D|0x20,C|0x20,C|0x20,
	B|0x10,B|0x10,B|0x10,0, B|0x10,B|0x10,C|0x20,C|0x20, D|0x20,D|0x20,D|0x20,D|0x20, E|0x20,E|0x20,E|0x20,E|0x20, C|0x20,C|0x20,C|0x20,C|0x20, A|0x10,A|0x10,A|0x10,0, A|0x10,A|0x10,A|0x10,A|0x10, 0,0,0,0,
	
	E|0x20,E|0x20,E|0x20,E|0x20, E|0x20,E|0x20,E|0x20,E|0x20, C|0x20,C|0x20,C|0x20,C|0x20, C|0x20,C|0x20,C|0x20,C|0x20, D|0x20,D|0x20,D|0x20,D|0x20, D|0x20,D|0x20,D|0x20,D|0x20, B|0x10,B|0x10,B|0x10,B|0x10, B|0x10,B|0x10,B|0x10,B|0x10,
	C|0x20,C|0x20,C|0x20,C|0x20, C|0x20,C|0x20,C|0x20,C|0x20, A|0x10,A|0x10,A|0x10,A|0x10, A|0x10,A|0x10,A|0x10,A|0x10, Gs|0x10,Gs|0x10,Gs|0x10,Gs|0x10, Gs|0x10,Gs|0x10,Gs|0x10,Gs|0x10, B|0x10,B|0x10,B|0x10,B|0x10, B|0x10,B|0x10,B|0x10,B|0x10,
	E|0x20,E|0x20,E|0x20,E|0x20, E|0x20,E|0x20,E|0x20,E|0x20, C|0x20,C|0x20,C|0x20,C|0x20, C|0x20,C|0x20,C|0x20,C|0x20, D|0x20,D|0x20,D|0x20,D|0x20, D|0x20,D|0x20,D|0x20,D|0x20, B|0x10,B|0x10,B|0x10,B|0x10, B|0x10,B|0x10,B|0x10,B|0x10, 
	C|0x20,C|0x20,C|0x20,C|0x20, E|0x20,E|0x20,E|0x20,E|0x20, A|0xE0/*x4*/, A|0xE0/*x4*/, Gs|0xE0/*x4*/, Gs|0xE0/*x4*/, 0|0xC0/*x4*/, 0|0xC0/*x4*/
};
uint16_t tetrisNTones = 200;
uint8_t tetrisBeatDiv = 4; // speed: 1 note = 1/8 de sec

// Phoenotopia: Home (Mr. Eldwin's Penguins)
Tone tones51[] = {
	G|0x20,G|0x20,G|0x20, F|0x20,F|0x20,0, E|0x20,C|0x20,E|0x20, D|0x20,D|0x20,D|0x20, C|0x20,C|0x20,C|0x20, B|0x10,B|0x10,B|0x10,
	G|0x10,G|0x10,A|0x10, As|0x10,As|0x10,As|0x10, G|0x20,G|0x20,G|0x20, F|0x20,F|0x20,F|0x20, Ds|0x20,Ds|0x20,Ds|0x20, D|0x20,0,0};
uint16_t nTones5 = 36;
uint8_t beatDiv5 = 12; // speed: 1 note = 3/8 de sec

// Phoenotopia: Dungeon Breaker
Tone tones61[] = { // en 6/8
    G|0x20,G|0x20,B|0x20,0,B|0x20,B|0x20, D|0x20,D|0x20,A|0x20,0,A|0x20,A|0x20, G|0x20,G|0x20,B|0x20,0,0,0, 0,0,A|0x20,0,0,0,
    G|0x20,G|0x20,B|0x20,0,B|0x20,B|0x20, D|0x20,D|0x20,A|0x20,0,A|0x20,A|0x20, G|0x20,G|0x20,B|0x20,0,0,0, 0,0,C|0x30,0,0,0
};
uint16_t nTones6 = 48;
uint8_t beatDiv6 = 6; // speed: 1 note = 3/16 de sec

// Zelda: Tal Tal Heights
Tone tones71[] = {//*
    G|0x10,G|0x10,G|0x10,G|0x10, 0,0,0,0, D|0x10,D|0x10,D|0x10,D|0x10, D|0x10,D|0x10,D|0x10,D|0x10,
    0,0,0,0, G|0x10,G|0x10,0,0, G|0x10,G|0x10,A|0x10,A|0x10, B|0x10,B|0x10,C|0x20,C|0x20,
    D|0x20,D|0x20,D|0x20,D|0x20, D|0x20,D|0x20,D|0x20,D|0x20, 0,0,0,0, E|0x20,E|0x20,F|0x20,F|0x20,
    E|0x20,E|0x20,E|0x20,E|0x20, E|0x20,E|0x20,D|0x20,D|0x20, D|0x20,D|0x20,D|0x20,D|0x20, C|0x20,C|0x20,C|0x20,C|0x20,
    D|0x20,D|0x20,D|0x20,D|0x20, D|0x20,D|0x20,G|0x10,G|0x10, G|0x20,G|0x20,G|0x20,G|0x20, G|0x20,G|0x20,G|0x20,G|0x20,
    G|0x20,G|0x20,G|0x20,G|0x20, G|0x20,G|0x20,G|0x20,G|0x20, G|0x20,G|0x20,G|0x20,G|0x20, G|0x20,G|0x20,G|0x20,G|0x20, 
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0//D|0x20,D|0x20,D|0x20,D|0x20, 
    //A|0x10,A|0x10,A|0x10,0, Gs|0x10,Gs|0x10,Gs|0x10,0, A|0x10,A|0x10,A|0x10,0, B|0x10,B|0x10,B|0x10,0
    /*/
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
    
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
    0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0//*/
};
uint16_t nTones7 = 128;
uint8_t beatDiv7 = 2; // speed: 1 note = 1/16 de sec

#endif // SONGS_DATA_H