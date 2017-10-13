#pragma once
#include "Element.h"
#include "Menu.h"

class UISystem :    public Element
{
public:
    UISystem();
    ~UISystem();

    MenuText* title_ = nullptr;

    virtual void onPressedOK() override;
};

