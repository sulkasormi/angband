/*
 * File: obj-info.h
 * Purpose: Object description code.
 *
 * Copyright (c) 2010 Andi Sidwell
 * Copyright (c) 2004 Robert Ruehlmann
 *
 * This work is free software; you can redistribute it and/or modify it
 * under the terms of either:
 *
 * a) the GNU General Public License as published by the Free Software
 *    Foundation, version 2, or
 *
 * b) the "Angband licence":
 *    This software may be copied and distributed for educational, research,
 *    and not for profit purposes provided that this copyright and statement
 *    are included in all such copies.  Other copyrights may also apply.
 */

#ifndef OBJECT_INFO_H
#define OBJECT_INFO_H

#include "z-textblock.h"

textblock *object_info(const object_type *o_ptr, oinfo_detail_t mode);
textblock *object_info_ego(struct ego_item *ego);
void object_info_spoil(ang_file *f, const object_type *o_ptr, int wrap);
void object_info_chardump(ang_file *f, const object_type *o_ptr, int indent, int wrap);

#endif /* OBJECT_INFO_H */
