/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 * GObject introspection: Signal
 *
 * Copyright (C) 2005 Matthias Clasen
 * Copyright (C) 2008,2009 Red Hat, Inc.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#pragma once

#if !defined (__GIREPOSITORY_H_INSIDE__) && !defined (GI_COMPILATION)
#error "Only <girepository.h> can be included directly."
#endif

#include <glib-object.h>
#include <girepository/gitypes.h>

G_BEGIN_DECLS

/**
 * GI_IS_SIGNAL_INFO
 * @info: an info structure
 *
 * Checks if @info is a #GISignalInfo.
 */
#define GI_IS_SIGNAL_INFO(info) \
    (gi_base_info_get_info_type ((GIBaseInfo*) info) ==  GI_INFO_TYPE_SIGNAL)


GI_AVAILABLE_IN_ALL
GSignalFlags  gi_signal_info_get_flags         (GISignalInfo *info);

GI_AVAILABLE_IN_ALL
GIVFuncInfo * gi_signal_info_get_class_closure (GISignalInfo *info);

GI_AVAILABLE_IN_ALL
gboolean      gi_signal_info_true_stops_emit   (GISignalInfo *info);

G_END_DECLS
