#include "InputWord.h"
#include "../dxlib_ext/dxlib_ext.h"

void InputWord::Update() {
	*(input_field + 1) = ' ';

	/*tnl::Input::RunIndexKeyDown([&](uint32_t index){

		},
		eKeys::KB_A
		); */
}

void InputWord::Draw() {
	DrawStringEx(0, 100, -1, input_field);
}