#ifndef PARASOLE_INCLUDED_GRAMMAR_H
#define PARASOLE_INCLUDED_GRAMMAR_H

#include <stddef.h>

#include "argc.h"
#include "each.h"

#define PARASOLE_ADDROF(X) \
    &X

#define PARASOLE_ADDROF_EACH(...) \
    PARASOLE_EACH(PARASOLE_ADDROF, __VA_ARGS__)

union parasole_parser typedef parasole_parser_t;

enum parasole_parser_type {
    parasole_parser_type_end_of_input,
    parasole_parser_type_character,
    parasole_parser_type_optional,
    parasole_parser_type_repeated0,
    parasole_parser_type_repeated1,
    parasole_parser_type_sequence,
    parasole_parser_type_alternative,
} typedef parasole_parser_type_t;

struct parasole_parser_end_of_input {
    parasole_parser_type_t type;
} typedef parasole_parser_end_of_input_t;

struct parasole_parser_character {
    parasole_parser_type_t type;
    int code_point;
} typedef parasole_parser_character_t;

struct parasole_parser_optional {
    parasole_parser_type_t type;
    parasole_parser_t const *subject;
} typedef parasole_parser_optional_t;

struct parasole_parser_repeated0 {
    parasole_parser_type_t type;
    parasole_parser_t const *subject;
} typedef parasole_parser_repeated0_t;

struct parasole_parser_repeated1 {
    parasole_parser_type_t type;
    parasole_parser_t const *subject;
} typedef parasole_parser_repeated1_t;

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

union parasole_parser {
    parasole_parser_type_t type;
    parasole_parser_end_of_input_t end_of_input;
    parasole_parser_character_t character;
    parasole_parser_optional_t optional;
    parasole_parser_repeated0_t repeated0;
    parasole_parser_repeated1_t repeated1;
    parasole_parser_sequence_t sequence;
    parasole_parser_alternative_t alternative;
};

#define PARASOLE_PARSER_END_OF_INPUT ( \
    (union parasole_parser const) { \
        .type = parasole_parser_type_end_of_input \
    } \
)

#define PARASOLE_PARSER_CHARACTER(CODE_POINT) ( \
    (union parasole_parser const) { \
        .type = parasole_parser_type_character, \
        .character = { \
            .code_point = CODE_POINT \
        } \
    } \
)

#define PARASOLE_PARSER_OPTIONAL(SUBJECT) ( \
    (union parasole_parser const) { \
        .type = parasole_parser_type_optional, \
        .optional = { \
            .subject = PARASOLE_ADDROF(SUBJECT) \
        } \
    } \
)

#define PARASOLE_PARSER_REPEATED0(SUBJECT) ( \
    (union parasole_parser const) { \
        .type = parasole_parser_type_repeated0, \
        .repeated0 = { \
            .subject = PARASOLE_ADDROF(SUBJECT) \
        } \
    } \
)

#define PARASOLE_PARSER_REPEATED1(SUBJECT) ( \
    (union parasole_parser const) { \
        .type = parasole_parser_type_repeated1, \
        .repeated1 = { \
            .subject = PARASOLE_ADDROF(SUBJECT) \
        } \
    } \
)

#define PARASOLE_PARSER_SEQUENCE(FIRST, ...) ( \
    (union parasole_parser const) { \
        .type = parasole_parser_type_sequence, \
        .sequence = { \
            .subject_count = PARASOLE_ARGC(FIRST, __VA_ARGS__), \
            .subjects = (union parasole_parser const *const[]) { \
                PARASOLE_ADDROF_EACH(FIRST, __VA_ARGS__) \
            } \
        } \
    } \
)

#define PARASOLE_PARSER_ALTERNATIVE(FIRST, ...) ( \
    (union parasole_parser const) { \
        .type = parasole_parser_type_alternative, \
        .alternative = { \
            .subject_count = PARASOLE_ARGC(FIRST, __VA_ARGS__), \
            .subjects = (union parasole_parser const *const[]) { \
                PARASOLE_ADDROF_EACH(FIRST, __VA_ARGS__) \
            } \
        } \
    } \
)

#endif
