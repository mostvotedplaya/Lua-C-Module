# Lua-C-Module
An example of a lua 5.1 module built in C.

This is not a real module for lua but mainly here for me to remember how to create modules for Lua.

# Installation
make
make install

# Usage
```
local example = require( "example" )
print(example.addition( 10, 10 ))

--[[
Test error.
print(example.addition( "", "" ))
]]--
