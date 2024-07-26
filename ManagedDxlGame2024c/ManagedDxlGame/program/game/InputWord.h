#pragma once

using namespace std;
class InputWord {
	InputWord() = default;
	char* input_field;
	char current_input;
	void Update();
	void Draw();
};