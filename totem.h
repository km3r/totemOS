/**
 *  totem.h
 *
 *
 *
 **/

// times in ns
#define T0H 350
#define T1H 900
#define T0L 900
#define T1L 350
#define RES 50000

typedef struct rgb_msg_part_t {
    unsigned char   red;
    unsigned char   green;
    unsigned char   blue;
} rgb_msg_part;

typedef struct rgb_msg_t {
    int             num;
    rgb_msg_part    parts[];
} rgb_msg;
