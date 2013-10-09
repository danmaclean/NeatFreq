/*
  Copyright (c) 2006-2010 Gordon Gremme <gremme@zbh.uni-hamburg.de>
  Copyright (c) 2006-2008 Center for Bioinformatics, University of Hamburg

  Permission to use, copy, modify, and distribute this software for any
  purpose with or without fee is hereby granted, provided that the above
  copyright notice and this permission notice appear in all copies.

  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

#ifndef FASTA_H
#define FASTA_H

#include "core/file.h"

/* Print a fasta entry with optional <description> and mandatory <sequence> to
   <outfp>. If <width> is != 0 the sequence is formatted accordingly. */
void gt_fasta_show_entry(const char *description, const char *sequence,
                         unsigned long sequence_length, unsigned long width,
                         GtFile *outfp);

/* Print a fasta entry with optional <description> and <suffix> plus mandatory
   <sequence> to <outfp>. If <width> is != 0 the sequence is formatted
   accordingly. */
void gt_fasta_show_entry_with_suffix(const char *description,
                                     const char *sequence,
                                     unsigned long sequence_length,
                                     const char *suffix, unsigned long width,
                                     GtFile *outfp);

#endif