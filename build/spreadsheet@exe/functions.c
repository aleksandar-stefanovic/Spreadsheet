/* functions.c generated by valac 0.34.7, the Vala compiler
 * generated from functions.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>




void spreadsheet_functions_sum (GValue* args, int args_length1, GValue* result);


void spreadsheet_functions_sum (GValue* args, int args_length1, GValue* result) {
	gint res = 0;
	GValue* _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	GValue _tmp9_ = {0};
#line 3 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
	res = 0;
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
	_tmp0_ = args;
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
	_tmp0__length1 = args_length1;
#line 28 "functions.c"
	{
		GValue* num_collection = NULL;
		gint num_collection_length1 = 0;
		gint _num_collection_size_ = 0;
		gint num_it = 0;
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
		num_collection = _tmp0_;
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
		num_collection_length1 = _tmp0__length1;
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
		for (num_it = 0; num_it < _tmp0__length1; num_it = num_it + 1) {
#line 40 "functions.c"
			GValue _tmp1_ = {0};
			GValue num = {0};
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
			if (G_IS_VALUE (&num_collection[num_it])) {
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
				g_value_init (&_tmp1_, G_VALUE_TYPE (&num_collection[num_it]));
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
				g_value_copy (&num_collection[num_it], &_tmp1_);
#line 49 "functions.c"
			} else {
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
				_tmp1_ = num_collection[num_it];
#line 53 "functions.c"
			}
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
			num = _tmp1_;
#line 57 "functions.c"
			{
				GType _tmp2_ = 0UL;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
				_tmp2_ = G_VALUE_TYPE (&num);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
				if (_tmp2_ == G_TYPE_INT) {
#line 64 "functions.c"
					gint _tmp3_ = 0;
					GValue _tmp4_ = {0};
#line 6 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
					_tmp3_ = res;
#line 6 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
					_tmp4_ = num;
#line 6 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
					res = _tmp3_ + g_value_get_int (&_tmp4_);
#line 73 "functions.c"
				} else {
					GType _tmp5_ = 0UL;
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
					_tmp5_ = G_VALUE_TYPE (&num);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
					if (_tmp5_ == G_TYPE_STRING) {
#line 80 "functions.c"
						gint _tmp6_ = 0;
						GValue _tmp7_ = {0};
						gint _tmp8_ = 0;
#line 8 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
						_tmp6_ = res;
#line 8 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
						_tmp7_ = num;
#line 8 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
						_tmp8_ = atoi (g_value_get_string (&_tmp7_));
#line 8 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
						res = _tmp6_ + _tmp8_;
#line 92 "functions.c"
					}
				}
#line 4 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
				G_IS_VALUE (&num) ? (g_value_unset (&num), NULL) : NULL;
#line 97 "functions.c"
			}
		}
	}
#line 11 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
	g_value_init (&_tmp9_, G_TYPE_INT);
#line 11 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
	g_value_set_int (&_tmp9_, res);
#line 11 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
	*result = _tmp9_;
#line 11 "/home/baptiste/Code/Vala/Spreadsheet/src/functions.vala"
	return;
#line 109 "functions.c"
}



