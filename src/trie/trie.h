/*
  trie.h: Trie data structure.

  Copyright (c) 2013 Harshavardhana

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  Original Author: Anand V. Avati <avati@redhat.com>
*/

#ifndef _TRIE_H
#define _TRIE_H

#ifndef _CONFIG_H
#define _CONFIG_H
#include "config.h"
#endif

#define min(a,b) ((a)<(b)?(a):(b))

#define DISTANCE_EDIT 1
#define DISTANCE_INS  1
#define DISTANCE_DEL  1

struct trienode {
	char             id;
	char             eow;
	int              depth;
	void            *data;
	struct trie     *trie;
	struct trienode *parent;
	struct trienode *subnodes[255];
};

struct trie {
	struct trienode   root;
	int               nodecnt;
	size_t            len;
};

struct trienode;
typedef struct trienode trienode_t;

struct trie;
typedef struct trie trie_t;

struct trienodevec {
	trienode_t **nodes;
	unsigned cnt;
};

struct trienodevec_w {
	struct trienodevec *vec;
	const char *word;
};

trie_t *trie_new ();

int trie_add (trie_t *trie, const char *word);

void trie_destroy (trie_t *trie);

void trie_destroy_bynode (trienode_t *node);

int trie_measure (trie_t *trie, const char *word, trienode_t **nodes,
		  int nodecnt);

int trie_measure_vec (trie_t *trie, const char *word,
		      struct trienodevec *nodevec);

void trie_reset_search (trie_t *trie);

int trienode_get_dist (trienode_t *node);

int trienode_get_word (trienode_t *node, char **buf);

#endif /* _TRIE_H */
