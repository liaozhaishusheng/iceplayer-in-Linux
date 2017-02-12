#include <gst/gst.h>
typedef struct iceplayer_core{
    GstElement *pipeline;
    GstElement *vol;
    gint state;
    GstFormat fmt;
    gint64 pos;
    gint64 length;
    GstElement * equalizer;
}iceplayer_core;
extern iceplayer_core core;
gboolean bus_call(GstBus *bus, GstMessage *msg, gpointer user_data);
void play_uri();
gboolean prev ();
gboolean play ();
gboolean next ();
gboolean stop ();
gboolean add ();
gboolean set_volume(gdouble value);
