/* This file is generated by glib-genmarshal, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */
#ifndef __NIMF_CCLOSURE_MARSHAL_MARSHAL_H__
#define __NIMF_CCLOSURE_MARSHAL_MARSHAL_H__

#include <glib-object.h>

G_BEGIN_DECLS

/* VOID:VOID (nimf-marshalers.list:1) */
#define nimf_cclosure_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID

/* VOID:STRING (nimf-marshalers.list:2) */
#define nimf_cclosure_marshal_VOID__STRING	g_cclosure_marshal_VOID__STRING

/* VOID:STRING,STRING (nimf-marshalers.list:3) */
extern
void nimf_cclosure_marshal_VOID__STRING_STRING (GClosure     *closure,
                                                GValue       *return_value,
                                                guint         n_param_values,
                                                const GValue *param_values,
                                                gpointer      invocation_hint,
                                                gpointer      marshal_data);

/* BOOLEAN:VOID (nimf-marshalers.list:4) */
extern
void nimf_cclosure_marshal_BOOLEAN__VOID (GClosure     *closure,
                                          GValue       *return_value,
                                          guint         n_param_values,
                                          const GValue *param_values,
                                          gpointer      invocation_hint,
                                          gpointer      marshal_data);

/* BOOLEAN:INT,INT (nimf-marshalers.list:5) */
extern
void nimf_cclosure_marshal_BOOLEAN__INT_INT (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);


G_END_DECLS

#endif /* __NIMF_CCLOSURE_MARSHAL_MARSHAL_H__ */
