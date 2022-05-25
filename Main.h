#pragma once

#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include "DXP.Interfaces.h"

using namespace DXP;

/*.................................................................................................*/
HRESULT _stdcall PluginFactory(IClient * const AClient, IServerModule * * AServerMoudle);
/*.................................................................................................*/

#endif // MAIN_H_INCLUDED
