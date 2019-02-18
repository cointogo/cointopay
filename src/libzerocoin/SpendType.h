// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2018 The HUZU developers
// Copyright (c) 2018-2019 The ZIJA developers
// Copyright (c) 2019 The 2PAY developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZIJA_SPENDTYPE_H
#define ZIJA_SPENDTYPE_H

#include <cstdint>

namespace libzerocoin {
    enum SpendType : uint8_t {
        SPEND, // Used for a typical spend transaction, z2PAY should be unusable after
        STAKE, // Used for a spend that occurs as a stake
        MN_COLLATERAL, // Used when proving ownership of z2PAY that will be used for masternodes (future)
        SIGN_MESSAGE // Used to sign messages that do not belong above (future)
    };
}

#endif //ZIJA_SPENDTYPE_H
