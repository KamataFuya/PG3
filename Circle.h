#pragma once
#include "IShape.h"

/// <summary>
/// �h���N���X
/// </summary>
class Circle : public IShape {
public:
	void size() override;
	void draw() override;
};
