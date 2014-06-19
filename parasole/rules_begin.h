#ifdef PARASOLE_RULES_BLOCK
    #error "<parasole/rules_end.h> must be included before <parasole/rules_begin.h> can be included again"
#endif

#include "parser.h"
#include "rule.h"

#define PARASOLE_RULES_BLOCK

#define eoi PARASOLE_PARSER_END_OF_INPUT

#define ch(CODE_POINT) PARASOLE_PARSER_CHARACTER(CODE_POINT)

#define opt(SUBJECT) PARASOLE_PARSER_OPTIONAL(SUBJECT)

#define rep0(SUBJECT) PARASOLE_PARSER_REPEATED0(SUBJECT)

#define rep1(SUBJECT) PARASOLE_PARSER_REPEATED1(SUBJECT)

#define seq(FIRST, ...) PARASOLE_PARSER_SEQUENCE(FIRST, __VA_ARGS__)

#define alt(FIRST, ...) PARASOLE_PARSER_ALTERNATIVE(FIRST, __VA_ARGS__)

#define rule(NAME, BODY) PARASOLE_RULE(NAME, BODY)

#define rules(...) PARASOLE_RULES(__VA_ARGS__)

