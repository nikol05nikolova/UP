@echo off
setlocal enabledelayedexpansion

REM Loop through numbers 1 to 50
for /L %%X in (1,1,50) do (
    REM Set the number with and without leading zero
    set "num=%%X"
    if %%X LSS 10 (
        set "num_padded=0%%X"
    ) else (
        set "num_padded=%%X"
    )

    REM Rename files matching zadXX.cpp or ZadXX.cpp to TaskXX.cpp
    if exist "zad!num!.cpp" ren "zad!num!.cpp" "Task!num!.cpp"
    if exist "Zad!num!.cpp" ren "Zad!num!.cpp" "Task!num!.cpp"
    
    REM Check and rename files with padded numbers (e.g., zad01.cpp)
    if exist "zad!num_padded!.cpp" ren "zad!num_padded!.cpp" "Task!num_padded!.cpp"
    if exist "Zad!num_padded!.cpp" ren "Zad!num_padded!.cpp" "Task!num_padded!.cpp"
)

endlocal
