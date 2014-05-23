#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

#include "osmtypes.hpp"
#include "output.hpp"
#include "output-null.hpp"

#define UNUSED  __attribute__ ((unused))

void output_null_t::cleanup() {
}

int output_null_t::start() {
    return 0;
}

void output_null_t::iterate_ways() {
}

void output_null_t::iterate_relations() {
}

void output_null_t::stop() {
}

void output_null_t::commit() {
}

int output_null_t::node_add(osmid_t a UNUSED, double b UNUSED, double c UNUSED, struct keyval *k UNUSED) {
  return 0;
}

int output_null_t::way_add(osmid_t a UNUSED, osmid_t *b UNUSED, int c UNUSED, struct keyval *k UNUSED) {
  return 0;
}

int output_null_t::relation_add(osmid_t a UNUSED, struct member *b UNUSED, int c UNUSED, struct keyval *k UNUSED) {
  return 0;
}

int output_null_t::node_delete(osmid_t i UNUSED) {
  return 0;
}

int output_null_t::way_delete(osmid_t i UNUSED) {
  return 0;
}

int output_null_t::relation_delete(osmid_t i UNUSED) {
  return 0;
}

int output_null_t::node_modify(osmid_t a UNUSED, double b UNUSED, double c UNUSED, struct keyval * k UNUSED) {
  return 0;
}

int output_null_t::way_modify(osmid_t a UNUSED, osmid_t * b UNUSED, int c UNUSED, struct keyval * k UNUSED) {
  return 0;
}

int output_null_t::relation_modify(osmid_t a UNUSED, struct member * b UNUSED, int c UNUSED, struct keyval * k UNUSED) {
  return 0;
}

int output_null_t::connect(int startTransaction) {
    return 0;
}

void output_null_t::close(int stopTransaction) {
    // nothing
}

output_null_t::output_null_t(middle_t* mid_, const output_options* options_): output_t(mid_, options_) {
}

output_null_t::~output_null_t() {
}
