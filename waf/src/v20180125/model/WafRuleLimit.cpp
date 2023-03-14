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

#include <tencentcloud/waf/v20180125/model/WafRuleLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

WafRuleLimit::WafRuleLimit() :
    m_cCHasBeenSet(false),
    m_customRuleHasBeenSet(false),
    m_iPControlHasBeenSet(false),
    m_antiLeakHasBeenSet(false),
    m_antiTamperHasBeenSet(false),
    m_autoCCHasBeenSet(false),
    m_areaBanHasBeenSet(false),
    m_cCSessionHasBeenSet(false),
    m_aIHasBeenSet(false),
    m_customWhiteHasBeenSet(false),
    m_apiSecurityHasBeenSet(false),
    m_clientMsgHasBeenSet(false),
    m_trafficMarkingHasBeenSet(false)
{
}

CoreInternalOutcome WafRuleLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CC") && !value["CC"].IsNull())
    {
        if (!value["CC"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.CC` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cC = value["CC"].GetUint64();
        m_cCHasBeenSet = true;
    }

    if (value.HasMember("CustomRule") && !value["CustomRule"].IsNull())
    {
        if (!value["CustomRule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.CustomRule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customRule = value["CustomRule"].GetUint64();
        m_customRuleHasBeenSet = true;
    }

    if (value.HasMember("IPControl") && !value["IPControl"].IsNull())
    {
        if (!value["IPControl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.IPControl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iPControl = value["IPControl"].GetUint64();
        m_iPControlHasBeenSet = true;
    }

    if (value.HasMember("AntiLeak") && !value["AntiLeak"].IsNull())
    {
        if (!value["AntiLeak"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.AntiLeak` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiLeak = value["AntiLeak"].GetUint64();
        m_antiLeakHasBeenSet = true;
    }

    if (value.HasMember("AntiTamper") && !value["AntiTamper"].IsNull())
    {
        if (!value["AntiTamper"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.AntiTamper` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiTamper = value["AntiTamper"].GetUint64();
        m_antiTamperHasBeenSet = true;
    }

    if (value.HasMember("AutoCC") && !value["AutoCC"].IsNull())
    {
        if (!value["AutoCC"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.AutoCC` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoCC = value["AutoCC"].GetUint64();
        m_autoCCHasBeenSet = true;
    }

    if (value.HasMember("AreaBan") && !value["AreaBan"].IsNull())
    {
        if (!value["AreaBan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.AreaBan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_areaBan = value["AreaBan"].GetUint64();
        m_areaBanHasBeenSet = true;
    }

    if (value.HasMember("CCSession") && !value["CCSession"].IsNull())
    {
        if (!value["CCSession"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.CCSession` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCSession = value["CCSession"].GetUint64();
        m_cCSessionHasBeenSet = true;
    }

    if (value.HasMember("AI") && !value["AI"].IsNull())
    {
        if (!value["AI"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.AI` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aI = value["AI"].GetUint64();
        m_aIHasBeenSet = true;
    }

    if (value.HasMember("CustomWhite") && !value["CustomWhite"].IsNull())
    {
        if (!value["CustomWhite"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.CustomWhite` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customWhite = value["CustomWhite"].GetUint64();
        m_customWhiteHasBeenSet = true;
    }

    if (value.HasMember("ApiSecurity") && !value["ApiSecurity"].IsNull())
    {
        if (!value["ApiSecurity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.ApiSecurity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_apiSecurity = value["ApiSecurity"].GetUint64();
        m_apiSecurityHasBeenSet = true;
    }

    if (value.HasMember("ClientMsg") && !value["ClientMsg"].IsNull())
    {
        if (!value["ClientMsg"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.ClientMsg` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientMsg = value["ClientMsg"].GetUint64();
        m_clientMsgHasBeenSet = true;
    }

    if (value.HasMember("TrafficMarking") && !value["TrafficMarking"].IsNull())
    {
        if (!value["TrafficMarking"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafRuleLimit.TrafficMarking` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMarking = value["TrafficMarking"].GetUint64();
        m_trafficMarkingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafRuleLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cC, allocator);
    }

    if (m_customRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customRule, allocator);
    }

    if (m_iPControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPControl, allocator);
    }

    if (m_antiLeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiLeak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiLeak, allocator);
    }

    if (m_antiTamperHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiTamper";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiTamper, allocator);
    }

    if (m_autoCCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoCC, allocator);
    }

    if (m_areaBanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaBan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_areaBan, allocator);
    }

    if (m_cCSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCSession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCSession, allocator);
    }

    if (m_aIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aI, allocator);
    }

    if (m_customWhiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomWhite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customWhite, allocator);
    }

    if (m_apiSecurityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecurity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiSecurity, allocator);
    }

    if (m_clientMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientMsg, allocator);
    }

    if (m_trafficMarkingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMarking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficMarking, allocator);
    }

}


uint64_t WafRuleLimit::GetCC() const
{
    return m_cC;
}

void WafRuleLimit::SetCC(const uint64_t& _cC)
{
    m_cC = _cC;
    m_cCHasBeenSet = true;
}

bool WafRuleLimit::CCHasBeenSet() const
{
    return m_cCHasBeenSet;
}

uint64_t WafRuleLimit::GetCustomRule() const
{
    return m_customRule;
}

void WafRuleLimit::SetCustomRule(const uint64_t& _customRule)
{
    m_customRule = _customRule;
    m_customRuleHasBeenSet = true;
}

bool WafRuleLimit::CustomRuleHasBeenSet() const
{
    return m_customRuleHasBeenSet;
}

uint64_t WafRuleLimit::GetIPControl() const
{
    return m_iPControl;
}

void WafRuleLimit::SetIPControl(const uint64_t& _iPControl)
{
    m_iPControl = _iPControl;
    m_iPControlHasBeenSet = true;
}

bool WafRuleLimit::IPControlHasBeenSet() const
{
    return m_iPControlHasBeenSet;
}

uint64_t WafRuleLimit::GetAntiLeak() const
{
    return m_antiLeak;
}

void WafRuleLimit::SetAntiLeak(const uint64_t& _antiLeak)
{
    m_antiLeak = _antiLeak;
    m_antiLeakHasBeenSet = true;
}

bool WafRuleLimit::AntiLeakHasBeenSet() const
{
    return m_antiLeakHasBeenSet;
}

uint64_t WafRuleLimit::GetAntiTamper() const
{
    return m_antiTamper;
}

void WafRuleLimit::SetAntiTamper(const uint64_t& _antiTamper)
{
    m_antiTamper = _antiTamper;
    m_antiTamperHasBeenSet = true;
}

bool WafRuleLimit::AntiTamperHasBeenSet() const
{
    return m_antiTamperHasBeenSet;
}

uint64_t WafRuleLimit::GetAutoCC() const
{
    return m_autoCC;
}

void WafRuleLimit::SetAutoCC(const uint64_t& _autoCC)
{
    m_autoCC = _autoCC;
    m_autoCCHasBeenSet = true;
}

bool WafRuleLimit::AutoCCHasBeenSet() const
{
    return m_autoCCHasBeenSet;
}

uint64_t WafRuleLimit::GetAreaBan() const
{
    return m_areaBan;
}

void WafRuleLimit::SetAreaBan(const uint64_t& _areaBan)
{
    m_areaBan = _areaBan;
    m_areaBanHasBeenSet = true;
}

bool WafRuleLimit::AreaBanHasBeenSet() const
{
    return m_areaBanHasBeenSet;
}

uint64_t WafRuleLimit::GetCCSession() const
{
    return m_cCSession;
}

void WafRuleLimit::SetCCSession(const uint64_t& _cCSession)
{
    m_cCSession = _cCSession;
    m_cCSessionHasBeenSet = true;
}

bool WafRuleLimit::CCSessionHasBeenSet() const
{
    return m_cCSessionHasBeenSet;
}

uint64_t WafRuleLimit::GetAI() const
{
    return m_aI;
}

void WafRuleLimit::SetAI(const uint64_t& _aI)
{
    m_aI = _aI;
    m_aIHasBeenSet = true;
}

bool WafRuleLimit::AIHasBeenSet() const
{
    return m_aIHasBeenSet;
}

uint64_t WafRuleLimit::GetCustomWhite() const
{
    return m_customWhite;
}

void WafRuleLimit::SetCustomWhite(const uint64_t& _customWhite)
{
    m_customWhite = _customWhite;
    m_customWhiteHasBeenSet = true;
}

bool WafRuleLimit::CustomWhiteHasBeenSet() const
{
    return m_customWhiteHasBeenSet;
}

uint64_t WafRuleLimit::GetApiSecurity() const
{
    return m_apiSecurity;
}

void WafRuleLimit::SetApiSecurity(const uint64_t& _apiSecurity)
{
    m_apiSecurity = _apiSecurity;
    m_apiSecurityHasBeenSet = true;
}

bool WafRuleLimit::ApiSecurityHasBeenSet() const
{
    return m_apiSecurityHasBeenSet;
}

uint64_t WafRuleLimit::GetClientMsg() const
{
    return m_clientMsg;
}

void WafRuleLimit::SetClientMsg(const uint64_t& _clientMsg)
{
    m_clientMsg = _clientMsg;
    m_clientMsgHasBeenSet = true;
}

bool WafRuleLimit::ClientMsgHasBeenSet() const
{
    return m_clientMsgHasBeenSet;
}

uint64_t WafRuleLimit::GetTrafficMarking() const
{
    return m_trafficMarking;
}

void WafRuleLimit::SetTrafficMarking(const uint64_t& _trafficMarking)
{
    m_trafficMarking = _trafficMarking;
    m_trafficMarkingHasBeenSet = true;
}

bool WafRuleLimit::TrafficMarkingHasBeenSet() const
{
    return m_trafficMarkingHasBeenSet;
}

