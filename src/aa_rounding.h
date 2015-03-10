/*
 * aa_rounding.h -- Platform dependent rounding
 * Copyright (c) 2003 EPFL (Ecole Polytechnique Federale de Lausanne)
 * Copyright (c) 2004 LIRIS (University Claude Bernard Lyon 1)
 *
 * This file is part of libaffa.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libaffa; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef AA_ROUNDING_H
#define AA_ROUNDING_H

//#ifdef HAVE_IEEEFP_H
//#include <ieeefp.h>
//#define EV_UPWARD FP_RP
//#define EV_DOWNWARD FP_RM
//#define fegetround fpgetround
//#define fesetround fpsetround
//#ifdef HAVE_FP_RND_T
//typedef fp_rnd_t aa_rnd_t;
//#else
//typedef fp_rnd aa_rnd_t;
//#endif
//#else
#define _GLIBCXX_HAVE_FENV_H 1
#include <fenv.h>
#define AA_UPWARD FE_UPWARD
#define AA_DOWNWARD FE_DOWNWARD
typedef unsigned int aa_rnd_t;
//#endif
//#endif

unsigned int aa_fesetround(aa_rnd_t);
aa_rnd_t aa_fegetround(void);

#endif
/*
  Local Variables:
  mode:c++
  c-file-style:"stroustrup"
  c-file-offsets:((innamespace . 0)(inline-open . 0))
  indent-tabs-mode:nil
  fill-column:99
  End:
*/


// vim: filetype=c++:expandtab:shiftwidth=4:tabstop=8:softtabstop=4 :
