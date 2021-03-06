#include <SDL.h>
#include <stdio.h>

#include <src/lang/Parser.h>

int main(int argc, char* args[]){

	const wchar_t *fileName = L"C:/Xhi/dev/project/xart/xavm/sample.xalang";
	xalang::Scanner scanner(fileName);
	xalang::Parser parser(&scanner);
	parser.Parse();

	auto& err = parser.errors;
	if (err->count == 0) {
		printf("ok!\n");
		// do stuff
	}

	wprintf(parser.code.name);

	getchar();
	return 0;
}