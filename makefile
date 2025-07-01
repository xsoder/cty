default: 
	cc -Iraylib/include/ -Lraylib/lib -o main cty.c -l:libraylib.a -lm
