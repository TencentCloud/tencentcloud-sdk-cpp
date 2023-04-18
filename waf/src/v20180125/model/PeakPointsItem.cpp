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
    m_botAccessHasBeenSet(false)
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

