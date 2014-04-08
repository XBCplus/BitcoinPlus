// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2014  The BitcoinPlus developer
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BitcoinPlus_INIT_H
#define BitcoinPlus_INIT_H

#include "wallet.h"

extern CWallet* pwalletMain;

void StartShutdown();
void Shutdown(void* parg);
bool AppInit2();
std::string HelpMessage();

#endif
