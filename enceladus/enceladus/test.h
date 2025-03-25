#pragma once
#include "raylib.h"
#include <string>
#include <vector>
using namespace std;

enum TestWindow
{
	QUESTION1,
	QUESTION2,
	QUESTION3,
	ENDRESULT
};
class Test
{
public:
	Test(int answer1, int answer2, int answer3);
	Test();
	void Reset();
	void addQuestion(string question, vector<string>answer);
	void Draw();
	void Update();
	bool isButtonPressed(Rectangle Button);
private:
	int points;
	int correctAnswer1;
	int correctAnswer2;
	int correctAnswer3;
	string questions[3];
	string answers[3][4];
	TestWindow testStates;
	Rectangle Background;
	Rectangle EndBackground;
	Rectangle answersButtons[4] = {
	{ 100, 200, 200, 75 },
	{ 500, 200, 200, 100 },
	{ 100, 700, 200, 100 },
	{ 500, 700, 200, 100 }
	};
};