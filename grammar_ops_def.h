#ifndef PARASOLE_IMPL_INCLUDED_GRAMMAR_H
    #error "<parasole/grammar.h> must be included before <parasole/grammar_ops_def.h>"
#endif

#ifdef PARASOLE_IMPL_INLCUDED_GRAMMAR_OPS_DEF_H
    #error "<parasole/grammar_ops_undef.h> must be included before <parasole/grammar_ops_def.h> is included again"
#endif

#define decl(NAME) parasole_grammar_rule_declare(NAME)

#define def(NAME, STRUCTURE) parasole_grammar_rule_define(NAME, STRUCTURE)

#define ch(CHARACTER) parasole_grammar_rule_character(CHARACTER)

#define seq(FIRST, ...) parasole_grammar_rule_sequence(FIRST, __VA_ARGS__)

#define alt(FIRST, ...) parasole_grammar_rule_alternative(FIRST, __VA_ARGS__)

#define opt(SUBJECT) parasole_grammar_rule_optional(SUBJECT)

#define rep0(SUBJECT) parasole_grammar_rule_repeated0(SUBJECT)

#define rep1(SUBJECT) parasole_grammar_rule_repeated1(SUBJECT)

#define gen(SUBJECT, GENERATOR) parasole_grammar_generating(SUBJECT, GENERATOR)

#define comb(SUBJECT, COMBINER) parasole_grammar_combining(SUBJECT, COMBINER)

#define PARASOLE_IMPL_INLCUDED_GRAMMAR_OPS_DEF_H
