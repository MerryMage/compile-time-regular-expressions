#include <ctre.hpp>

using namespace std::string_view_literals;
using namespace ctre::literals;

static_assert("^([a-z]++[0123456789ABCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789ABCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789ABCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789ABCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789AyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789Ayyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yBCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yBCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yBCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yBCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456789yyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yABCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yABCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yABCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yABCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yAyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyBCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyBCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyBCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyBCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[012345678yyyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9ABCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9ABCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9ABCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9ABCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9AyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9Ayyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yBCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yBCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yBCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yBCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567y9yyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyABCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyABCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyABCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyABCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyAyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyBCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyBCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyBCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyBCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[01234567yyyyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));

static_assert("^([a-z]++[0123456y89ABCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89ABCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89ABCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89ABCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89AyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89Ayyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yBCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yBCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yBCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yBCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y89yyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yABCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yABCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yABCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yABCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yAyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyBCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyBCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyBCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyBCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456y8yyyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9ABCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9ABCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9ABCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9ABCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9AyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9Ayyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yBCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yBCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yBCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yBCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yy9yyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyABCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyABCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyABCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyABCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyAyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyBCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyBCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyBCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyBCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyByDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyByDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyByyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyByyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyyCDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyyCDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyyCyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyyCyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyyyDE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyyyDy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyyyyE]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
static_assert("^([a-z]++[0123456yyyyyyyy]+?x[a-z]++)+"_pcre.match("aaaa0000000000000xbbbbb"sv));
