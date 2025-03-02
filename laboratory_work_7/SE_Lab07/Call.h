#pragma once

namespace Call {
    extern "C" {
        int __cdecl cdec(int a, int b, int c);
        int __stdcall cstd(int& a, int b, int c);
        int __fastcall cfst(int a, int b, int c, int d);
    }
}