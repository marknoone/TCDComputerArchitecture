#pragma once

//
// fib32.h
//
// Copyright (C) 2012 - 2017 jones@scss.tcd.ie
//
// example of mixing C++ and IA32 assembly language
//

//
// NB: "extern C" to avoid procedure name mangling by compiler
//

extern "C" int _cdecl min(int, int, int);   // _cdecl calling convention
extern "C" int _cdecl p(int, int, int, int);   // _cdecl calling convention
extern "C" int _cdecl gcd(int, int);   // _cdecl calling convention
extern "C" int _cdecl modulus(int, int);   // _cdecl calling convention

// eof