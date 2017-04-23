/* grammar.c generated by valac 0.34.7, the Vala compiler
 * generated from grammar.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define SPREADSHEET_PARSER_TYPE_GRAMMAR (spreadsheet_parser_grammar_get_type ())
#define SPREADSHEET_PARSER_GRAMMAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammar))
#define SPREADSHEET_PARSER_GRAMMAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammarClass))
#define SPREADSHEET_PARSER_IS_GRAMMAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPREADSHEET_PARSER_TYPE_GRAMMAR))
#define SPREADSHEET_PARSER_IS_GRAMMAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPREADSHEET_PARSER_TYPE_GRAMMAR))
#define SPREADSHEET_PARSER_GRAMMAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammarClass))

typedef struct _SpreadsheetParserGrammar SpreadsheetParserGrammar;
typedef struct _SpreadsheetParserGrammarClass SpreadsheetParserGrammarClass;
typedef struct _SpreadsheetParserGrammarPrivate SpreadsheetParserGrammarPrivate;

#define SPREADSHEET_PARSER_TYPE_EVALUATOR (spreadsheet_parser_evaluator_get_type ())
#define SPREADSHEET_PARSER_EVALUATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPREADSHEET_PARSER_TYPE_EVALUATOR, SpreadsheetParserEvaluator))
#define SPREADSHEET_PARSER_EVALUATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPREADSHEET_PARSER_TYPE_EVALUATOR, SpreadsheetParserEvaluatorClass))
#define SPREADSHEET_PARSER_IS_EVALUATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPREADSHEET_PARSER_TYPE_EVALUATOR))
#define SPREADSHEET_PARSER_IS_EVALUATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPREADSHEET_PARSER_TYPE_EVALUATOR))
#define SPREADSHEET_PARSER_EVALUATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPREADSHEET_PARSER_TYPE_EVALUATOR, SpreadsheetParserEvaluatorClass))

typedef struct _SpreadsheetParserEvaluator SpreadsheetParserEvaluator;
typedef struct _SpreadsheetParserEvaluatorClass SpreadsheetParserEvaluatorClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SPREADSHEET_PARSER_TYPE_TOKEN (spreadsheet_parser_token_get_type ())
#define SPREADSHEET_PARSER_TOKEN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPREADSHEET_PARSER_TYPE_TOKEN, SpreadsheetParserToken))
#define SPREADSHEET_PARSER_TOKEN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPREADSHEET_PARSER_TYPE_TOKEN, SpreadsheetParserTokenClass))
#define SPREADSHEET_PARSER_IS_TOKEN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPREADSHEET_PARSER_TYPE_TOKEN))
#define SPREADSHEET_PARSER_IS_TOKEN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPREADSHEET_PARSER_TYPE_TOKEN))
#define SPREADSHEET_PARSER_TOKEN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPREADSHEET_PARSER_TYPE_TOKEN, SpreadsheetParserTokenClass))

typedef struct _SpreadsheetParserToken SpreadsheetParserToken;
typedef struct _SpreadsheetParserTokenClass SpreadsheetParserTokenClass;
typedef struct _Block2Data Block2Data;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _SpreadsheetParserGrammar {
	GObject parent_instance;
	SpreadsheetParserGrammarPrivate * priv;
};

struct _SpreadsheetParserGrammarClass {
	GObjectClass parent_class;
};

struct _SpreadsheetParserGrammarPrivate {
	GeeHashMap* _rules;
};

typedef SpreadsheetParserToken* (*SpreadsheetParserEvaluation) (const gchar* match, void* user_data);
struct _Block2Data {
	int _ref_count_;
	SpreadsheetParserGrammar* self;
	gchar* type;
};


static gpointer spreadsheet_parser_grammar_parent_class = NULL;

GType spreadsheet_parser_grammar_get_type (void) G_GNUC_CONST;
GType spreadsheet_parser_evaluator_get_type (void) G_GNUC_CONST;
#define SPREADSHEET_PARSER_GRAMMAR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammarPrivate))
enum  {
	SPREADSHEET_PARSER_GRAMMAR_DUMMY_PROPERTY,
	SPREADSHEET_PARSER_GRAMMAR_RULES
};
SpreadsheetParserGrammar* spreadsheet_parser_grammar_new (void);
SpreadsheetParserGrammar* spreadsheet_parser_grammar_construct (GType object_type);
GeeHashMap* spreadsheet_parser_grammar_get_rules (SpreadsheetParserGrammar* self);
static GeeArrayList* spreadsheet_parser_grammar_root_rules (SpreadsheetParserGrammar* self);
gpointer spreadsheet_parser_token_ref (gpointer instance);
void spreadsheet_parser_token_unref (gpointer instance);
GParamSpec* spreadsheet_parser_param_spec_token (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void spreadsheet_parser_value_set_token (GValue* value, gpointer v_object);
void spreadsheet_parser_value_take_token (GValue* value, gpointer v_object);
gpointer spreadsheet_parser_value_get_token (const GValue* value);
GType spreadsheet_parser_token_get_type (void) G_GNUC_CONST;
static SpreadsheetParserEvaluation spreadsheet_parser_grammar_token (SpreadsheetParserGrammar* self, const gchar* t, gint x, void** result_target, GDestroyNotify* result_target_destroy_notify);
SpreadsheetParserEvaluator* spreadsheet_parser_evaluator_new (GValue* _re, SpreadsheetParserEvaluation eval, void* eval_target, GDestroyNotify eval_target_destroy_notify, gboolean pop, gchar** push, int push_length1);
SpreadsheetParserEvaluator* spreadsheet_parser_evaluator_construct (GType object_type, GValue* _re, SpreadsheetParserEvaluation eval, void* eval_target, GDestroyNotify eval_target_destroy_notify, gboolean pop, gchar** push, int push_length1);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
static SpreadsheetParserToken* __lambda11_ (Block2Data* _data2_, const gchar* m);
SpreadsheetParserToken* spreadsheet_parser_token_new (const gchar* k, const gchar* l);
SpreadsheetParserToken* spreadsheet_parser_token_construct (GType object_type, const gchar* k, const gchar* l);
static SpreadsheetParserToken* ___lambda11__spreadsheet_parser_evaluation (const gchar* match, gpointer self);
void spreadsheet_parser_grammar_set_rules (SpreadsheetParserGrammar* self, GeeHashMap* value);
static void spreadsheet_parser_grammar_finalize (GObject* obj);
static void _vala_spreadsheet_parser_grammar_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_spreadsheet_parser_grammar_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);

static GRegex* _tmp_regex_0 = NULL;
static GRegex* _tmp_regex_1 = NULL;
static GRegex* _tmp_regex_2 = NULL;
static GRegex* _tmp_regex_3 = NULL;
static GRegex* _tmp_regex_4 = NULL;
static GRegex* _tmp_regex_5 = NULL;

SpreadsheetParserGrammar* spreadsheet_parser_grammar_construct (GType object_type) {
	SpreadsheetParserGrammar * self = NULL;
	GeeHashMap* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	GeeArrayList* _tmp2_ = NULL;
#line 13 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	self = (SpreadsheetParserGrammar*) g_object_new (object_type, NULL);
#line 14 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp0_ = self->priv->_rules;
#line 14 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp1_ = spreadsheet_parser_grammar_root_rules (self);
#line 14 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp2_ = _tmp1_;
#line 14 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	gee_abstract_map_set ((GeeAbstractMap*) _tmp0_, "root", _tmp2_);
#line 14 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_g_object_unref0 (_tmp2_);
#line 13 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return self;
#line 130 "grammar.c"
}


SpreadsheetParserGrammar* spreadsheet_parser_grammar_new (void) {
#line 13 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return spreadsheet_parser_grammar_construct (SPREADSHEET_PARSER_TYPE_GRAMMAR);
#line 137 "grammar.c"
}


static inline GRegex* _thread_safe_regex_init (GRegex** re, const gchar * pattern, GRegexMatchFlags match_options) {
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	if (g_once_init_enter ((volatile gsize*) re)) {
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		GRegex* val = g_regex_new (pattern, match_options, 0, NULL);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		g_once_init_leave ((volatile gsize*) re, (gsize) val);
#line 148 "grammar.c"
	}
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return *re;
#line 152 "grammar.c"
}


static GeeArrayList* spreadsheet_parser_grammar_root_rules (SpreadsheetParserGrammar* self) {
	GeeArrayList* result = NULL;
	GValue _tmp0_ = {0};
	void* _tmp1_ = NULL;
	GDestroyNotify _tmp2_ = NULL;
	SpreadsheetParserEvaluation _tmp3_ = NULL;
	gchar** _tmp4_ = NULL;
	gchar** _tmp5_ = NULL;
	gint _tmp5__length1 = 0;
	SpreadsheetParserEvaluator* _tmp6_ = NULL;
	GValue _tmp7_ = {0};
	void* _tmp8_ = NULL;
	GDestroyNotify _tmp9_ = NULL;
	SpreadsheetParserEvaluation _tmp10_ = NULL;
	gchar** _tmp11_ = NULL;
	gchar** _tmp12_ = NULL;
	gint _tmp12__length1 = 0;
	SpreadsheetParserEvaluator* _tmp13_ = NULL;
	GValue _tmp14_ = {0};
	void* _tmp15_ = NULL;
	GDestroyNotify _tmp16_ = NULL;
	SpreadsheetParserEvaluation _tmp17_ = NULL;
	gchar** _tmp18_ = NULL;
	gchar** _tmp19_ = NULL;
	gint _tmp19__length1 = 0;
	SpreadsheetParserEvaluator* _tmp20_ = NULL;
	GValue _tmp21_ = {0};
	void* _tmp22_ = NULL;
	GDestroyNotify _tmp23_ = NULL;
	SpreadsheetParserEvaluation _tmp24_ = NULL;
	gchar** _tmp25_ = NULL;
	gchar** _tmp26_ = NULL;
	gint _tmp26__length1 = 0;
	SpreadsheetParserEvaluator* _tmp27_ = NULL;
	GValue _tmp28_ = {0};
	void* _tmp29_ = NULL;
	GDestroyNotify _tmp30_ = NULL;
	SpreadsheetParserEvaluation _tmp31_ = NULL;
	gchar** _tmp32_ = NULL;
	gchar** _tmp33_ = NULL;
	gint _tmp33__length1 = 0;
	SpreadsheetParserEvaluator* _tmp34_ = NULL;
	GValue _tmp35_ = {0};
	void* _tmp36_ = NULL;
	GDestroyNotify _tmp37_ = NULL;
	SpreadsheetParserEvaluation _tmp38_ = NULL;
	gchar** _tmp39_ = NULL;
	gchar** _tmp40_ = NULL;
	gint _tmp40__length1 = 0;
	SpreadsheetParserEvaluator* _tmp41_ = NULL;
	SpreadsheetParserEvaluator** _tmp42_ = NULL;
	GeeArrayList* _tmp43_ = NULL;
	GeeArrayList* _tmp44_ = NULL;
#line 17 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_init (&_tmp0_, G_TYPE_REGEX);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_set_boxed (&_tmp0_, _thread_safe_regex_init (&_tmp_regex_0, "[ \\t]", 0));
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp3_ = spreadsheet_parser_grammar_token (self, "[[ignore]]", 1, &_tmp1_, &_tmp2_);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp4_ = g_new0 (gchar*, 0 + 1);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp5_ = _tmp4_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp5__length1 = 0;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp6_ = spreadsheet_parser_evaluator_new (&_tmp0_, _tmp3_, _tmp1_, _tmp2_, FALSE, _tmp5_, 0);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_init (&_tmp7_, G_TYPE_REGEX);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_set_boxed (&_tmp7_, _thread_safe_regex_init (&_tmp_regex_1, "[A-Z]+[0-9]+", 0));
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp10_ = spreadsheet_parser_grammar_token (self, "cell-name", 78, &_tmp8_, &_tmp9_);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp11_ = g_new0 (gchar*, 0 + 1);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp12_ = _tmp11_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp12__length1 = 0;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp13_ = spreadsheet_parser_evaluator_new (&_tmp7_, _tmp10_, _tmp8_, _tmp9_, FALSE, _tmp12_, 0);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_init (&_tmp14_, G_TYPE_REGEX);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_set_boxed (&_tmp14_, _thread_safe_regex_init (&_tmp_regex_2, "\\(", 0));
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp17_ = spreadsheet_parser_grammar_token (self, "left-parenthese", 45, &_tmp15_, &_tmp16_);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp18_ = g_new0 (gchar*, 0 + 1);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp19_ = _tmp18_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp19__length1 = 0;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp20_ = spreadsheet_parser_evaluator_new (&_tmp14_, _tmp17_, _tmp15_, _tmp16_, FALSE, _tmp19_, 0);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_init (&_tmp21_, G_TYPE_REGEX);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_set_boxed (&_tmp21_, _thread_safe_regex_init (&_tmp_regex_3, "\\)", 0));
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp24_ = spreadsheet_parser_grammar_token (self, "right-parenthese", 77, &_tmp22_, &_tmp23_);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp25_ = g_new0 (gchar*, 0 + 1);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp26_ = _tmp25_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp26__length1 = 0;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp27_ = spreadsheet_parser_evaluator_new (&_tmp21_, _tmp24_, _tmp22_, _tmp23_, FALSE, _tmp26_, 0);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_init (&_tmp28_, G_TYPE_REGEX);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_set_boxed (&_tmp28_, _thread_safe_regex_init (&_tmp_regex_4, ",", 0));
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp31_ = spreadsheet_parser_grammar_token (self, "comma", 3, &_tmp29_, &_tmp30_);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp32_ = g_new0 (gchar*, 0 + 1);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp33_ = _tmp32_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp33__length1 = 0;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp34_ = spreadsheet_parser_evaluator_new (&_tmp28_, _tmp31_, _tmp29_, _tmp30_, FALSE, _tmp33_, 0);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_init (&_tmp35_, G_TYPE_REGEX);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_value_set_boxed (&_tmp35_, _thread_safe_regex_init (&_tmp_regex_5, ":", 0));
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp38_ = spreadsheet_parser_grammar_token (self, "colon", 6, &_tmp36_, &_tmp37_);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp39_ = g_new0 (gchar*, 0 + 1);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp40_ = _tmp39_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp40__length1 = 0;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp41_ = spreadsheet_parser_evaluator_new (&_tmp35_, _tmp38_, _tmp36_, _tmp37_, FALSE, _tmp40_, 0);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp42_ = g_new0 (SpreadsheetParserEvaluator*, 6 + 1);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp42_[0] = _tmp6_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp42_[1] = _tmp13_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp42_[2] = _tmp20_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp42_[3] = _tmp27_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp42_[4] = _tmp34_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp42_[5] = _tmp41_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp43_ = gee_array_list_new_wrap (SPREADSHEET_PARSER_TYPE_EVALUATOR, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp42_, 6, NULL, NULL, NULL);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp44_ = _tmp43_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp40_ = (_vala_array_free (_tmp40_, _tmp40__length1, (GDestroyNotify) g_free), NULL);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_IS_VALUE (&_tmp35_) ? (g_value_unset (&_tmp35_), NULL) : NULL;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp33_ = (_vala_array_free (_tmp33_, _tmp33__length1, (GDestroyNotify) g_free), NULL);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_IS_VALUE (&_tmp28_) ? (g_value_unset (&_tmp28_), NULL) : NULL;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp26_ = (_vala_array_free (_tmp26_, _tmp26__length1, (GDestroyNotify) g_free), NULL);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_IS_VALUE (&_tmp21_) ? (g_value_unset (&_tmp21_), NULL) : NULL;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp19_ = (_vala_array_free (_tmp19_, _tmp19__length1, (GDestroyNotify) g_free), NULL);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_IS_VALUE (&_tmp14_) ? (g_value_unset (&_tmp14_), NULL) : NULL;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp12_ = (_vala_array_free (_tmp12_, _tmp12__length1, (GDestroyNotify) g_free), NULL);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_IS_VALUE (&_tmp7_) ? (g_value_unset (&_tmp7_), NULL) : NULL;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp5_ = (_vala_array_free (_tmp5_, _tmp5__length1, (GDestroyNotify) g_free), NULL);
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_IS_VALUE (&_tmp0_) ? (g_value_unset (&_tmp0_), NULL) : NULL;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	result = _tmp44_;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return result;
#line 341 "grammar.c"
}


static Block2Data* block2_data_ref (Block2Data* _data2_) {
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_atomic_int_inc (&_data2_->_ref_count_);
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return _data2_;
#line 350 "grammar.c"
}


static void block2_data_unref (void * _userdata_) {
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
#line 359 "grammar.c"
		SpreadsheetParserGrammar* self;
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		self = _data2_->self;
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		_g_free0 (_data2_->type);
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		_g_object_unref0 (self);
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		g_slice_free (Block2Data, _data2_);
#line 369 "grammar.c"
	}
}


static SpreadsheetParserToken* __lambda11_ (Block2Data* _data2_, const gchar* m) {
	SpreadsheetParserGrammar* self;
	SpreadsheetParserToken* result = NULL;
	const gchar* _tmp0_ = NULL;
	SpreadsheetParserToken* _tmp1_ = NULL;
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	self = _data2_->self;
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_return_val_if_fail (m != NULL, NULL);
#line 31 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp0_ = m;
#line 31 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp1_ = spreadsheet_parser_token_new (_data2_->type, _tmp0_);
#line 31 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	result = _tmp1_;
#line 31 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return result;
#line 391 "grammar.c"
}


static SpreadsheetParserToken* ___lambda11__spreadsheet_parser_evaluation (const gchar* match, gpointer self) {
	SpreadsheetParserToken* result;
	result = __lambda11_ (self, match);
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return result;
#line 400 "grammar.c"
}


static SpreadsheetParserEvaluation spreadsheet_parser_grammar_token (SpreadsheetParserGrammar* self, const gchar* t, gint x, void** result_target, GDestroyNotify* result_target_destroy_notify) {
	SpreadsheetParserEvaluation result = NULL;
	Block2Data* _data2_;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	SpreadsheetParserEvaluation _tmp2_ = NULL;
	void* _tmp2__target = NULL;
	GDestroyNotify _tmp2__target_destroy_notify = NULL;
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_return_val_if_fail (t != NULL, NULL);
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_data2_ = g_slice_new0 (Block2Data);
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_data2_->_ref_count_ = 1;
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_data2_->self = g_object_ref (self);
#line 29 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp0_ = t;
#line 29 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 29 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_data2_->type = _tmp1_;
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp2_ = ___lambda11__spreadsheet_parser_evaluation;
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp2__target = block2_data_ref (_data2_);
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp2__target_destroy_notify = block2_data_unref;
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	*result_target = _tmp2__target;
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	*result_target_destroy_notify = _tmp2__target_destroy_notify;
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	result = _tmp2_;
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	block2_data_unref (_data2_);
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_data2_ = NULL;
#line 30 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return result;
#line 446 "grammar.c"
}


GeeHashMap* spreadsheet_parser_grammar_get_rules (SpreadsheetParserGrammar* self) {
	GeeHashMap* result;
	GeeHashMap* _tmp0_ = NULL;
#line 8 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 8 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp0_ = self->priv->_rules;
#line 8 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	result = _tmp0_;
#line 8 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return result;
#line 461 "grammar.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 9 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	return self ? g_object_ref (self) : NULL;
#line 468 "grammar.c"
}


void spreadsheet_parser_grammar_set_rules (SpreadsheetParserGrammar* self, GeeHashMap* value) {
	GeeHashMap* _tmp0_ = NULL;
	GeeHashMap* _tmp1_ = NULL;
#line 9 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_return_if_fail (self != NULL);
#line 9 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp0_ = value;
#line 9 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 9 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_g_object_unref0 (self->priv->_rules);
#line 9 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	self->priv->_rules = _tmp1_;
#line 9 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_object_notify ((GObject *) self, "rules");
#line 487 "grammar.c"
}


static void spreadsheet_parser_grammar_class_init (SpreadsheetParserGrammarClass * klass) {
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	spreadsheet_parser_grammar_parent_class = g_type_class_peek_parent (klass);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_type_class_add_private (klass, sizeof (SpreadsheetParserGrammarPrivate));
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_spreadsheet_parser_grammar_get_property;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_spreadsheet_parser_grammar_set_property;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_OBJECT_CLASS (klass)->finalize = spreadsheet_parser_grammar_finalize;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SPREADSHEET_PARSER_GRAMMAR_RULES, g_param_spec_object ("rules", "rules", "rules", GEE_TYPE_HASH_MAP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 504 "grammar.c"
}


static void spreadsheet_parser_grammar_instance_init (SpreadsheetParserGrammar * self) {
	GeeHashMap* _tmp0_ = NULL;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	self->priv = SPREADSHEET_PARSER_GRAMMAR_GET_PRIVATE (self);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_tmp0_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, GEE_TYPE_ARRAY_LIST, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	self->priv->_rules = _tmp0_;
#line 516 "grammar.c"
}


static void spreadsheet_parser_grammar_finalize (GObject* obj) {
	SpreadsheetParserGrammar * self;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammar);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	_g_object_unref0 (self->priv->_rules);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	G_OBJECT_CLASS (spreadsheet_parser_grammar_parent_class)->finalize (obj);
#line 528 "grammar.c"
}


GType spreadsheet_parser_grammar_get_type (void) {
	static volatile gsize spreadsheet_parser_grammar_type_id__volatile = 0;
	if (g_once_init_enter (&spreadsheet_parser_grammar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SpreadsheetParserGrammarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) spreadsheet_parser_grammar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SpreadsheetParserGrammar), 0, (GInstanceInitFunc) spreadsheet_parser_grammar_instance_init, NULL };
		GType spreadsheet_parser_grammar_type_id;
		spreadsheet_parser_grammar_type_id = g_type_register_static (G_TYPE_OBJECT, "SpreadsheetParserGrammar", &g_define_type_info, 0);
		g_once_init_leave (&spreadsheet_parser_grammar_type_id__volatile, spreadsheet_parser_grammar_type_id);
	}
	return spreadsheet_parser_grammar_type_id__volatile;
}


static void _vala_spreadsheet_parser_grammar_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SpreadsheetParserGrammar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammar);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	switch (property_id) {
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		case SPREADSHEET_PARSER_GRAMMAR_RULES:
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		g_value_set_object (value, spreadsheet_parser_grammar_get_rules (self));
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		break;
#line 555 "grammar.c"
		default:
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		break;
#line 561 "grammar.c"
	}
}


static void _vala_spreadsheet_parser_grammar_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	SpreadsheetParserGrammar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammar);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
	switch (property_id) {
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		case SPREADSHEET_PARSER_GRAMMAR_RULES:
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		spreadsheet_parser_grammar_set_rules (self, g_value_get_object (value));
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		break;
#line 577 "grammar.c"
		default:
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/grammar.vala"
		break;
#line 583 "grammar.c"
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



