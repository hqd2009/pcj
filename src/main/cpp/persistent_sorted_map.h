/* Copyright (C) 2016  Intel Corporation
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 only, as published by the Free Software Foundation.
 * This file has been designated as subject to the "Classpath"
 * exception as provided in the LICENSE file that accompanied
 * this code.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License version 2 for more details (a copy
 * is included in the LICENSE file that accompanied this code).
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

void free_map(TOID(struct rbtree_map) map);
int check_map_existence(PMEMoid map);
EPMEMoid put_common(TOID(struct rbtree_map) map, PMEMoid key, PMEMoid value,
                    TOID(struct hashmap_tx) locks, int lock_key, int lock_value);
EPMEMoid remove_common(TOID(struct rbtree_map) map, PMEMoid key, TOID(struct tree_map_node) node,
                       TOID(struct hashmap_tx) locks, int lock_key, int lock_value);
