#ifndef UKUIXRDBMANAGER_H
#define UKUIXRDBMANAGER_H
#include "ixrdb-manager.h"

#include <locale.h>

#include <glib.h>
#include <glib/gi18n.h>
#include <gdk/gdk.h>
#include <gdk/gdkx.h>
#include <gtk/gtk.h>

class ukuiXrdbManager:public IXrdbManager
{
public:
    ukuiXrdbManager();
    virtual ~ukuiXrdbManager();
    virtual int start();
    virtual int stop();


    void append_theme_colors (GtkStyle *style, GString  *string);
    void apply_settings (GtkStyle       *style);
    friend void theme_changed (GtkSettings    *settings, GParamSpec     *pspec);

private:
    GtkWidget* widget;

};

#endif // UKUIXRDBMANAGER_H
