/*
 * include/haproxy/tinfo.h
 * Export of ha_thread_info[] and ti pointer.
 *
 * Copyright (C) 2020 Willy Tarreau - w@1wt.eu
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, version 2.1
 * exclusively.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _HAPROXY_TINFO_H
#define _HAPROXY_TINFO_H

#include <haproxy/api.h>
#include <haproxy/tinfo-t.h>

/* the structs are in thread.c */
extern struct tgroup_info ha_tgroup_info[MAX_TGROUPS];
extern THREAD_LOCAL const struct tgroup_info *tg;

extern struct thread_info ha_thread_info[MAX_THREADS];
extern THREAD_LOCAL const struct thread_info *ti;   /* thread_info for the current thread */

extern struct tgroup_ctx ha_tgroup_ctx[MAX_TGROUPS];
extern THREAD_LOCAL struct tgroup_ctx *tg_ctx; /* ha_tgroup_ctx for the current thread */

extern struct thread_ctx ha_thread_ctx[MAX_THREADS];
extern THREAD_LOCAL struct thread_ctx *th_ctx; /* ha_thread_ctx for the current thread */

#endif /* _HAPROXY_TINFO_H */
