#include "movement.h"

extern void set_is_playing_true(void);
extern void set_is_playing_false(void);
extern void play_stop_melody(const uint8_t *melody);
extern void play_melody(const uint8_t *melody);
extern void stop_melody(void);

extern bool is_melody_playing;

extern const uint8_t alarm_melody[11];
extern const uint8_t fail_melody[11];
extern const uint8_t success_melody[13];
extern const uint8_t indiana_jones_melody[69];
extern const uint8_t x_files_melody[41];
extern const uint8_t harry_potter_melody[63];
extern const uint8_t witcher_melody[47];
extern const uint8_t star_wars_melody[49];
extern const uint8_t champions_league_melody[41];
extern const uint8_t divinity_melody[75];
extern const uint8_t papa_melody[107];
