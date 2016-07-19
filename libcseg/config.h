/**
 * This file is part of ffmpeg_ivr
 * 
 * Copyright (C) 2016  OpenSight (www.opensight.cn)
 * 
 * ffmpeg_ivr is an extension of ffmpeg to implements the new feature for IVR
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
**/



#include <float.h>
#include <stdint.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C" {
#endif

#define FRAGMENT_SIZE  65535  //64KB
#define FRAGMENT_BUF_SIZE   (FRAGMENT_SIZE - 16)   //16Bytes is used for fragment header

#define SEGMENT_MAX_SIZE   2097152   //2MB

#define   av_malloc   malloc
#define   av_free     free
#define   av_log(level, fmt, args)   printf(fmt, ##args)



#ifdef __cplusplus
}
#endif