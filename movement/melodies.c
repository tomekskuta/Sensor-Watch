#include <stdlib.h>
#include "melodies.h"

bool is_melody_playing = false;

void set_is_playing_true(void) {
    is_melody_playing = true;
}

void set_is_playing_false(void) {
    is_melody_playing = false;
}

void play_melody(const uint8_t* melody) {
    set_is_playing_true();
    watch_buzzer_play_sequence((int8_t *)melody, set_is_playing_false);
}

void stop_melody(void) {
    set_is_playing_false();
    watch_buzzer_abort_sequence();
}

void stop_melody_if_playing(void) {
    if (is_melody_playing) {
        stop_melody();
    }
};

void play_stop_melody(const uint8_t* melody) {
    if (is_melody_playing) {
        stop_melody();
    } else {
        play_melody(melody);
    }
}

const uint8_t fail_melody[11] = {
    BUZZER_NOTE_C5, 7, // 100
    BUZZER_NOTE_B4, 7, // 100
    BUZZER_NOTE_A4SHARP_B4FLAT, 7, // 100
    BUZZER_NOTE_A4, 7, // 100
    BUZZER_NOTE_G4SHARP_A4FLAT, 7, // 100
    0
};

const uint8_t success_melody[13] = {
    BUZZER_NOTE_C5, 19, // 290
    BUZZER_NOTE_REST, 1, // 10
    BUZZER_NOTE_C5, 10, // 150
    BUZZER_NOTE_G5, 19, // 300
    BUZZER_NOTE_C5, 10, // 150
    BUZZER_NOTE_G5, 32, // 500
    0
};

const uint8_t indiana_jones_melody[69] = {
    BUZZER_NOTE_E4, 22, // 345
    BUZZER_NOTE_F4, 7, // 115

    BUZZER_NOTE_G4, 15, // 230
    BUZZER_NOTE_C5, 74, // 1150
    BUZZER_NOTE_D4, 22, // 345
    BUZZER_NOTE_E4, 7, // 115

    BUZZER_NOTE_F4, 88, // 1380
    BUZZER_NOTE_G4, 22, // 345
    BUZZER_NOTE_A4, 7, // 115

    BUZZER_NOTE_B4, 15, // 230
    BUZZER_NOTE_F5, 74, // 1150
    BUZZER_NOTE_A4, 22, // 345
    BUZZER_NOTE_B4, 7, // 115

    BUZZER_NOTE_C5, 29, // 460
    BUZZER_NOTE_D5, 29, // 460
    BUZZER_NOTE_E5, 29, // 460
    BUZZER_NOTE_E4, 22, // 345
    BUZZER_NOTE_F4, 7, // 115

    BUZZER_NOTE_G4, 15, // 230
    BUZZER_NOTE_C5, 74, // 1150
    BUZZER_NOTE_D5, 22, // 345
    BUZZER_NOTE_E5, 7, // 115

    BUZZER_NOTE_F5, 88, // 1380
    BUZZER_NOTE_G4, 15, // 230
    BUZZER_NOTE_REST, 7, // 115
    BUZZER_NOTE_G4, 7, // 115

    BUZZER_NOTE_E5, 29, // 460
    BUZZER_NOTE_D5, 22, // 345
    BUZZER_NOTE_F4, 7, // 115
    BUZZER_NOTE_E5, 29, // 460
    BUZZER_NOTE_D5, 22, // 345
    BUZZER_NOTE_A4, 7, // 115

    BUZZER_NOTE_E5, 29, // 460
    BUZZER_NOTE_D5, 22, // 345
    0
};

const uint8_t x_files_melody[41] = {
    BUZZER_NOTE_A4, 32, // 500
    BUZZER_NOTE_E5, 32, // 500
    BUZZER_NOTE_D5, 32, // 500
    BUZZER_NOTE_E5, 32, // 500
    BUZZER_NOTE_G5, 32, // 500
    BUZZER_NOTE_E5, 128, // 2000

    BUZZER_NOTE_REST, 96, // 1500

    BUZZER_NOTE_A4, 32, // 500
    BUZZER_NOTE_E5, 32, // 500
    BUZZER_NOTE_D5, 32, // 500
    BUZZER_NOTE_E5, 32, // 500
    BUZZER_NOTE_A5, 32, // 500
    BUZZER_NOTE_E5, 128, // 2000

    BUZZER_NOTE_REST, 96, // 1500

    BUZZER_NOTE_C6, 32, // 500
    BUZZER_NOTE_B5, 32, // 500
    BUZZER_NOTE_A5, 32, // 500
    BUZZER_NOTE_G5, 32, // 500
    BUZZER_NOTE_B5, 32, // 500
    BUZZER_NOTE_E5, 128, // 2000
    0
};

const uint8_t harry_potter_melody[63] = {
    BUZZER_NOTE_C5, 19, // 300

    BUZZER_NOTE_F5, 29, // 450
    BUZZER_NOTE_G5SHARP_A5FLAT, 9, // 150
    BUZZER_NOTE_G5, 19, // 300

    BUZZER_NOTE_F5, 38, // 600
    BUZZER_NOTE_C6, 19, // 300

    BUZZER_NOTE_A5SHARP_B5FLAT, 57, // 900

    BUZZER_NOTE_G5, 57, // 900

    BUZZER_NOTE_F5, 29, // 450
    BUZZER_NOTE_G5SHARP_A5FLAT, 9, // 150
    BUZZER_NOTE_G5, 19, // 300

    BUZZER_NOTE_E5, 38, // 600
    BUZZER_NOTE_F5SHARP_G5FLAT, 19, // 300

    BUZZER_NOTE_C5, 91, // 1425
    BUZZER_NOTE_REST, 5, // 75


    BUZZER_NOTE_C5, 19, // 300

    BUZZER_NOTE_F5, 29, // 450
    BUZZER_NOTE_G5SHARP_A5FLAT, 9, // 150
    BUZZER_NOTE_G5, 19, // 300

    BUZZER_NOTE_F5, 38, // 600
    BUZZER_NOTE_C6, 19, // 300

    BUZZER_NOTE_D6SHARP_E6FLAT, 38, // 600
    BUZZER_NOTE_D6, 19, // 300

    BUZZER_NOTE_C6SHARP_D6FLAT, 38, // 600
    BUZZER_NOTE_A5, 19, // 300

    BUZZER_NOTE_C6SHARP_D6FLAT, 29, // 450
    BUZZER_NOTE_C6, 9, // 150
    BUZZER_NOTE_B5, 19, // 300

    BUZZER_NOTE_C5, 38, // 600
    BUZZER_NOTE_G5SHARP_A5FLAT, 19, // 300

    BUZZER_NOTE_F5, 77, // 1200
    0
};

const uint8_t witcher_melody[47] = {
    BUZZER_NOTE_A4SHARP_B4FLAT, 16, // 250
    BUZZER_NOTE_C5SHARP_D5FLAT, 16, // 250
    BUZZER_NOTE_F5, 32, // 500
    BUZZER_NOTE_D5SHARP_E5FLAT, 16, // 250
    BUZZER_NOTE_C5SHARP_D5FLAT, 16, // 250

    BUZZER_NOTE_D5SHARP_E5FLAT, 16, // 250
    BUZZER_NOTE_F5, 24, // 375
    BUZZER_NOTE_REST, 8, // 125
    BUZZER_NOTE_F5, 16, // 250
    BUZZER_NOTE_D5SHARP_E5FLAT, 16, // 250
    BUZZER_NOTE_C5SHARP_D5FLAT, 16, // 250
    BUZZER_NOTE_C5, 16, // 250
    BUZZER_NOTE_C5SHARP_D5FLAT, 32, // 500

    BUZZER_NOTE_A4SHARP_B4FLAT, 32, // 500
    BUZZER_NOTE_F5, 16, // 250
    BUZZER_NOTE_D5SHARP_E5FLAT, 16, // 250
    BUZZER_NOTE_C5SHARP_D5FLAT, 16, // 250
    BUZZER_NOTE_C5, 16, // 250
    BUZZER_NOTE_C5SHARP_D5FLAT, 32, // 500

    BUZZER_NOTE_A4SHARP_B4FLAT, 32, // 500
    BUZZER_NOTE_G4SHARP_A4FLAT, 16, // 250
    BUZZER_NOTE_A4SHARP_B4FLAT, 16, // 250
    BUZZER_NOTE_C5SHARP_D5FLAT, 48, // 750
    0
};

extern const uint8_t papa_melody[] = {
    BUZZER_NOTE_C4, 48,
    BUZZER_NOTE_A4, 46,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 60,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_B4, 16,
    BUZZER_NOTE_C5, 16,
    BUZZER_NOTE_B4, 16,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_G4, 46,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G4, 96,

    BUZZER_NOTE_F4, 32,
    BUZZER_NOTE_E4, 16,
    BUZZER_NOTE_F4, 46,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_F4, 60,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_F4, 16,
    BUZZER_NOTE_G4, 16,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_G4, 16,
    BUZZER_NOTE_F4, 16,
    BUZZER_NOTE_E4, 46,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E4, 96,

    BUZZER_NOTE_C4, 30,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C4, 16,
    BUZZER_NOTE_A4, 46,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 60,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_B4, 16,
    BUZZER_NOTE_C5, 16,
    BUZZER_NOTE_B4, 16,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_G4, 46,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G4, 96,

    BUZZER_NOTE_F4, 32,
    BUZZER_NOTE_E4, 16,
    BUZZER_NOTE_F4, 46,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_F4, 62,
    BUZZER_NOTE_D4, 16,
    BUZZER_NOTE_E4, 16,
    BUZZER_NOTE_F4, 16,
    BUZZER_NOTE_E4, 16,
    BUZZER_NOTE_D4, 16,
    BUZZER_NOTE_C4, 96,
    0
};