-- premake5.lua
workspace "JTracer"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "JTracer"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
include "Walnut/WalnutExternal.lua"

include "JTracer"