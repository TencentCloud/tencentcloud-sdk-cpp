/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/waf/v20180125/model/PeakPointsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

PeakPointsItem::PeakPointsItem() :
    m_timeHasBeenSet(false),
    m_accessHasBeenSet(false),
    m_upHasBeenSet(false),
    m_downHasBeenSet(false),
    m_attackHasBeenSet(false),
    m_ccHasBeenSet(false),
    m_botAccessHasBeenSet(false),
    m_statusServerErrorHasBeenSet(false),
    m_statusClientErrorHasBeenSet(false),
    m_statusRedirectHasBeenSet(false),
    m_statusOkHasBeenSet(false),
    m_upstreamServerErrorHasBeenSet(false),
    m_upstreamClientErrorHasBeenSet(false),
    m_upstreamRedirectHasBeenSet(false),
    m_blackIPHasBeenSet(false),
    m_tamperHasBeenSet(false),
    m_leakHasBeenSet(false),
    m_aCLHasBeenSet(false),
    m_wxAccessHasBeenSet(false),
    m_wxCountHasBeenSet(false),
    m_wxUpHasBeenSet(false),
    m_wxDownHasBeenSet(false)
{
}

CoreInternalOutcome PeakPointsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.Time` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetUint64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Access") && !value["Access"].IsNull())
    {
        if (!value["Access"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.Access` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_access = value["Access"].GetUint64();
        m_accessHasBeenSet = true;
    }

    if (value.HasMember("Up") && !value["Up"].IsNull())
    {
        if (!value["Up"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.Up` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_up = value["Up"].GetUint64();
        m_upHasBeenSet = true;
    }

    if (value.HasMember("Down") && !value["Down"].IsNull())
    {
        if (!value["Down"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.Down` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_down = value["Down"].GetUint64();
        m_downHasBeenSet = true;
    }

    if (value.HasMember("Attack") && !value["Attack"].IsNull())
    {
        if (!value["Attack"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.Attack` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attack = value["Attack"].GetUint64();
        m_attackHasBeenSet = true;
    }

    if (value.HasMember("Cc") && !value["Cc"].IsNull())
    {
        if (!value["Cc"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.Cc` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cc = value["Cc"].GetUint64();
        m_ccHasBeenSet = true;
    }

    if (value.HasMember("BotAccess") && !value["BotAccess"].IsNull())
    {
        if (!value["BotAccess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.BotAccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_botAccess = value["BotAccess"].GetUint64();
        m_botAccessHasBeenSet = true;
    }

    if (value.HasMember("StatusServerError") && !value["StatusServerError"].IsNull())
    {
        if (!value["StatusServerError"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.StatusServerError` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statusServerError = value["StatusServerError"].GetUint64();
        m_statusServerErrorHasBeenSet = true;
    }

    if (value.HasMember("StatusClientError") && !value["StatusClientError"].IsNull())
    {
        if (!value["StatusClientError"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.StatusClientError` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statusClientError = value["StatusClientError"].GetUint64();
        m_statusClientErrorHasBeenSet = true;
    }

    if (value.HasMember("StatusRedirect") && !value["StatusRedirect"].IsNull())
    {
        if (!value["StatusRedirect"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.StatusRedirect` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statusRedirect = value["StatusRedirect"].GetUint64();
        m_statusRedirectHasBeenSet = true;
    }

    if (value.HasMember("StatusOk") && !value["StatusOk"].IsNull())
    {
        if (!value["StatusOk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.StatusOk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statusOk = value["StatusOk"].GetUint64();
        m_statusOkHasBeenSet = true;
    }

    if (value.HasMember("UpstreamServerError") && !value["UpstreamServerError"].IsNull())
    {
        if (!value["UpstreamServerError"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.UpstreamServerError` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamServerError = value["UpstreamServerError"].GetUint64();
        m_upstreamServerErrorHasBeenSet = true;
    }

    if (value.HasMember("UpstreamClientError") && !value["UpstreamClientError"].IsNull())
    {
        if (!value["UpstreamClientError"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.UpstreamClientError` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamClientError = value["UpstreamClientError"].GetUint64();
        m_upstreamClientErrorHasBeenSet = true;
    }

    if (value.HasMember("UpstreamRedirect") && !value["UpstreamRedirect"].IsNull())
    {
        if (!value["UpstreamRedirect"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.UpstreamRedirect` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamRedirect = value["UpstreamRedirect"].GetUint64();
        m_upstreamRedirectHasBeenSet = true;
    }

    if (value.HasMember("BlackIP") && !value["BlackIP"].IsNull())
    {
        if (!value["BlackIP"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.BlackIP` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blackIP = value["BlackIP"].GetUint64();
        m_blackIPHasBeenSet = true;
    }

    if (value.HasMember("Tamper") && !value["Tamper"].IsNull())
    {
        if (!value["Tamper"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.Tamper` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tamper = value["Tamper"].GetUint64();
        m_tamperHasBeenSet = true;
    }

    if (value.HasMember("Leak") && !value["Leak"].IsNull())
    {
        if (!value["Leak"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.Leak` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leak = value["Leak"].GetUint64();
        m_leakHasBeenSet = true;
    }

    if (value.HasMember("ACL") && !value["ACL"].IsNull())
    {
        if (!value["ACL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.ACL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aCL = value["ACL"].GetUint64();
        m_aCLHasBeenSet = true;
    }

    if (value.HasMember("WxAccess") && !value["WxAccess"].IsNull())
    {
        if (!value["WxAccess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.WxAccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wxAccess = value["WxAccess"].GetUint64();
        m_wxAccessHasBeenSet = true;
    }

    if (value.HasMember("WxCount") && !value["WxCount"].IsNull())
    {
        if (!value["WxCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.WxCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wxCount = value["WxCount"].GetUint64();
        m_wxCountHasBeenSet = true;
    }

    if (value.HasMember("WxUp") && !value["WxUp"].IsNull())
    {
        if (!value["WxUp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.WxUp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wxUp = value["WxUp"].GetUint64();
        m_wxUpHasBeenSet = true;
    }

    if (value.HasMember("WxDown") && !value["WxDown"].IsNull())
    {
        if (!value["WxDown"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakPointsItem.WxDown` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wxDown = value["WxDown"].GetUint64();
        m_wxDownHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeakPointsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_accessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Access";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_access, allocator);
    }

    if (m_upHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Up";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_up, allocator);
    }

    if (m_downHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Down";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_down, allocator);
    }

    if (m_attackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attack, allocator);
    }

    if (m_ccHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cc, allocator);
    }

    if (m_botAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botAccess, allocator);
    }

    if (m_statusServerErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusServerError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusServerError, allocator);
    }

    if (m_statusClientErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusClientError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusClientError, allocator);
    }

    if (m_statusRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusRedirect, allocator);
    }

    if (m_statusOkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusOk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusOk, allocator);
    }

    if (m_upstreamServerErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamServerError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upstreamServerError, allocator);
    }

    if (m_upstreamClientErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamClientError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upstreamClientError, allocator);
    }

    if (m_upstreamRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upstreamRedirect, allocator);
    }

    if (m_blackIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blackIP, allocator);
    }

    if (m_tamperHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tamper";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tamper, allocator);
    }

    if (m_leakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Leak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leak, allocator);
    }

    if (m_aCLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aCL, allocator);
    }

    if (m_wxAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wxAccess, allocator);
    }

    if (m_wxCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wxCount, allocator);
    }

    if (m_wxUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wxUp, allocator);
    }

    if (m_wxDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wxDown, allocator);
    }

}


uint64_t PeakPointsItem::GetTime() const
{
    return m_time;
}

void PeakPointsItem::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool PeakPointsItem::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t PeakPointsItem::GetAccess() const
{
    return m_access;
}

void PeakPointsItem::SetAccess(const uint64_t& _access)
{
    m_access = _access;
    m_accessHasBeenSet = true;
}

bool PeakPointsItem::AccessHasBeenSet() const
{
    return m_accessHasBeenSet;
}

uint64_t PeakPointsItem::GetUp() const
{
    return m_up;
}

void PeakPointsItem::SetUp(const uint64_t& _up)
{
    m_up = _up;
    m_upHasBeenSet = true;
}

bool PeakPointsItem::UpHasBeenSet() const
{
    return m_upHasBeenSet;
}

uint64_t PeakPointsItem::GetDown() const
{
    return m_down;
}

void PeakPointsItem::SetDown(const uint64_t& _down)
{
    m_down = _down;
    m_downHasBeenSet = true;
}

bool PeakPointsItem::DownHasBeenSet() const
{
    return m_downHasBeenSet;
}

uint64_t PeakPointsItem::GetAttack() const
{
    return m_attack;
}

void PeakPointsItem::SetAttack(const uint64_t& _attack)
{
    m_attack = _attack;
    m_attackHasBeenSet = true;
}

bool PeakPointsItem::AttackHasBeenSet() const
{
    return m_attackHasBeenSet;
}

uint64_t PeakPointsItem::GetCc() const
{
    return m_cc;
}

void PeakPointsItem::SetCc(const uint64_t& _cc)
{
    m_cc = _cc;
    m_ccHasBeenSet = true;
}

bool PeakPointsItem::CcHasBeenSet() const
{
    return m_ccHasBeenSet;
}

uint64_t PeakPointsItem::GetBotAccess() const
{
    return m_botAccess;
}

void PeakPointsItem::SetBotAccess(const uint64_t& _botAccess)
{
    m_botAccess = _botAccess;
    m_botAccessHasBeenSet = true;
}

bool PeakPointsItem::BotAccessHasBeenSet() const
{
    return m_botAccessHasBeenSet;
}

uint64_t PeakPointsItem::GetStatusServerError() const
{
    return m_statusServerError;
}

void PeakPointsItem::SetStatusServerError(const uint64_t& _statusServerError)
{
    m_statusServerError = _statusServerError;
    m_statusServerErrorHasBeenSet = true;
}

bool PeakPointsItem::StatusServerErrorHasBeenSet() const
{
    return m_statusServerErrorHasBeenSet;
}

uint64_t PeakPointsItem::GetStatusClientError() const
{
    return m_statusClientError;
}

void PeakPointsItem::SetStatusClientError(const uint64_t& _statusClientError)
{
    m_statusClientError = _statusClientError;
    m_statusClientErrorHasBeenSet = true;
}

bool PeakPointsItem::StatusClientErrorHasBeenSet() const
{
    return m_statusClientErrorHasBeenSet;
}

uint64_t PeakPointsItem::GetStatusRedirect() const
{
    return m_statusRedirect;
}

void PeakPointsItem::SetStatusRedirect(const uint64_t& _statusRedirect)
{
    m_statusRedirect = _statusRedirect;
    m_statusRedirectHasBeenSet = true;
}

bool PeakPointsItem::StatusRedirectHasBeenSet() const
{
    return m_statusRedirectHasBeenSet;
}

uint64_t PeakPointsItem::GetStatusOk() const
{
    return m_statusOk;
}

void PeakPointsItem::SetStatusOk(const uint64_t& _statusOk)
{
    m_statusOk = _statusOk;
    m_statusOkHasBeenSet = true;
}

bool PeakPointsItem::StatusOkHasBeenSet() const
{
    return m_statusOkHasBeenSet;
}

uint64_t PeakPointsItem::GetUpstreamServerError() const
{
    return m_upstreamServerError;
}

void PeakPointsItem::SetUpstreamServerError(const uint64_t& _upstreamServerError)
{
    m_upstreamServerError = _upstreamServerError;
    m_upstreamServerErrorHasBeenSet = true;
}

bool PeakPointsItem::UpstreamServerErrorHasBeenSet() const
{
    return m_upstreamServerErrorHasBeenSet;
}

uint64_t PeakPointsItem::GetUpstreamClientError() const
{
    return m_upstreamClientError;
}

void PeakPointsItem::SetUpstreamClientError(const uint64_t& _upstreamClientError)
{
    m_upstreamClientError = _upstreamClientError;
    m_upstreamClientErrorHasBeenSet = true;
}

bool PeakPointsItem::UpstreamClientErrorHasBeenSet() const
{
    return m_upstreamClientErrorHasBeenSet;
}

uint64_t PeakPointsItem::GetUpstreamRedirect() const
{
    return m_upstreamRedirect;
}

void PeakPointsItem::SetUpstreamRedirect(const uint64_t& _upstreamRedirect)
{
    m_upstreamRedirect = _upstreamRedirect;
    m_upstreamRedirectHasBeenSet = true;
}

bool PeakPointsItem::UpstreamRedirectHasBeenSet() const
{
    return m_upstreamRedirectHasBeenSet;
}

uint64_t PeakPointsItem::GetBlackIP() const
{
    return m_blackIP;
}

void PeakPointsItem::SetBlackIP(const uint64_t& _blackIP)
{
    m_blackIP = _blackIP;
    m_blackIPHasBeenSet = true;
}

bool PeakPointsItem::BlackIPHasBeenSet() const
{
    return m_blackIPHasBeenSet;
}

uint64_t PeakPointsItem::GetTamper() const
{
    return m_tamper;
}

void PeakPointsItem::SetTamper(const uint64_t& _tamper)
{
    m_tamper = _tamper;
    m_tamperHasBeenSet = true;
}

bool PeakPointsItem::TamperHasBeenSet() const
{
    return m_tamperHasBeenSet;
}

uint64_t PeakPointsItem::GetLeak() const
{
    return m_leak;
}

void PeakPointsItem::SetLeak(const uint64_t& _leak)
{
    m_leak = _leak;
    m_leakHasBeenSet = true;
}

bool PeakPointsItem::LeakHasBeenSet() const
{
    return m_leakHasBeenSet;
}

uint64_t PeakPointsItem::GetACL() const
{
    return m_aCL;
}

void PeakPointsItem::SetACL(const uint64_t& _aCL)
{
    m_aCL = _aCL;
    m_aCLHasBeenSet = true;
}

bool PeakPointsItem::ACLHasBeenSet() const
{
    return m_aCLHasBeenSet;
}

uint64_t PeakPointsItem::GetWxAccess() const
{
    return m_wxAccess;
}

void PeakPointsItem::SetWxAccess(const uint64_t& _wxAccess)
{
    m_wxAccess = _wxAccess;
    m_wxAccessHasBeenSet = true;
}

bool PeakPointsItem::WxAccessHasBeenSet() const
{
    return m_wxAccessHasBeenSet;
}

uint64_t PeakPointsItem::GetWxCount() const
{
    return m_wxCount;
}

void PeakPointsItem::SetWxCount(const uint64_t& _wxCount)
{
    m_wxCount = _wxCount;
    m_wxCountHasBeenSet = true;
}

bool PeakPointsItem::WxCountHasBeenSet() const
{
    return m_wxCountHasBeenSet;
}

uint64_t PeakPointsItem::GetWxUp() const
{
    return m_wxUp;
}

void PeakPointsItem::SetWxUp(const uint64_t& _wxUp)
{
    m_wxUp = _wxUp;
    m_wxUpHasBeenSet = true;
}

bool PeakPointsItem::WxUpHasBeenSet() const
{
    return m_wxUpHasBeenSet;
}

uint64_t PeakPointsItem::GetWxDown() const
{
    return m_wxDown;
}

void PeakPointsItem::SetWxDown(const uint64_t& _wxDown)
{
    m_wxDown = _wxDown;
    m_wxDownHasBeenSet = true;
}

bool PeakPointsItem::WxDownHasBeenSet() const
{
    return m_wxDownHasBeenSet;
}

