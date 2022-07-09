make:
	@clear
	@clang++ -std=c++11 -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL lib/raylib/src/libraylib.a src/main.cpp -o builds/Pong
	@builds/Pong
