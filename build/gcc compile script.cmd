windres -i "LogisimLauncher.rc" -o "LogisimLauncher.o"
gcc -mwindows "LogisimLauncher.c" "LogisimLauncher.o" -o "..\LogisimLauncher.exe"
pause
cd "..\"
".\LogisimLauncher.exe"
