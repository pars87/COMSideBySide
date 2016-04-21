::@echo off

:: Check Admin rights:

net session >nul 2>&1

:: if NOT %errorlevel% == 0 (
::  echo This script needs Administrator privileges!
::) else (

  cd run\debug
  tlibimp.exe -P -Ha- -Hs- -Hr- -R- -Pt+ -D..\..\src -FtScInteropTest.pas ScInteropTest.tlb
  regasm.exe ScInteropTest.dll -tlb:ScInteropTest.tlb -unregister
  pause
  cd ..
  cd ..
::)