#pragma once

#include "../DLLmain.h"

namespace Inventory {
    void __stdcall GetBeltPos(int nIndex, int nMode, BeltBox *out, int nBox);
    void __stdcall GetBeltsTxtRecord(int nIndex, int nMode, BeltsTxt *out);
    void __stdcall GetInventorySize(int nRecord, int nScreenMode, InventorySize *pOutRect);
    void __stdcall GetInventoryGrid(int nRecord, int nScreenMode, InventoryGrid *pOut);
    void __stdcall GetInventoryField(int nRecord, int nScreenMode, InventoryLayout *pOut, int nField);
}