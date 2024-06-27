// SPDX-FileCopyrightText: 2024 Filipe Coelho <falktx@darkglass.com>
// SPDX-License-Identifier: ISC

#include "input.hpp"

// --------------------------------------------------------------------------------------------------------------------

Input* createNewInput_LibInput();

// --------------------------------------------------------------------------------------------------------------------

Input* createNewInput(const InputType itype)
{
    switch (itype)
    {
    case kInputTypeNull:
        return nullptr;
    case kInputTypeLibInput:
        return createNewInput_LibInput();
    }

    return nullptr;
}

// --------------------------------------------------------------------------------------------------------------------
