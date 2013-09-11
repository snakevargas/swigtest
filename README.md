swigtest
========

Compile order steps:

swig -go -intgosize 64 -c++ thingy.i
g++ -c -fpic thingy.C
g++ -c -fpic thingy_wrap.c
g++ -shared thingy.o thingy_wrap.o -o thingy.so
/usr/local/go/pkg/tool/darwin_amd64/6g thingy.go
/usr/local/go/pkg/tool/darwin_amd64/6c -I /usr/local/go/pkg/darwin_amd64/ thingy_gc.c
/usr/local/go/pkg/tool/darwin_amd64/pack grc thingy.a thingy.6 thingy_gc.6
/usr/local/go/pkg/tool/darwin_amd64/6g -I . run.go
/usr/local/go/pkg/tool/darwin_amd64/6l -L . run.6



