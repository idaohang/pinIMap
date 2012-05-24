/* vui.c generated by valac 0.14.2, the Vala compiler
 * generated from vui.vala, do not modify */

/* Copyright 2012+ Denis Badanin <denis.badanin@gmail.com>
 * 
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <webkit/webkit.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gstdio.h>
#include <float.h>
#include <math.h>
#include <gexiv2/gexiv2.h>
#include <gdk-pixbuf/gdk-pixdata.h>


#define TYPE_VUI (vui_get_type ())
#define VUI(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VUI, Vui))
#define VUI_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VUI, VuiClass))
#define IS_VUI(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VUI))
#define IS_VUI_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VUI))
#define VUI_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VUI, VuiClass))

typedef struct _Vui Vui;
typedef struct _VuiClass VuiClass;
typedef struct _VuiPrivate VuiPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _gtk_tree_path_free0(var) ((var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL)))
#define __g_list_free__gtk_tree_path_free0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__gtk_tree_path_free0_ (var), NULL)))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_match_info_free0(var) ((var == NULL) ? NULL : (var = (g_match_info_free (var), NULL)))
#define __g_slist_free__g_free0_0(var) ((var == NULL) ? NULL : (var = (_g_slist_free__g_free0_ (var), NULL)))
#define _gexiv2_metadata_free0(var) ((var == NULL) ? NULL : (var = (gexiv2_metadata_free (var), NULL)))

#define TYPE_APP (app_get_type ())
#define APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APP, app))
#define APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APP, appClass))
#define IS_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APP))
#define IS_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APP))
#define APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APP, appClass))

typedef struct _app app;
typedef struct _appClass appClass;
typedef struct _appPrivate appPrivate;

struct _Vui {
	GObject parent_instance;
	VuiPrivate * priv;
	GtkWindow* win;
};

struct _VuiClass {
	GObjectClass parent_class;
};

struct _VuiPrivate {
	WebKitWebView* Wv;
	GtkTreeView* TVFiles;
	GtkTreeModel* TModel;
	GtkListStore* dataStore;
};

struct _app {
	GObject parent_instance;
	appPrivate * priv;
};

struct _appClass {
	GObjectClass parent_class;
};


static gpointer vui_parent_class = NULL;
static gpointer app_parent_class = NULL;

GType vui_get_type (void) G_GNUC_CONST;
#define VUI_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_VUI, VuiPrivate))
enum  {
	VUI_DUMMY_PROPERTY
};
#define VUI_COL_IMG 0
#define VUI_COL_FIL 1
#define VUI_COL_LAT 2
#define VUI_COL_LNG 3
#define VUI_COL_PTH 4
Vui* vui_new (void);
Vui* vui_construct (GType object_type);
static void _gtk_main_quit_gtk_object_destroy (GtkObject* _sender, gpointer self);
static void vui_webkit_connect (Vui* self, GtkBuilder* gbldr);
void vui_on_selection_changed (Vui* self);
static void _vui_on_selection_changed_gtk_tree_selection_changed (GtkTreeSelection* _sender, gpointer self);
gboolean vui_on_java_message (Vui* self, const gchar* message, gint line_number, const gchar* source_id);
static gboolean _vui_on_java_message_webkit_web_view_console_message (WebKitWebView* _sender, const gchar* message, gint line_number, const gchar* source_id, gpointer self);
static void _gtk_tree_path_free0_ (gpointer var);
static void _g_list_free__gtk_tree_path_free0_ (GList* self);
void vui_on_bopen_click (GtkWidget* source, Vui* self);
static void _g_free0_ (gpointer var);
static void _g_slist_free__g_free0_ (GSList* self);
void vui_on_BSave_clicked (GtkWidget* source, Vui* self);
void vui_on_BClear_clicked (GtkWidget* source, Vui* self);
static void vui_finalize (GObject* obj);
GType app_get_type (void) G_GNUC_CONST;
enum  {
	APP_DUMMY_PROPERTY
};
gint app_main (gchar** args, int args_length1);
app* app_new (void);
app* app_construct (GType object_type);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _gtk_main_quit_gtk_object_destroy (GtkObject* _sender, gpointer self) {
	gtk_main_quit ();
}


static void _vui_on_selection_changed_gtk_tree_selection_changed (GtkTreeSelection* _sender, gpointer self) {
	vui_on_selection_changed (self);
}


Vui* vui_construct (GType object_type) {
	Vui * self = NULL;
	GtkBuilder* _tmp0_;
	GtkBuilder* gbldr;
	GError * _inner_error_ = NULL;
	self = (Vui*) g_object_new (object_type, NULL);
	_tmp0_ = gtk_builder_new ();
	gbldr = _tmp0_;
	{
		GObject* _tmp1_ = NULL;
		GtkWindow* _tmp2_;
		GtkWindow* _tmp3_;
		GObject* _tmp4_ = NULL;
		GtkTreeView* _tmp5_;
		GtkTreeView* _tmp6_;
		GtkTreeModel* _tmp7_ = NULL;
		GtkTreeModel* _tmp8_;
		GtkTreeView* _tmp9_;
		GtkTreeSelection* _tmp10_ = NULL;
		GtkTreeSelection* _tmp11_;
		GtkTreeSelection* ts;
		GtkTreeSelection* _tmp12_;
		GtkTreeSelection* _tmp13_;
		GObject* _tmp14_ = NULL;
		GtkListStore* _tmp15_;
		gtk_builder_add_from_file (gbldr, "main.glade", &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch0_g_error;
		}
		_tmp1_ = gtk_builder_get_object (gbldr, "WMain");
		_tmp2_ = _g_object_ref0 (GTK_IS_WINDOW (_tmp1_) ? ((GtkWindow*) _tmp1_) : NULL);
		_g_object_unref0 (self->win);
		self->win = _tmp2_;
		_tmp3_ = self->win;
		g_signal_connect ((GtkObject*) _tmp3_, "destroy", (GCallback) _gtk_main_quit_gtk_object_destroy, NULL);
		gtk_builder_connect_signals (gbldr, self);
		vui_webkit_connect (self, gbldr);
		_tmp4_ = gtk_builder_get_object (gbldr, "TVFiles");
		_tmp5_ = _g_object_ref0 (GTK_IS_TREE_VIEW (_tmp4_) ? ((GtkTreeView*) _tmp4_) : NULL);
		_g_object_unref0 (self->priv->TVFiles);
		self->priv->TVFiles = _tmp5_;
		_tmp6_ = self->priv->TVFiles;
		_tmp7_ = gtk_tree_view_get_model (_tmp6_);
		_tmp8_ = _g_object_ref0 (_tmp7_);
		_g_object_unref0 (self->priv->TModel);
		self->priv->TModel = _tmp8_;
		_tmp9_ = self->priv->TVFiles;
		_tmp10_ = gtk_tree_view_get_selection (_tmp9_);
		_tmp11_ = _g_object_ref0 (_tmp10_);
		ts = _tmp11_;
		_tmp12_ = ts;
		gtk_tree_selection_set_mode (_tmp12_, GTK_SELECTION_MULTIPLE);
		_tmp13_ = ts;
		g_signal_connect_object (_tmp13_, "changed", (GCallback) _vui_on_selection_changed_gtk_tree_selection_changed, self, 0);
		_tmp14_ = gtk_builder_get_object (gbldr, "dataStore");
		_tmp15_ = _g_object_ref0 (GTK_IS_LIST_STORE (_tmp14_) ? ((GtkListStore*) _tmp14_) : NULL);
		_g_object_unref0 (self->priv->dataStore);
		self->priv->dataStore = _tmp15_;
		_g_object_unref0 (ts);
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		FILE* _tmp16_;
		GError* _tmp17_;
		const gchar* _tmp18_;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp16_ = stderr;
		_tmp17_ = e;
		_tmp18_ = _tmp17_->message;
		fprintf (_tmp16_, "Could not load UI: %s\n", _tmp18_);
		_g_error_free0 (e);
	}
	__finally0:
	if (_inner_error_ != NULL) {
		_g_object_unref0 (gbldr);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_g_object_unref0 (gbldr);
	return self;
}


Vui* vui_new (void) {
	return vui_construct (TYPE_VUI);
}


static gboolean _vui_on_java_message_webkit_web_view_console_message (WebKitWebView* _sender, const gchar* message, gint line_number, const gchar* source_id, gpointer self) {
	gboolean result;
	result = vui_on_java_message (self, message, line_number, source_id);
	return result;
}


static void vui_webkit_connect (Vui* self, GtkBuilder* gbldr) {
	GtkBuilder* _tmp0_;
	GObject* _tmp1_ = NULL;
	GtkScrolledWindow* _tmp2_;
	GtkScrolledWindow* sw;
	WebKitWebView* _tmp3_;
	WebKitWebView* _tmp4_;
	WebKitWebView* _tmp5_;
	WebKitWebView* _tmp6_;
	gchar* doc = NULL;
	WebKitWebView* _tmp11_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (gbldr != NULL);
	_tmp0_ = gbldr;
	_tmp1_ = gtk_builder_get_object (_tmp0_, "sw_browser");
	_tmp2_ = _g_object_ref0 (GTK_IS_SCROLLED_WINDOW (_tmp1_) ? ((GtkScrolledWindow*) _tmp1_) : NULL);
	sw = _tmp2_;
	_tmp3_ = (WebKitWebView*) webkit_web_view_new ();
	_tmp4_ = g_object_ref_sink (_tmp3_);
	_g_object_unref0 (self->priv->Wv);
	self->priv->Wv = _tmp4_;
	_tmp5_ = self->priv->Wv;
	g_signal_connect_object (_tmp5_, "console-message", (GCallback) _vui_on_java_message_webkit_web_view_console_message, self, 0);
	_tmp6_ = self->priv->Wv;
	gtk_container_add ((GtkContainer*) sw, (GtkWidget*) _tmp6_);
	{
		gchar* _tmp7_ = NULL;
		g_file_get_contents ("init.html", &_tmp7_, NULL, &_inner_error_);
		_g_free0 (doc);
		doc = _tmp7_;
		if (_inner_error_ != NULL) {
			goto __catch1_g_error;
		}
	}
	goto __finally1;
	__catch1_g_error:
	{
		GError* e = NULL;
		FILE* _tmp8_;
		GError* _tmp9_;
		const gchar* _tmp10_;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp8_ = stderr;
		_tmp9_ = e;
		_tmp10_ = _tmp9_->message;
		fprintf (_tmp8_, "Error: %s\n", _tmp10_);
		_g_error_free0 (e);
	}
	__finally1:
	if (_inner_error_ != NULL) {
		_g_free0 (doc);
		_g_object_unref0 (sw);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_tmp11_ = self->priv->Wv;
	webkit_web_view_load_html_string (_tmp11_, doc, "");
	_g_free0 (doc);
	_g_object_unref0 (sw);
}


static gpointer _gtk_tree_path_copy0 (gpointer self) {
	return self ? gtk_tree_path_copy (self) : NULL;
}


static gdouble double_parse (const gchar* str) {
	gdouble result = 0.0;
	const gchar* _tmp0_;
	gdouble _tmp1_ = 0.0;
	g_return_val_if_fail (str != NULL, 0.0);
	_tmp0_ = str;
	_tmp1_ = g_ascii_strtod (_tmp0_, NULL);
	result = _tmp1_;
	return result;
}


static void _gtk_tree_path_free0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL));
}


static void _g_list_free__gtk_tree_path_free0_ (GList* self) {
	g_list_foreach (self, (GFunc) _gtk_tree_path_free0_, NULL);
	g_list_free (self);
}


gboolean vui_on_java_message (Vui* self, const gchar* message, gint line_number, const gchar* source_id) {
	gboolean result = FALSE;
	FILE* _tmp0_;
	const gchar* _tmp1_;
	GRegex* _tmp2_;
	GRegex* rx;
	const gchar* _tmp3_;
	gchar** _tmp4_;
	gchar** _tmp5_ = NULL;
	gchar** tokens;
	gint tokens_length1;
	gint _tokens_size_;
	gchar** _tmp6_;
	gint _tmp6__length1;
	const gchar* _tmp7_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (message != NULL, FALSE);
	g_return_val_if_fail (source_id != NULL, FALSE);
	_tmp0_ = stderr;
	_tmp1_ = message;
	fprintf (_tmp0_, "Java Message us: %s\n", _tmp1_);
	_tmp2_ = g_regex_new ("\\s", 0, 0, &_inner_error_);
	rx = _tmp2_;
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return FALSE;
	}
	_tmp3_ = message;
	_tmp5_ = _tmp4_ = g_regex_split (rx, _tmp3_, 0);
	tokens = _tmp5_;
	tokens_length1 = _vala_array_length (_tmp4_);
	_tokens_size_ = tokens_length1;
	_tmp6_ = tokens;
	_tmp6__length1 = tokens_length1;
	_tmp7_ = _tmp6_[0];
	if (g_strcmp0 (_tmp7_, "coords") == 0) {
		GtkTreeView* _tmp8_;
		GtkTreeSelection* _tmp9_ = NULL;
		GtkTreeSelection* _tmp10_;
		GtkTreeSelection* ts;
		GtkTreeModel* tm = NULL;
		GtkTreeIter ti = {0};
		GtkTreeSelection* _tmp11_;
		GtkTreeModel* _tmp12_ = NULL;
		GList* _tmp13_ = NULL;
		GtkTreeModel* _tmp14_;
		GList* sl;
		_tmp8_ = self->priv->TVFiles;
		_tmp9_ = gtk_tree_view_get_selection (_tmp8_);
		_tmp10_ = _g_object_ref0 (_tmp9_);
		ts = _tmp10_;
		_tmp11_ = ts;
		_tmp13_ = gtk_tree_selection_get_selected_rows (_tmp11_, &_tmp12_);
		_g_object_unref0 (tm);
		_tmp14_ = _g_object_ref0 (_tmp12_);
		tm = _tmp14_;
		sl = _tmp13_;
		{
			gint i;
			i = 3;
			{
				gboolean _tmp15_;
				_tmp15_ = TRUE;
				while (TRUE) {
					gboolean _tmp16_;
					gint _tmp18_;
					gchar** _tmp19_;
					gint _tmp19__length1;
					GList* _tmp20_;
					_tmp16_ = _tmp15_;
					if (!_tmp16_) {
						gint _tmp17_;
						_tmp17_ = i;
						i = _tmp17_ + 1;
					}
					_tmp15_ = FALSE;
					_tmp18_ = i;
					_tmp19_ = tokens;
					_tmp19__length1 = tokens_length1;
					if (!(_tmp18_ < _tmp19__length1)) {
						break;
					}
					_tmp20_ = sl;
					{
						GList* tp_collection = NULL;
						GList* tp_it = NULL;
						tp_collection = _tmp20_;
						for (tp_it = tp_collection; tp_it != NULL; tp_it = tp_it->next) {
							GtkTreePath* _tmp21_;
							GtkTreePath* tp = NULL;
							_tmp21_ = _gtk_tree_path_copy0 ((GtkTreePath*) tp_it->data);
							tp = _tmp21_;
							{
								GtkTreeModel* _tmp22_;
								GtkTreePath* _tmp23_;
								GtkTreeIter _tmp24_ = {0};
								gchar* name = NULL;
								GtkTreeModel* _tmp25_;
								GtkTreeIter _tmp26_;
								const gchar* _tmp27_;
								gchar** _tmp28_;
								gint _tmp28__length1;
								gint _tmp29_;
								const gchar* _tmp30_;
								_tmp22_ = tm;
								_tmp23_ = tp;
								gtk_tree_model_get_iter (_tmp22_, &_tmp24_, _tmp23_);
								ti = _tmp24_;
								_tmp25_ = tm;
								_tmp26_ = ti;
								gtk_tree_model_get (_tmp25_, &_tmp26_, VUI_COL_FIL, &name, -1);
								_tmp27_ = name;
								_tmp28_ = tokens;
								_tmp28__length1 = tokens_length1;
								_tmp29_ = i;
								_tmp30_ = _tmp28_[_tmp29_];
								if (g_strcmp0 (_tmp27_, _tmp30_) == 0) {
									GtkListStore* _tmp31_;
									GtkTreeIter _tmp32_;
									gchar** _tmp33_;
									gint _tmp33__length1;
									const gchar* _tmp34_;
									gdouble _tmp35_ = 0.0;
									gchar** _tmp36_;
									gint _tmp36__length1;
									const gchar* _tmp37_;
									gdouble _tmp38_ = 0.0;
									_tmp31_ = self->priv->dataStore;
									_tmp32_ = ti;
									_tmp33_ = tokens;
									_tmp33__length1 = tokens_length1;
									_tmp34_ = _tmp33_[1];
									_tmp35_ = double_parse (_tmp34_);
									_tmp36_ = tokens;
									_tmp36__length1 = tokens_length1;
									_tmp37_ = _tmp36_[2];
									_tmp38_ = double_parse (_tmp37_);
									gtk_list_store_set (_tmp31_, &_tmp32_, VUI_COL_LAT, _tmp35_, VUI_COL_LNG, _tmp38_, -1);
									_g_free0 (name);
									_gtk_tree_path_free0 (tp);
									break;
								}
								_g_free0 (name);
								_gtk_tree_path_free0 (tp);
							}
						}
					}
				}
			}
		}
		__g_list_free__gtk_tree_path_free0_0 (sl);
		_g_object_unref0 (tm);
		_g_object_unref0 (ts);
	}
	result = TRUE;
	tokens = (_vala_array_free (tokens, tokens_length1, (GDestroyNotify) g_free), NULL);
	_g_regex_unref0 (rx);
	return result;
}


static gchar* double_to_string (gdouble self) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_;
	gint _tmp1__length1;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_;
	gchar* _tmp4_;
	_tmp0_ = g_new0 (gchar, G_ASCII_DTOSTR_BUF_SIZE);
	_tmp1_ = _tmp0_;
	_tmp1__length1 = G_ASCII_DTOSTR_BUF_SIZE;
	_tmp2_ = g_ascii_dtostr (_tmp1_, G_ASCII_DTOSTR_BUF_SIZE, self);
	_tmp3_ = g_strdup (_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp1_ = (g_free (_tmp1_), NULL);
	result = _tmp4_;
	return result;
}


void vui_on_selection_changed (Vui* self) {
	GtkTreeView* _tmp0_;
	GtkTreeSelection* _tmp1_ = NULL;
	GtkTreeSelection* _tmp2_;
	GtkTreeSelection* ts;
	GtkTreeModel* tm = NULL;
	GtkTreeIter ti = {0};
	GtkTreeSelection* _tmp3_;
	GtkTreeModel* _tmp4_ = NULL;
	GList* _tmp5_ = NULL;
	GtkTreeModel* _tmp6_;
	GList* sl;
	WebKitWebView* _tmp7_;
	GList* _tmp8_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->TVFiles;
	_tmp1_ = gtk_tree_view_get_selection (_tmp0_);
	_tmp2_ = _g_object_ref0 (_tmp1_);
	ts = _tmp2_;
	_tmp3_ = ts;
	_tmp5_ = gtk_tree_selection_get_selected_rows (_tmp3_, &_tmp4_);
	_g_object_unref0 (tm);
	_tmp6_ = _g_object_ref0 (_tmp4_);
	tm = _tmp6_;
	sl = _tmp5_;
	_tmp7_ = self->priv->Wv;
	webkit_web_view_execute_script (_tmp7_, "clear_markers()");
	_tmp8_ = sl;
	{
		GList* tp_collection = NULL;
		GList* tp_it = NULL;
		tp_collection = _tmp8_;
		for (tp_it = tp_collection; tp_it != NULL; tp_it = tp_it->next) {
			GtkTreePath* _tmp9_;
			GtkTreePath* tp = NULL;
			_tmp9_ = _gtk_tree_path_copy0 ((GtkTreePath*) tp_it->data);
			tp = _tmp9_;
			{
				GtkTreeModel* _tmp10_;
				GtkTreePath* _tmp11_;
				GtkTreeIter _tmp12_ = {0};
				gchar* name = NULL;
				gdouble lat = 0.0;
				gdouble lng = 0.0;
				GtkTreeModel* _tmp13_;
				GtkTreeIter _tmp14_;
				const gchar* _tmp15_;
				gdouble _tmp16_;
				gchar* _tmp17_ = NULL;
				gchar* _tmp18_;
				gdouble _tmp19_;
				gchar* _tmp20_ = NULL;
				gchar* _tmp21_;
				gchar* _tmp22_ = NULL;
				gchar* _tmp23_;
				gchar* outs;
				FILE* _tmp24_;
				const gchar* _tmp25_;
				gchar* _tmp26_;
				gchar* _tmp27_;
				WebKitWebView* _tmp28_;
				const gchar* _tmp29_;
				_tmp10_ = tm;
				_tmp11_ = tp;
				gtk_tree_model_get_iter (_tmp10_, &_tmp12_, _tmp11_);
				ti = _tmp12_;
				_tmp13_ = tm;
				_tmp14_ = ti;
				gtk_tree_model_get (_tmp13_, &_tmp14_, VUI_COL_FIL, &name, VUI_COL_LAT, &lat, VUI_COL_LNG, &lng, -1);
				_tmp15_ = name;
				_tmp16_ = lat;
				_tmp17_ = double_to_string (_tmp16_);
				_tmp18_ = _tmp17_;
				_tmp19_ = lng;
				_tmp20_ = double_to_string (_tmp19_);
				_tmp21_ = _tmp20_;
				_tmp22_ = g_strdup_printf ("file_list = '%s'; add_marker(%s, %s)", _tmp15_, _tmp18_, _tmp21_);
				_tmp23_ = _tmp22_;
				_g_free0 (_tmp21_);
				_g_free0 (_tmp18_);
				outs = _tmp23_;
				_tmp24_ = stderr;
				_tmp25_ = outs;
				_tmp26_ = g_strconcat (_tmp25_, "\n", NULL);
				_tmp27_ = _tmp26_;
				fprintf (_tmp24_, "%s", _tmp27_);
				_g_free0 (_tmp27_);
				_tmp28_ = self->priv->Wv;
				_tmp29_ = outs;
				webkit_web_view_execute_script (_tmp28_, _tmp29_);
				_g_free0 (outs);
				_g_free0 (name);
				_gtk_tree_path_free0 (tp);
			}
		}
	}
	__g_list_free__gtk_tree_path_free0_0 (sl);
	_g_object_unref0 (tm);
	_g_object_unref0 (ts);
}


static void _g_free0_ (gpointer var) {
	var = (g_free (var), NULL);
}


static void _g_slist_free__g_free0_ (GSList* self) {
	g_slist_foreach (self, (GFunc) _g_free0_, NULL);
	g_slist_free (self);
}


void vui_on_bopen_click (GtkWidget* source, Vui* self) {
	GtkWindow* _tmp0_;
	GtkFileChooserDialog* _tmp1_;
	GtkFileChooserDialog* _tmp2_;
	GtkFileChooserDialog* odlg;
	GtkFileFilter* _tmp3_;
	GtkFileFilter* _tmp4_;
	GtkFileFilter* fltr;
	GtkFileFilter* _tmp5_;
	GtkFileFilter* _tmp6_;
	GtkFileChooserDialog* _tmp7_;
	GtkFileFilter* _tmp8_;
	GtkFileChooserDialog* _tmp9_;
	GRegex* _tmp10_;
	GRegex* reg;
	GMatchInfo* match = NULL;
	GExiv2Metadata* _tmp11_;
	GExiv2Metadata* exiv2;
	GtkFileChooserDialog* _tmp12_;
	gint _tmp13_ = 0;
	GtkFileChooserDialog* _tmp72_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (source != NULL);
	_tmp0_ = self->win;
	_tmp1_ = (GtkFileChooserDialog*) gtk_file_chooser_dialog_new ("Select File", _tmp0_, GTK_FILE_CHOOSER_ACTION_OPEN, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL, GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT, NULL, NULL);
	_tmp2_ = g_object_ref_sink (_tmp1_);
	odlg = _tmp2_;
	_tmp3_ = gtk_file_filter_new ();
	_tmp4_ = g_object_ref_sink (_tmp3_);
	fltr = _tmp4_;
	_tmp5_ = fltr;
	gtk_file_filter_set_name (_tmp5_, "JPEG Image");
	_tmp6_ = fltr;
	gtk_file_filter_add_mime_type (_tmp6_, "image/jpeg");
	_tmp7_ = odlg;
	_tmp8_ = fltr;
	gtk_file_chooser_add_filter ((GtkFileChooser*) _tmp7_, _tmp8_);
	_tmp9_ = odlg;
	gtk_file_chooser_set_select_multiple ((GtkFileChooser*) _tmp9_, TRUE);
	_tmp10_ = g_regex_new ("[\\w_.-]*?(?=[\\?\\#])|[\\w_.-]*$", 0, 0, &_inner_error_);
	reg = _tmp10_;
	if (_inner_error_ != NULL) {
		_g_object_unref0 (fltr);
		_g_object_unref0 (odlg);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_tmp11_ = gexiv2_metadata_new ();
	exiv2 = _tmp11_;
	_tmp12_ = odlg;
	_tmp13_ = gtk_dialog_run ((GtkDialog*) _tmp12_);
	if (_tmp13_ == ((gint) GTK_RESPONSE_ACCEPT)) {
		GtkFileChooserDialog* _tmp14_;
		GSList* _tmp15_ = NULL;
		GSList* files_name;
		GtkTreeIter iter = {0};
		gchar* path = NULL;
		gchar* name = NULL;
		gdouble alt = 0.0;
		gdouble lat = 0.0;
		gdouble lng = 0.0;
		GExiv2Orientation exor = 0;
		GdkInterpType it;
		GdkPixbufRotation pbrt;
		_tmp14_ = odlg;
		_tmp15_ = gtk_file_chooser_get_filenames ((GtkFileChooser*) _tmp14_);
		files_name = _tmp15_;
		it = GDK_INTERP_NEAREST;
		pbrt = GDK_PIXBUF_ROTATE_NONE;
		{
			gint i;
			i = 0;
			{
				gboolean _tmp16_;
				_tmp16_ = TRUE;
				while (TRUE) {
					gboolean _tmp17_;
					gint _tmp19_;
					GSList* _tmp20_;
					guint _tmp21_ = 0U;
					GSList* _tmp22_;
					gint _tmp23_;
					gconstpointer _tmp24_ = NULL;
					gchar* _tmp25_;
					gchar* tm_path = NULL;
					gboolean found;
					GtkListStore* _tmp26_;
					GtkTreeIter _tmp27_ = {0};
					gboolean _tmp28_ = FALSE;
					gboolean _tmp37_;
					GRegex* _tmp39_;
					const gchar* _tmp40_;
					GMatchInfo* _tmp41_ = NULL;
					GMatchInfo* _tmp42_;
					gchar* _tmp43_ = NULL;
					GExiv2Metadata* _tmp44_;
					const gchar* _tmp45_;
					GExiv2Metadata* _tmp46_;
					gdouble _tmp47_ = 0.0;
					gdouble _tmp48_ = 0.0;
					gdouble _tmp49_ = 0.0;
					GExiv2Metadata* _tmp50_;
					GExiv2Orientation _tmp51_ = 0;
					GtkListStore* _tmp52_;
					GtkTreeIter _tmp53_ = {0};
					GExiv2Orientation _tmp54_;
					const gchar* _tmp55_;
					GdkPixbuf* _tmp56_;
					GdkPixbuf* _tmp57_;
					GdkPixbuf* _tmp58_;
					GdkInterpType _tmp59_;
					GdkPixbuf* _tmp60_ = NULL;
					GdkPixbuf* _tmp61_;
					GdkPixbufRotation _tmp62_;
					GdkPixbuf* _tmp63_ = NULL;
					GdkPixbuf* _tmp64_;
					GdkPixbuf* pb;
					GtkListStore* _tmp65_;
					GtkTreeIter _tmp66_;
					GdkPixbuf* _tmp67_;
					const gchar* _tmp68_;
					gdouble _tmp69_;
					gdouble _tmp70_;
					const gchar* _tmp71_;
					_tmp17_ = _tmp16_;
					if (!_tmp17_) {
						gint _tmp18_;
						_tmp18_ = i;
						i = _tmp18_ + 1;
					}
					_tmp16_ = FALSE;
					_tmp19_ = i;
					_tmp20_ = files_name;
					_tmp21_ = g_slist_length (_tmp20_);
					if (!(((guint) _tmp19_) < _tmp21_)) {
						break;
					}
					_tmp22_ = files_name;
					_tmp23_ = i;
					_tmp24_ = g_slist_nth_data (_tmp22_, (guint) _tmp23_);
					_tmp25_ = g_strdup ((const gchar*) _tmp24_);
					_g_free0 (path);
					path = _tmp25_;
					found = FALSE;
					_tmp26_ = self->priv->dataStore;
					_tmp28_ = gtk_tree_model_get_iter_first ((GtkTreeModel*) _tmp26_, &_tmp27_);
					iter = _tmp27_;
					if (_tmp28_) {
						{
							gboolean _tmp29_;
							_tmp29_ = TRUE;
							while (TRUE) {
								gboolean _tmp30_;
								GtkTreeModel* _tmp33_;
								GtkTreeIter _tmp34_;
								const gchar* _tmp35_;
								const gchar* _tmp36_;
								_tmp30_ = _tmp29_;
								if (!_tmp30_) {
									GtkTreeModel* _tmp31_;
									gboolean _tmp32_ = FALSE;
									_tmp31_ = self->priv->TModel;
									_tmp32_ = gtk_tree_model_iter_next (_tmp31_, &iter);
									if (!_tmp32_) {
										break;
									}
								}
								_tmp29_ = FALSE;
								_tmp33_ = self->priv->TModel;
								_tmp34_ = iter;
								gtk_tree_model_get (_tmp33_, &_tmp34_, VUI_COL_PTH, &tm_path, -1);
								_tmp35_ = path;
								_tmp36_ = tm_path;
								if (g_strcmp0 (_tmp35_, _tmp36_) == 0) {
									found = TRUE;
									break;
								}
							}
						}
					}
					_tmp37_ = found;
					if (_tmp37_) {
						FILE* _tmp38_;
						_tmp38_ = stderr;
						fprintf (_tmp38_, "Duplicate found!\n");
						_g_free0 (tm_path);
						continue;
					}
					_tmp39_ = reg;
					_tmp40_ = path;
					g_regex_match (_tmp39_, _tmp40_, 0, &_tmp41_);
					_g_match_info_free0 (match);
					match = _tmp41_;
					_tmp42_ = match;
					_tmp43_ = g_match_info_fetch (_tmp42_, 0);
					_g_free0 (name);
					name = _tmp43_;
					_tmp44_ = exiv2;
					_tmp45_ = path;
					gexiv2_metadata_open_path (_tmp44_, _tmp45_, &_inner_error_);
					if (_inner_error_ != NULL) {
						_g_free0 (tm_path);
						_g_free0 (name);
						_g_free0 (path);
						__g_slist_free__g_free0_0 (files_name);
						_gexiv2_metadata_free0 (exiv2);
						_g_match_info_free0 (match);
						_g_regex_unref0 (reg);
						_g_object_unref0 (fltr);
						_g_object_unref0 (odlg);
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return;
					}
					_tmp46_ = exiv2;
					gexiv2_metadata_get_gps_info (_tmp46_, &_tmp47_, &_tmp48_, &_tmp49_);
					lng = _tmp47_;
					lat = _tmp48_;
					alt = _tmp49_;
					_tmp50_ = exiv2;
					_tmp51_ = gexiv2_metadata_get_orientation (_tmp50_);
					exor = _tmp51_;
					_tmp52_ = self->priv->dataStore;
					gtk_list_store_append (_tmp52_, &_tmp53_);
					iter = _tmp53_;
					_tmp54_ = exor;
					switch (_tmp54_) {
						case GEXIV2_ORIENTATION_ROT_90:
						{
							pbrt = GDK_PIXBUF_ROTATE_CLOCKWISE;
							break;
						}
						case GEXIV2_ORIENTATION_ROT_180:
						{
							pbrt = GDK_PIXBUF_ROTATE_UPSIDEDOWN;
							break;
						}
						case GEXIV2_ORIENTATION_ROT_270:
						{
							pbrt = GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE;
							break;
						}
						default:
						break;
					}
					_tmp55_ = path;
					_tmp56_ = gdk_pixbuf_new_from_file (_tmp55_, &_inner_error_);
					_tmp57_ = _tmp56_;
					if (_inner_error_ != NULL) {
						_g_free0 (tm_path);
						_g_free0 (name);
						_g_free0 (path);
						__g_slist_free__g_free0_0 (files_name);
						_gexiv2_metadata_free0 (exiv2);
						_g_match_info_free0 (match);
						_g_regex_unref0 (reg);
						_g_object_unref0 (fltr);
						_g_object_unref0 (odlg);
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return;
					}
					_tmp58_ = _tmp57_;
					_tmp59_ = it;
					_tmp60_ = gdk_pixbuf_scale_simple (_tmp58_, 40, 40, _tmp59_);
					_tmp61_ = _tmp60_;
					_tmp62_ = pbrt;
					_tmp63_ = gdk_pixbuf_rotate_simple (_tmp61_, _tmp62_);
					_tmp64_ = _tmp63_;
					_g_object_unref0 (_tmp61_);
					_g_object_unref0 (_tmp58_);
					pb = _tmp64_;
					_tmp65_ = self->priv->dataStore;
					_tmp66_ = iter;
					_tmp67_ = pb;
					_tmp68_ = name;
					_tmp69_ = lat;
					_tmp70_ = lng;
					_tmp71_ = path;
					gtk_list_store_set (_tmp65_, &_tmp66_, VUI_COL_IMG, _tmp67_, VUI_COL_FIL, _tmp68_, VUI_COL_LAT, _tmp69_, VUI_COL_LNG, _tmp70_, VUI_COL_PTH, _tmp71_, -1);
					_g_object_unref0 (pb);
					_g_free0 (tm_path);
				}
			}
		}
		_g_free0 (name);
		_g_free0 (path);
		__g_slist_free__g_free0_0 (files_name);
	}
	_tmp72_ = odlg;
	gtk_object_destroy ((GtkObject*) _tmp72_);
	_gexiv2_metadata_free0 (exiv2);
	_g_match_info_free0 (match);
	_g_regex_unref0 (reg);
	_g_object_unref0 (fltr);
	_g_object_unref0 (odlg);
}


void vui_on_BSave_clicked (GtkWidget* source, Vui* self) {
	FILE* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (source != NULL);
	_tmp0_ = stderr;
	fprintf (_tmp0_, "SAVING\n");
}


void vui_on_BClear_clicked (GtkWidget* source, Vui* self) {
	GtkListStore* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (source != NULL);
	_tmp0_ = self->priv->dataStore;
	gtk_list_store_clear (_tmp0_);
}


static void vui_class_init (VuiClass * klass) {
	vui_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (VuiPrivate));
	G_OBJECT_CLASS (klass)->finalize = vui_finalize;
}


static void vui_instance_init (Vui * self) {
	self->priv = VUI_GET_PRIVATE (self);
}


static void vui_finalize (GObject* obj) {
	Vui * self;
	self = VUI (obj);
	_g_object_unref0 (self->win);
	_g_object_unref0 (self->priv->Wv);
	_g_object_unref0 (self->priv->TVFiles);
	_g_object_unref0 (self->priv->TModel);
	_g_object_unref0 (self->priv->dataStore);
	G_OBJECT_CLASS (vui_parent_class)->finalize (obj);
}


GType vui_get_type (void) {
	static volatile gsize vui_type_id__volatile = 0;
	if (g_once_init_enter (&vui_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (VuiClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vui_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Vui), 0, (GInstanceInitFunc) vui_instance_init, NULL };
		GType vui_type_id;
		vui_type_id = g_type_register_static (G_TYPE_OBJECT, "Vui", &g_define_type_info, 0);
		g_once_init_leave (&vui_type_id__volatile, vui_type_id);
	}
	return vui_type_id__volatile;
}


gint app_main (gchar** args, int args_length1) {
	gint result = 0;
	Vui* _tmp0_;
	Vui* h;
	GtkWindow* _tmp1_;
	gtk_init (&args_length1, &args);
	_tmp0_ = vui_new ();
	h = _tmp0_;
	_tmp1_ = h->win;
	gtk_widget_show_all ((GtkWidget*) _tmp1_);
	gtk_main ();
	result = 0;
	_g_object_unref0 (h);
	return result;
}


int main (int argc, char ** argv) {
	g_type_init ();
	return app_main (argv, argc);
}


app* app_construct (GType object_type) {
	app * self = NULL;
	self = (app*) g_object_new (object_type, NULL);
	return self;
}


app* app_new (void) {
	return app_construct (TYPE_APP);
}


static void app_class_init (appClass * klass) {
	app_parent_class = g_type_class_peek_parent (klass);
}


static void app_instance_init (app * self) {
}


GType app_get_type (void) {
	static volatile gsize app_type_id__volatile = 0;
	if (g_once_init_enter (&app_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (appClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) app_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (app), 0, (GInstanceInitFunc) app_instance_init, NULL };
		GType app_type_id;
		app_type_id = g_type_register_static (G_TYPE_OBJECT, "app", &g_define_type_info, 0);
		g_once_init_leave (&app_type_id__volatile, app_type_id);
	}
	return app_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



