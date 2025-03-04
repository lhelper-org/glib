/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 * GObject introspection: Property
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

#include <girepository/gitypes.h>

G_BEGIN_DECLS

/**
 * GI_IS_PROPERTY_INFO
 * @info: an info structure
 *
 * Checks if @info is a #GIPropertyInfo.
 */
#define GI_IS_PROPERTY_INFO(info) \
    (gi_base_info_get_info_type ((GIBaseInfo*) info) ==  GI_INFO_TYPE_PROPERTY)


GI_AVAILABLE_IN_ALL
GParamFlags  gi_property_info_get_flags (GIPropertyInfo *info);

GI_AVAILABLE_IN_ALL
GITypeInfo *gi_property_info_get_type_info (GIPropertyInfo *info);

GI_AVAILABLE_IN_ALL
GITransfer   gi_property_info_get_ownership_transfer (GIPropertyInfo *info);

GI_AVAILABLE_IN_ALL
GIFunctionInfo *gi_property_info_get_setter (GIPropertyInfo *info);

GI_AVAILABLE_IN_ALL
GIFunctionInfo *gi_property_info_get_getter (GIPropertyInfo *info);

G_END_DECLS
