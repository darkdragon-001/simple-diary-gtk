#pragma once

#include <gtk/gtk.h>

#include "entry.h"

G_BEGIN_DECLS

#define DIARY_TYPE_ENTRY_NAME_DIALOG (entry_name_dialog_get_type())

#define DIARY_TYPE_IS_ENTRY_NAME_DIALOG (object) \
    (G_OBJECT_TYPE (object) == DIARY_TYPE_ENTRY_NAME_DIALOG)

G_DECLARE_FINAL_TYPE (EntryNameDialog, entry_name_dialog, DIARY, ENTRY_NAME_DIALOG, GtkDialog)

GtkWidget *
entry_name_dialog_new (void);

gchar *
entry_name_dialog_get_name (EntryNameDialog * name_dialog);

G_END_DECLS
