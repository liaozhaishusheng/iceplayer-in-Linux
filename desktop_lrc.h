typedef struct iceplayer_desktop_lrc {
    GtkWidget *window;
    GtkWidget *eventbox;
    gboolean show_lock_background;
} iceplayer_desktop_lrc;

extern iceplayer_desktop_lrc desktop_lrc;

void desktop_lrc_init() ;
gboolean desktop_lrc_show() ;


