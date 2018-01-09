//
//  base16.cc
//  License++
//
//  Copyright © 2018-present Muflihun Labs
//

#include "src/external/Ripe.h"
#include "src/crypto/base16.h"

using namespace license;

std::string Base16::decode(const std::string& encoded)
{
    return Ripe::hexToString(encoded);
}

std::string Base16::encode(const std::string& raw)
{
    return Ripe::stringToHex(raw);
}
