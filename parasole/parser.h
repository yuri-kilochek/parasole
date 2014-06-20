#ifndef PARASOLE_INCLUDED_GRAMMAR_H
#define PARASOLE_INCLUDED_GRAMMAR_H

#include <stddef.h>

#include "argc.h"
#include "each.h"

union parasole_parser typedef parasole_parser_t;

enum parasole_parser_type {
    parasole_parser_type_identity,
    parasole_parser_type_character,
    parasole_parser_type_optional,
    parasole_parser_type_repeater0,
    parasole_parser_type_repeater1,
    parasole_parser_type_sequence,
    parasole_parser_type_alternative,
    parasole_parser_type_spawner,
    parasole_parser_type_combiner,
    parasole_parser_type_end_of_input,
} typedef parasole_parser_type_t;

struct parasole_parser_identity {
    parasole_parser_type_t type;
    parasole_parser_t const *subject;
} typedef parasole_parser_identity_t;

struct parasole_parser_character {
    parasole_parser_type_t type;
    char character;
} typedef parasole_parser_character_t;

struct parasole_parser_optional {
    parasole_parser_type_t type;
    parasole_parser_t const *subject;
} typedef parasole_parser_optional_t;

struct parasole_parser_repeater0 {
    parasole_parser_type_t type;
    parasole_parser_t const *subject;
} typedef parasole_parser_repeater0_t;

struct parasole_parser_repeater1 {
    parasole_parser_type_t type;
    parasole_parser_t const *subject;
} typedef parasole_parser_repeater1_t;

struct parasole_parser_sequence {
    parasole_parser_type_t type;
    size_t subject_count;
    parasole_parser_t const *const *subjects;
} typedef parasole_parser_sequence_t;

struct parasole_parser_alternative {
    parasole_parser_type_t type;
    size_t subject_count;
    parasole_parser_t const *const *subjects;
} typedef parasole_parser_alternative_t;

struct parasole_parser_spawner {
    parasole_parser_type_t type;
    parasole_parser_t const *subject;
    void *(*spawn)(char const *characters, size_t character_count, void *context);
} typedef parasole_parser_spawner_t;

struct parasole_parser_combiner {
    parasole_parser_type_t type;
    parasole_parser_t const *subject;
    void *(*combine)(void **nodes, size_t node_count, void *context);
} typedef parasole_parser_combiner_t;

struct parasole_parser_end_of_input {
    parasole_parser_type_t type;
} typedef parasole_parser_end_of_input_t;

union parasole_parser {
    parasole_parser_type_t type;
    parasole_parser_identity_t identity;
    parasole_parser_character_t character;
    parasole_parser_optional_t optional;
    parasole_parser_repeater0_t repeater0;
    parasole_parser_repeater1_t repeater1;
    parasole_parser_sequence_t sequence;
    parasole_parser_alternative_t alternative;
    parasole_parser_spawner_t spawner;
    parasole_parser_combiner_t combiner;
    parasole_parser_end_of_input_t end_of_input;
};

#define PARASOLE_PARSER_IDENTITY(SUBJECT) ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_identity, \
        .identity = { \
            .subject = &(SUBJECT) \
        } \
    } \
)

#define PARASOLE_PARSER_CHARACTER(CHARACTER) ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_character, \
        .character = { \
            .character = (CHARACTER) \
        } \
    } \
)

#define PARASOLE_PARSER_OPTIONAL(SUBJECT) ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_optional, \
        .optional = { \
            .subject = &(SUBJECT) \
        } \
    } \
)

#define PARASOLE_PARSER_REPEATER0(SUBJECT) ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_repeater0, \
        .repeater0 = { \
            .subject = &(SUBJECT) \
        } \
    } \
)

#define PARASOLE_PARSER_REPEATER1(SUBJECT) ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_repeater1, \
        .repeater1 = { \
            .subject = &(SUBJECT) \
        } \
    } \
)

#define PARASOLE_PARSER_SEQUENCE(FIRST, ...) ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_sequence, \
        .sequence = { \
            .subject_count = PARASOLE_ARGC(FIRST, __VA_ARGS__), \
            .subjects = (parasole_parser_t const *const[]) { \
                PARASOLE_EACH(&, FIRST, __VA_ARGS__) \
            } \
        } \
    } \
)

#define PARASOLE_PARSER_ALTERNATIVE(FIRST, ...) ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_alternative, \
        .alternative = { \
            .subject_count = PARASOLE_ARGC(FIRST, __VA_ARGS__), \
            .subjects = (parasole_parser_t const *const[]) { \
                PARASOLE_EACH(&, FIRST, __VA_ARGS__) \
            } \
        } \
    } \
)

#define PARASOLE_PARSER_SPAWNER(SUBJECT, SPAWN) ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_spawner, \
        .spawner = { \
            .subject = &(SUBJECT), \
            .spawn = &(SPAWN) \
        } \
    } \
)

#define PARASOLE_PARSER_COMBINER(SUBJECT, COMBINE) ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_combiner, \
        .combiner = { \
            .subject = &(SUBJECT), \
            .combine = &(COMBINE) \
        } \
    } \
)

#define PARASOLE_PARSER_END_OF_INPUT ( \
    (parasole_parser_t const) { \
        .type = parasole_parser_type_end_of_input \
    } \
)

#endif
