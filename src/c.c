#include <gtk/gtk.h>
//stuff
static void copy_clipboard (GtkWidget *widget,
             gpointer   data)
{
  g_print ("Hello World\n");
}



int main(int argc, char *argv[])
{
    GtkBuilder      *builder; 
    GtkWidget       *window;
    GtkWidget       *calendar;
       GtkWidget    *button1;
GtkWidget *web;
       GtkWidget *grid1;
       GtkWidget *notebook;
        GtkWidget *draw;
        GtkWidget *label1;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "builder.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
    gtk_builder_connect_signals(builder, NULL);
    
    
    grid1 = GTK_WIDGET(gtk_builder_get_object(builder, "grid1"));
    gtk_builder_connect_signals(builder, NULL);
    
    calendar = GTK_WIDGET(gtk_builder_get_object(builder, "calendar"));
    gtk_builder_connect_signals(builder, NULL);
    
 
   notebook = GTK_WIDGET(gtk_builder_get_object(builder, "notebook"));
    gtk_builder_connect_signals(builder, NULL);
    
        
 
   button1 = GTK_WIDGET(gtk_builder_get_object(builder, "button1"));
 gtk_builder_connect_signals(builder, NULL);


    
        label1 = GTK_WIDGET(gtk_builder_get_object(builder, "label1"));
    gtk_builder_connect_signals(builder, NULL);
    

        draw = GTK_WIDGET(gtk_builder_get_object(builder, "draw"));
    gtk_builder_connect_signals(builder, NULL);

    

        web = GTK_WIDGET(gtk_builder_get_object(builder, "web"));
    gtk_builder_connect_signals(builder, NULL);

    g_object_unref(builder);                     
    
    /* Connect the main window to the destroy and delete-event signals. */


    gtk_widget_show(window);                
    gtk_main();

    return 0;
}

// called when window is closed
static void
destroy (GtkWidget *window,
gpointer data)
{
gtk_main_quit ();
}



 
