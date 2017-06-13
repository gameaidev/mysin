#include "library.h"

#include <stdio.h>
#include <math.h>
#include <lua.h>

static int l_sin (lua_State *L);

int luaopen_mysin (lua_State *L) {

    lua_pushcfunction(L, l_sin);
    lua_setglobal(L, "mysin");

    return 1;
}

static int l_sin (lua_State *L) {
    double d = lua_tonumber(L, 1);  // get argument
    // double d = luaL_checknumber(L, 1);

    lua_pushnumber(L, sin(d));  // push result value

    return 1;  /* number of results */
}

