#pragma once
#include "cocos2d.h"
#include "Singleton.h"
USING_NS_CC;
class UIUtil : public Singleton<UIUtil>
{
public:
	friend class Singleton<UIUtil>;
	Size getAdaptiveSize(Size origin, Size canvaSize);//���ߴ����䵽������
};

