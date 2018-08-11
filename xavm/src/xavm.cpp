#include <stdio.h>

#include <src/lang/Parser.h>

int main(int argc, char* args[]){

	const wchar_t *fileName = L"C:/Xhi/dev/project/xart/xavm/sample.xalang";
	xalang_parser::Scanner scanner(fileName);
	xalang_parser::Parser parser(&scanner);
	parser.Parse();

	auto& err = parser.errors;
	if (err->count == 0) {
		// do stuff
		parser.root.run();
	}


	getchar();
	return 0;
}