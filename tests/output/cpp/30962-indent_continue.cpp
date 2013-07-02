void function(int param1)
{
	int a;
	long double
	    b, c;

	param1 =
	    a + b;
	b
	        = (a + c)
	          * param1;
}

void function2(
    int param1,
    int param2)
{
	int a =
	    function(param1,
	             param2);
}

void function3(int param1, int param2)
{
	int c =
	    f(function(
	          param2));
	int d
	        = f(function2(param1,
	                      param2));
}

Class::Class(
    int param1,
    int param2)
	: local_(param1)
{
}

void func_with_def_args(int param1,
                        int param2 = 3,
                        Class param3 =
                            Class(1, 2),
                        Class param4
                                = Class(3, 4))
{
}
