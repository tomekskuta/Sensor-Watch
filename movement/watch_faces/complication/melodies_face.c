/*
 * MIT License
 *
 * Copyright (c) 2022 Shogo Okamoto
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <stdlib.h>
#include <string.h>
#include "melodies_face.h"
#include "melodies.h"

struct Melody {
    char name[6];
    const uint8_t *melody;
};

struct Melody melodies[] = {
    { " fail ", fail_melody },
    { "succes", success_melody },
    { " jones", indiana_jones_melody },
    { "xfiles", x_files_melody },
    { " hari ", harry_potter_melody },
    { "star w", star_wars_melody },
    { "champ ", champions_league_melody },
    { "divini", divinity_melody },
    { "geralt", witcher_melody },
    { "alarm ", alarm_melody },
    { " papa ", papa_melody },
};

const int num_melodies_count = (sizeof(melodies) / sizeof(melodies[0]));

void melodies_face_setup(movement_settings_t *settings, uint8_t watch_face_index, void ** context_ptr) {
    (void) settings;
    (void) watch_face_index;
    if (*context_ptr == NULL) {
        *context_ptr = malloc(sizeof(melodies_state_t));
        memset(*context_ptr, 0, sizeof(melodies_state_t));
    }
}

void melodies_face_activate(movement_settings_t *settings, void *context) {
    (void) settings;
    (void) context;
}

bool melodies_face_loop(movement_event_t event, movement_settings_t *settings, void *context) {
    melodies_state_t *state = (melodies_state_t *)context;

    switch (event.event_type) {
        case EVENT_ACTIVATE:
            display(state);
            break;
        case EVENT_MODE_BUTTON_UP:
            movement_move_to_next_face();
            break;
        case EVENT_MODE_LONG_PRESS:
            movement_move_to_face(0);
            break;
        case EVENT_LIGHT_LONG_PRESS:
            movement_illuminate_led();
            break;
        case EVENT_LIGHT_BUTTON_UP:
            if (is_melody_playing) {
                stop_melody();
                break;
            }
            state->melody_idx = (state->melody_idx + 1) % num_melodies_count;
            display(state);
            break;
        case EVENT_ALARM_BUTTON_DOWN:
            play_stop_melody(melodies[state->melody_idx].melody);
            break;
        default:
            break;
    }

    return true;
}

void melodies_face_resign(movement_settings_t *settings, void *context) {
    (void) settings;
    (void) context;

    melodies_state_t *state = (melodies_state_t *)context;
    state->melody_idx = 0;
}

void display(melodies_state_t *state) {
    char buf[14];
    sprintf(buf, "ME  %s%2d", melodies[state->melody_idx].name);

    watch_display_string(buf, 0);
}
