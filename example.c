#include <lua.h>
#include <lauxlib.h>

/**
* Addition
*/
int addition( lua_State *L )
{
    if ( ! lua_isnumber( L, 1 ) )
    {
         return luaL_error( L, "Expecting first parameter to be typeof: number" );
    }

    if ( ! lua_isnumber( L, 2 ) )
    {
         return luaL_error( L, "Expecting second parameter to be typeof: number" );
    }

    int addition = lua_tonumber( L, 1 ) + lua_tonumber( L, 2 );
    lua_pushnumber( L, addition );
    return 1;
}

/**
* Multiply
*/
int multiply( lua_State *L )
{
    if ( ! lua_isnumber( L, 1 ) )
    {
         return luaL_error( L, "Expecting first parameter to be typeof: number" );
    }

    if ( ! lua_isnumber( L, 2 ) )
    {
         return luaL_error( L, "Expecting second parameter to be typeof: number" );
    }
   
    int multiply = lua_tonumber( L, 1 ) * lua_tonumber( L, 2 );
    lua_pushnumber( L, multiply );
    return 1;
}

/**
* Define mappings.
*/
const struct luaL_reg R[] =
{
    {"addition",  addition},
    {"multiply",  multiply},
    {NULL,    NULL}
};

/**
* Register mappings.
*/
int luaopen_example( lua_State *L )
{
    luaL_openlib( L, "example", R, 0 );
    return 1;
}
