#ifndef _WX_COMMON_H_
#define _WX_COMMON_H_
#ifdef __cplusplus
#define mkc "C"
#else
#define mkc
#endif
extern mkc int show_machine_info;
extern mkc int show_status;
extern mkc int show_machine_on_start;
extern mkc int confirm_on_stop_emulation;
extern mkc int confirm_on_reset_machine;
extern mkc int show_speed_history;
extern mkc int show_disc_activity;
extern mkc int show_mount_paths;
extern mkc int wx_window_x;
extern mkc int wx_window_y;

typedef enum { EMULATION_STOPPED, EMULATION_PAUSED, EMULATION_RUNNING } emulation_state_t;
extern mkc emulation_state_t emulation_state;

#define IS_PAUSED (emulation_state == EMULATION_PAUSED)

typedef enum { DRIVE_TYPE_HDD, DRIVE_TYPE_FDD, DRIVE_TYPE_CDROM } drive_type_t;

typedef struct drive_info_t {
        drive_type_t type;
        char fn[256];
        int enabled;
        int drive;
        char drive_letter;
        int readflash;
} drive_info_t;

#undef mkc

#endif /* _WX_COMMON_H_ */
