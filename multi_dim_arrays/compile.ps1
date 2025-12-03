$main_in =  $(Join-Path $PSScriptRoot  "main.c")
$main_out =  $(Join-Path $PSScriptRoot  "Main")
& ccc -Wall $main_in -o $main_out