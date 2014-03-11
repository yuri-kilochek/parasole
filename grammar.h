#ifndef PARASOLE_IMPL_INCLUDED_GRAMMAR_H
#define PARASOLE_IMPL_INCLUDED_GRAMMAR_H

#define PARASOLE_IMPL_ARGC_N(               \
     _0,  _1,  _2,  _3,  _4,  _5,  _6,  _7, \
     _8,  _9, _10, _11, _12, _13, _14, _15, \
    _16, _17, _18, _19, _20, _21, _22, _23, \
    _24, _25, _26, _27, _28, _29, _30, _31, \
    _32, _33, _34, _35, _36, _37, _38, _39, \
    _40, _41, _42, _43, _44, _45, _46, _47, \
    _48, _49, _50, _51, _52, _53, _54, _55, \
    _56, _57, _58, _59, _60, _61, _62, _63, \
     _N, ...                                \
) _N

#define PARASOLE_IMPL_ARGC_(...) \
    PARASOLE_IMPL_ARGC_N(__VA_ARGS__)

#define PARASOLE_IMPL_ARGC_SEQENCE  \
    64, 63, 62, 61, 60, 59, 58, 57, \
    56, 55, 54, 53, 52, 51, 50, 49, \
    48, 47, 46, 45, 44, 43, 42, 41, \
    40, 39, 38, 37, 36, 35, 34, 33, \
    32, 31, 30, 29, 28, 27, 26, 25, \
    24, 23, 22, 21, 20, 19, 18, 17, \
    16, 15, 14, 13, 12, 11, 10,  9, \
     8,  7,  6,  5,  4,  3,  2,  1

#define PARASOLE_IMPL_ARGC(...) \
    PARASOLE_IMPL_ARGC_(__VA_ARGS__, PARASOLE_IMPL_ARGC_SEQENCE)

#define PARASOLE_IMPL_CONCAT_(A, B) \
    A ## B

#define PARASOLE_IMPL_CONCAT(A, B) \
    PARASOLE_IMPL_CONCAT_(A, B)

#define  PARASOLE_IMPL_FOR_EACH_1(F, X     ) F(X)
#define  PARASOLE_IMPL_FOR_EACH_2(F, X, ...) F(X),  PARASOLE_IMPL_FOR_EACH_1(F, __VA_ARGS__)
#define  PARASOLE_IMPL_FOR_EACH_3(F, X, ...) F(X),  PARASOLE_IMPL_FOR_EACH_2(F, __VA_ARGS__)
#define  PARASOLE_IMPL_FOR_EACH_4(F, X, ...) F(X),  PARASOLE_IMPL_FOR_EACH_3(F, __VA_ARGS__)
#define  PARASOLE_IMPL_FOR_EACH_5(F, X, ...) F(X),  PARASOLE_IMPL_FOR_EACH_4(F, __VA_ARGS__)
#define  PARASOLE_IMPL_FOR_EACH_6(F, X, ...) F(X),  PARASOLE_IMPL_FOR_EACH_5(F, __VA_ARGS__)
#define  PARASOLE_IMPL_FOR_EACH_7(F, X, ...) F(X),  PARASOLE_IMPL_FOR_EACH_6(F, __VA_ARGS__)
#define  PARASOLE_IMPL_FOR_EACH_8(F, X, ...) F(X),  PARASOLE_IMPL_FOR_EACH_7(F, __VA_ARGS__)

#define  PARASOLE_IMPL_FOR_EACH_9(F, X, ...) F(X),  PARASOLE_IMPL_FOR_EACH_8(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_10(F, X, ...) F(X),  PARASOLE_IMPL_FOR_EACH_9(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_11(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_10(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_12(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_11(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_13(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_12(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_14(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_13(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_15(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_14(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_16(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_15(F, __VA_ARGS__)

#define PARASOLE_IMPL_FOR_EACH_17(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_16(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_18(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_17(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_19(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_18(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_20(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_19(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_21(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_20(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_22(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_21(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_23(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_22(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_24(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_23(F, __VA_ARGS__)

#define PARASOLE_IMPL_FOR_EACH_25(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_24(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_26(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_25(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_27(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_26(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_28(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_27(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_29(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_28(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_30(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_29(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_31(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_30(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_32(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_31(F, __VA_ARGS__)

#define PARASOLE_IMPL_FOR_EACH_33(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_32(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_34(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_33(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_35(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_34(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_36(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_35(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_37(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_36(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_38(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_37(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_39(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_38(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_40(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_39(F, __VA_ARGS__)

#define PARASOLE_IMPL_FOR_EACH_41(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_40(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_42(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_41(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_43(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_42(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_44(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_43(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_45(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_44(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_46(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_45(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_47(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_46(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_48(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_47(F, __VA_ARGS__)

#define PARASOLE_IMPL_FOR_EACH_49(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_48(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_50(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_49(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_51(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_50(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_52(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_51(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_53(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_52(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_54(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_53(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_55(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_54(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_56(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_55(F, __VA_ARGS__)

#define PARASOLE_IMPL_FOR_EACH_57(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_56(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_58(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_57(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_59(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_58(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_60(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_59(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_61(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_60(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_62(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_61(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_63(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_62(F, __VA_ARGS__)
#define PARASOLE_IMPL_FOR_EACH_64(F, X, ...) F(X), PARASOLE_IMPL_FOR_EACH_63(F, __VA_ARGS__)

#define PARASOLE_IMPL_FOR_EACH(F, ...) \
    PARASOLE_IMPL_CONCAT(PARASOLE_IMPL_FOR_EACH_, PARASOLE_IMPL_ARGC(__VA_ARGS__))(F, __VA_ARGS__)

#define PARASOLE_IMPL_IDENTITY(...) \
    __VA_ARGS__

#define PARASOLE_IMPL_UNPACK(X) \
    PARASOLE_IMPL_IDENTITY X

#define PARASOLE_IMPL_IGNORE(...) \
    /* ... */

#define PARASOLE_IMPL_CONSUME(X) \
    PARASOLE_IMPL_IGNORE X

#define PARASOLE_IMPL_UNPACK_CONSUME(X) \
    PARASOLE_IMPL_CONSUME(PARASOLE_IMPL_UNPACK(X))

#define PARASOLE_IMPL_ADDROF(X) \
    &X

#define PARASOLE_IMPL_ADDROF_EACH(...) \
    PARASOLE_IMPL_FOR_EACH(PARASOLE_IMPL_ADDROF, __VA_ARGS__)

union parasole_grammar_rule;

enum parasole_grammar_rule_type {
    parasole_grammar_rule_type_character,
    parasole_grammar_rule_type_sequence,
    parasole_grammar_rule_type_alternative,
    parasole_grammar_rule_type_optional,
    parasole_grammar_rule_type_repeated0,
    parasole_grammar_rule_type_repeated1,
    parasole_grammar_rule_type_generating,
    parasole_grammar_rule_type_combining,
};

struct parasole_grammar_rule_character {
    enum parasole_grammar_rule_type type;
    char character;
};

struct parasole_grammar_rule_sequence {
    enum parasole_grammar_rule_type type;
    int subject_count;
    union parasole_grammar_rule const **subjects;
};

struct parasole_grammar_rule_alternative {
    enum parasole_grammar_rule_type type;
    int subject_count;
    union parasole_grammar_rule const **subjects;
};

struct parasole_grammar_rule_optional {
    enum parasole_grammar_rule_type type;
    union parasole_grammar_rule const *subject;
};

struct parasole_grammar_rule_repeated0 {
    enum parasole_grammar_rule_type type;
    union parasole_grammar_rule const *subject;
};

struct parasole_grammar_rule_repeated1 {
    enum parasole_grammar_rule_type type;
    union parasole_grammar_rule const *subject;
};

struct parasole_grammar_rule_generating {
    enum parasole_grammar_rule_type type;
    union parasole_grammar_rule const *subject;
    void *(*generator)(int character_count, char const *characters, void *context);
};

struct parasole_grammar_rule_combining {
    enum parasole_grammar_rule_type type;
    union parasole_grammar_rule const *subject;
    void *(*combiner)(int node_count, void **nodes, void *context);
};

union parasole_grammar_rule {
    enum parasole_grammar_rule_type type;
    struct parasole_grammar_rule_character character;
    struct parasole_grammar_rule_sequence sequence;
    struct parasole_grammar_rule_alternative alternative;
    struct parasole_grammar_rule_optional optional;
    struct parasole_grammar_rule_repeated0 repeated0;
    struct parasole_grammar_rule_repeated1 repeated1;
    struct parasole_grammar_rule_generating generating;
    struct parasole_grammar_rule_combining combining;
};

#define parasole_grammar_rule_declare(NAME) \
    union parasole_grammar_rule const NAME

#define parasole_grammar_rule_define(NAME, STRUCTURE) \
    union parasole_grammar_rule const NAME = PARASOLE_IMPL_UNPACK_CONSUME(STRUCTURE)

#define parasole_grammar_rule_character(CHARACTER) (  \
    (union parasole_grammar_rule const) {             \
        .type = parasole_grammar_rule_type_character, \
        .character = {                                \
            .character = CHARACTER                    \
        }                                             \
    }                                                 \
)

#define parasole_grammar_rule_sequence(FIRST, ...) (                 \
    (union parasole_grammar_rule const) {                            \
        .type = parasole_grammar_rule_type_sequence,                 \
        .sequence = {                                                \
            .subject_count = PARASOLE_IMPL_ARGC(FIRST, __VA_ARGS__), \
            .subjects = (union parasole_grammar_rule const*[]) {     \
                PARASOLE_IMPL_ADDROF_EACH(FIRST, __VA_ARGS__)        \
            }                                                        \
        }                                                            \
    }                                                                \
)

#define parasole_grammar_rule_alternative(FIRST, ...) (              \
    (union parasole_grammar_rule const) {                            \
        .type = parasole_grammar_rule_type_alternative,              \
        .alternative = {                                             \
            .subject_count = PARASOLE_IMPL_ARGC(FIRST, __VA_ARGS__), \
            .subjects = (union parasole_grammar_rule const*[]) {     \
                PARASOLE_IMPL_ADDROF_EACH(FIRST, __VA_ARGS__)        \
            }                                                        \
        }                                                            \
    }                                                                \
)

#define parasole_grammar_rule_optional(SUBJECT) (    \
    (union parasole_grammar_rule const) {            \
        .type = parasole_grammar_rule_type_optional, \
        .optional = {                                \
            .subject = PARASOLE_IMPL_ADDROF(SUBJECT) \
        }                                            \
    }                                                \
)

#define parasole_grammar_rule_repeated0(SUBJECT) (    \
    (union parasole_grammar_rule const) {             \
        .type = parasole_grammar_rule_type_repeated0, \
        .repeated0 = {                                \
            .subject = PARASOLE_IMPL_ADDROF(SUBJECT)  \
        }                                             \
    }                                                 \
)

#define parasole_grammar_rule_repeated1(SUBJECT) (    \
    (union parasole_grammar_rule const) {             \
        .type = parasole_grammar_rule_type_repeated1, \
        .repeated1 = {                                \
            .subject = PARASOLE_IMPL_ADDROF(SUBJECT)  \
        }                                             \
    }                                                 \
)

#define parasole_grammar_generating(SUBJECT, GENERATOR) ( \
    (union parasole_grammar_rule const) {                 \
        .type = parasole_grammar_rule_type_generating,    \
        .generating = {                                   \
            .subject = PARASOLE_IMPL_ADDROF(SUBJECT),     \
            .generator = GENERATOR                        \
        }                                                 \
    }                                                     \
)

#define parasole_grammar_combining(SUBJECT, COMBINER) ( \
    (union parasole_grammar_rule const) {               \
        .type = parasole_grammar_rule_type_combining,   \
        .combining = {                                  \
            .subject = PARASOLE_IMPL_ADDROF(SUBJECT),   \
            .combiner = COMBINER                        \
        }                                               \
    }                                                   \
)

#endif
