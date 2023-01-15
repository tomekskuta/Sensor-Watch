#include <stdlib.h>
#include "melodies.h"

void play_fail(void) {
  watch_buzzer_play_note(BUZZER_NOTE_C5, 100);
  watch_buzzer_play_note(BUZZER_NOTE_B4, 100);
  watch_buzzer_play_note(BUZZER_NOTE_A4SHARP_B4FLAT, 100);
  watch_buzzer_play_note(BUZZER_NOTE_A4, 100);
  watch_buzzer_play_note(BUZZER_NOTE_G4SHARP_A4FLAT, 100);
}

void play_success(void) {
  watch_buzzer_play_note(BUZZER_NOTE_C5, 290);
  watch_buzzer_play_note(BUZZER_NOTE_REST, 10);
  watch_buzzer_play_note(BUZZER_NOTE_C5, 150);
  watch_buzzer_play_note(BUZZER_NOTE_G5, 300);
  watch_buzzer_play_note(BUZZER_NOTE_C5, 150);
  watch_buzzer_play_note(BUZZER_NOTE_G5, 500);
}

void play_indiana_jones(void) {
  // the tempo is about 130bpm. Quarter note has length of 460ms.
  uint16_t QUARTER_NOTE_LENGTH = 460;

  watch_buzzer_play_note(BUZZER_NOTE_E4, QUARTER_NOTE_LENGTH * 3/4);
  watch_buzzer_play_note(BUZZER_NOTE_F4, QUARTER_NOTE_LENGTH / 4);

  watch_buzzer_play_note(BUZZER_NOTE_G4, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5, QUARTER_NOTE_LENGTH * 2 + QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_D4, QUARTER_NOTE_LENGTH * 3/4);
  watch_buzzer_play_note(BUZZER_NOTE_E4, QUARTER_NOTE_LENGTH / 4);

  watch_buzzer_play_note(BUZZER_NOTE_F4, QUARTER_NOTE_LENGTH * 3);
  watch_buzzer_play_note(BUZZER_NOTE_G4, QUARTER_NOTE_LENGTH * 3/4);
  watch_buzzer_play_note(BUZZER_NOTE_A4, QUARTER_NOTE_LENGTH / 4);
  
  watch_buzzer_play_note(BUZZER_NOTE_B4, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_F5, QUARTER_NOTE_LENGTH * 2 + QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_A4, QUARTER_NOTE_LENGTH * 3/4);
  watch_buzzer_play_note(BUZZER_NOTE_B4, QUARTER_NOTE_LENGTH / 4);

  watch_buzzer_play_note(BUZZER_NOTE_C5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_D5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_E4, QUARTER_NOTE_LENGTH * 3/4);
  watch_buzzer_play_note(BUZZER_NOTE_F4, QUARTER_NOTE_LENGTH / 4);

  watch_buzzer_play_note(BUZZER_NOTE_G4, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5, QUARTER_NOTE_LENGTH * 2 + QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_D5, QUARTER_NOTE_LENGTH * 3/4);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH / 4);

  watch_buzzer_play_note(BUZZER_NOTE_F5, QUARTER_NOTE_LENGTH * 3);
  watch_buzzer_play_note(BUZZER_NOTE_G4, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_REST, QUARTER_NOTE_LENGTH / 4);
  watch_buzzer_play_note(BUZZER_NOTE_G4, QUARTER_NOTE_LENGTH / 4);

  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_D5, QUARTER_NOTE_LENGTH * 3/4);
  watch_buzzer_play_note(BUZZER_NOTE_F4, QUARTER_NOTE_LENGTH / 4);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_D5, QUARTER_NOTE_LENGTH * 3/4);
  watch_buzzer_play_note(BUZZER_NOTE_A4, QUARTER_NOTE_LENGTH / 4);

  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_D5, QUARTER_NOTE_LENGTH);
};

void play_x_files(void) {
  // the tempo is about 120bpm. Quarter note has length of 500ms.
  uint16_t QUARTER_NOTE_LENGTH = 500;

  watch_buzzer_play_note(BUZZER_NOTE_A4, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_D5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_G5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH * 4);

  watch_buzzer_play_note(BUZZER_NOTE_REST, QUARTER_NOTE_LENGTH * 3);

  watch_buzzer_play_note(BUZZER_NOTE_A4, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_D5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_A5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH * 4);

  watch_buzzer_play_note(BUZZER_NOTE_REST, QUARTER_NOTE_LENGTH * 3);

  watch_buzzer_play_note(BUZZER_NOTE_C6, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_B5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_A5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_G5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_B5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_E5, QUARTER_NOTE_LENGTH * 4);
}

void play_harry_potter(void) {
  // the tempo is 200bpm. Quarter note has length of 300ms.
  uint16_t QUARTER_NOTE_LENGTH = 300;

  watch_buzzer_play_note(BUZZER_NOTE_C5, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_F5, (QUARTER_NOTE_LENGTH*3)/2);
  watch_buzzer_play_note(BUZZER_NOTE_G5SHARP_A5FLAT, QUARTER_NOTE_LENGTH/2);
  watch_buzzer_play_note(BUZZER_NOTE_G5, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_F5, 2*QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_C6, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_A5SHARP_B5FLAT, 3*QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_G5, 3*QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_F5, (QUARTER_NOTE_LENGTH*3)/2);
  watch_buzzer_play_note(BUZZER_NOTE_G5SHARP_A5FLAT, QUARTER_NOTE_LENGTH/2);
  watch_buzzer_play_note(BUZZER_NOTE_G5, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_E5, 2*QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_F5SHARP_G5FLAT, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_C5, 5*QUARTER_NOTE_LENGTH - QUARTER_NOTE_LENGTH / 4);
  watch_buzzer_play_note(BUZZER_NOTE_REST, QUARTER_NOTE_LENGTH / 4);


  watch_buzzer_play_note(BUZZER_NOTE_C5, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_F5, (QUARTER_NOTE_LENGTH*3)/2);
  watch_buzzer_play_note(BUZZER_NOTE_G5SHARP_A5FLAT, QUARTER_NOTE_LENGTH/2);
  watch_buzzer_play_note(BUZZER_NOTE_G5, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_F5, 2*QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_C6, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_D6SHARP_E6FLAT, 2*QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_D6, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_C6SHARP_D6FLAT, 2*QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_A5, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_C6SHARP_D6FLAT, (QUARTER_NOTE_LENGTH*3)/2);
  watch_buzzer_play_note(BUZZER_NOTE_C6, QUARTER_NOTE_LENGTH/2);
  watch_buzzer_play_note(BUZZER_NOTE_B5, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_C5, 2*QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_G5SHARP_A5FLAT, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_F5, 4*QUARTER_NOTE_LENGTH);
};

void play_witcher(void) {
  // the tempo is 120bpm. Quarter note has length of 500ms.
  uint16_t QUARTER_NOTE_LENGTH = 500;

  watch_buzzer_play_note(BUZZER_NOTE_A4SHARP_B4FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5SHARP_D5FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_F5, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_D5SHARP_E5FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5SHARP_D5FLAT, QUARTER_NOTE_LENGTH / 2);

  watch_buzzer_play_note(BUZZER_NOTE_D5SHARP_E5FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_F5, QUARTER_NOTE_LENGTH * 3/4);
  watch_buzzer_play_note(BUZZER_NOTE_REST, QUARTER_NOTE_LENGTH / 4);
  watch_buzzer_play_note(BUZZER_NOTE_F5, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_D5SHARP_E5FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5SHARP_D5FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5SHARP_D5FLAT, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_A4SHARP_B4FLAT, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_F5, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_D5SHARP_E5FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5SHARP_D5FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5SHARP_D5FLAT, QUARTER_NOTE_LENGTH);

  watch_buzzer_play_note(BUZZER_NOTE_A4SHARP_B4FLAT, QUARTER_NOTE_LENGTH);
  watch_buzzer_play_note(BUZZER_NOTE_G4SHARP_A4FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_A4SHARP_B4FLAT, QUARTER_NOTE_LENGTH / 2);
  watch_buzzer_play_note(BUZZER_NOTE_C5SHARP_D5FLAT, QUARTER_NOTE_LENGTH * 1.5);
}
