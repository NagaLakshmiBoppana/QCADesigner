//////////////////////////////////////////////////////////
// QCADesigner                                          //
// Copyright 2002 Konrad Walus                          //
// All Rights Reserved                                  //
// Author: Konrad Walus                                 //
// Email: walus@atips.ca                                //
// **** Please use complete names in variables and      //
// **** functions. This will reduce ramp up time for new//
// **** people trying to contribute to the project.     //
//////////////////////////////////////////////////////////

gboolean motion_notify_event(GtkWidget *widget, GdkEventMotion *event, gpointer user_data);
gboolean button_press_event(GtkWidget *widget, GdkEventButton *event, gpointer user_data);
gboolean key_press_event(GtkWidget *widget, GdkEventKey *event, gpointer user_data);
gboolean main_window_configure_event(GtkWidget *widget, GdkEventConfigure *event, gpointer user_data);
gboolean button_release_event(GtkWidget *widget, GdkEventButton *event, gpointer user_data);
gboolean expose_event(GtkWidget *widget, GdkEvent *event, gpointer user_data);
gboolean configure_event(GtkWidget *widget, GdkEvent *event, gpointer user_data);
gboolean button_press_event(GtkWidget *widget, GdkEventButton *event, gpointer user_data);
void on_preview_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_grid_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_snap_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_cell_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_window_properties_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_layer_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_snap_to_grid_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_show_grid_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_create_input_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_input_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_connect_output_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_clock_select_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_clock_increment_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_fixed_polarization_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_measure_distance_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_measurement_preferences1_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_draw_dimensions_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_dimension_properties1_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_draw_text_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_text_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_draw_arrow_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_arrow_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_draw_line_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_line_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_draw_rectangle_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_rectangle_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_save_output_to_file_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_logging_properties_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_simulation_type_setup_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_simulation_engine_setup_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_random_fault_setup_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_zoom_in_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_zoom_out_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_zoom_die_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_zoom_extents_menu_item_activate (GtkMenuItem *menuitem, gpointer user_data);
void on_insert_type_1_cell_button_clicked (GtkButton *button, gpointer user_data);
void on_insert_type_2_cell_button_clicked (GtkButton *button, gpointer user_data);
void on_insert_cell_array_button_clicked (GtkButton *button, gpointer user_data);
void on_copy_cell_button_clicked (GtkButton *button, gpointer user_data);
void on_move_cell_button_clicked (GtkButton *button, gpointer user_data);
void on_rotate_cell_button_clicked (GtkButton *button, gpointer user_data);
void on_mirror_button_clicked (GtkButton *button, gpointer user_data);
void on_delete_cells_button_clicked (GtkButton *button, gpointer user_data);
void on_command_entry_changed (GtkEditable *editable, gpointer user_data);
void on_new_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_save_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_print_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_project_properties_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_close_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_quit_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_undo_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_redo_meu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_copy_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_cut_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_paste_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_preferences_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_start_simulation_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_pause_simulation_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_stop_simulation_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_pause_simulation_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_reset_simulation_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_calculate_ground_state_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_animate_test_simulation_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_contents_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_search_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void on_about_menu_item_activate(GtkMenuItem *menuitem, gpointer user_data);
void file_operations (GtkWidget *widget, gpointer user_data);
