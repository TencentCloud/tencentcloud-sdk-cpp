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

#include <tencentcloud/teo/v20220106/model/DDosAttackEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DDosAttackEvent::DDosAttackEvent() :
    m_policyIdHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_attackStatusHasBeenSet(false),
    m_attackMaxBandWidthHasBeenSet(false),
    m_attackPacketMaxRateHasBeenSet(false),
    m_attackStartTimeHasBeenSet(false),
    m_attackEndTimeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
}

CoreInternalOutcome DDosAttackEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackEvent.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackEvent.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("AttackStatus") && !value["AttackStatus"].IsNull())
    {
        if (!value["AttackStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackEvent.AttackStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackStatus = value["AttackStatus"].GetInt64();
        m_attackStatusHasBeenSet = true;
    }

    if (value.HasMember("AttackMaxBandWidth") && !value["AttackMaxBandWidth"].IsNull())
    {
        if (!value["AttackMaxBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackEvent.AttackMaxBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackMaxBandWidth = value["AttackMaxBandWidth"].GetInt64();
        m_attackMaxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("AttackPacketMaxRate") && !value["AttackPacketMaxRate"].IsNull())
    {
        if (!value["AttackPacketMaxRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackEvent.AttackPacketMaxRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackPacketMaxRate = value["AttackPacketMaxRate"].GetInt64();
        m_attackPacketMaxRateHasBeenSet = true;
    }

    if (value.HasMember("AttackStartTime") && !value["AttackStartTime"].IsNull())
    {
        if (!value["AttackStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackEvent.AttackStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackStartTime = value["AttackStartTime"].GetInt64();
        m_attackStartTimeHasBeenSet = true;
    }

    if (value.HasMember("AttackEndTime") && !value["AttackEndTime"].IsNull())
    {
        if (!value["AttackEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackEvent.AttackEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackEndTime = value["AttackEndTime"].GetInt64();
        m_attackEndTimeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackEvent.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosAttackEvent.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDosAttackEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_attackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackStatus, allocator);
    }

    if (m_attackMaxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackMaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackMaxBandWidth, allocator);
    }

    if (m_attackPacketMaxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackPacketMaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackPacketMaxRate, allocator);
    }

    if (m_attackStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackStartTime, allocator);
    }

    if (m_attackEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackEndTime, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

}


int64_t DDosAttackEvent::GetPolicyId() const
{
    return m_policyId;
}

void DDosAttackEvent::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DDosAttackEvent::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DDosAttackEvent::GetAttackType() const
{
    return m_attackType;
}

void DDosAttackEvent::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool DDosAttackEvent::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

int64_t DDosAttackEvent::GetAttackStatus() const
{
    return m_attackStatus;
}

void DDosAttackEvent::SetAttackStatus(const int64_t& _attackStatus)
{
    m_attackStatus = _attackStatus;
    m_attackStatusHasBeenSet = true;
}

bool DDosAttackEvent::AttackStatusHasBeenSet() const
{
    return m_attackStatusHasBeenSet;
}

int64_t DDosAttackEvent::GetAttackMaxBandWidth() const
{
    return m_attackMaxBandWidth;
}

void DDosAttackEvent::SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth)
{
    m_attackMaxBandWidth = _attackMaxBandWidth;
    m_attackMaxBandWidthHasBeenSet = true;
}

bool DDosAttackEvent::AttackMaxBandWidthHasBeenSet() const
{
    return m_attackMaxBandWidthHasBeenSet;
}

int64_t DDosAttackEvent::GetAttackPacketMaxRate() const
{
    return m_attackPacketMaxRate;
}

void DDosAttackEvent::SetAttackPacketMaxRate(const int64_t& _attackPacketMaxRate)
{
    m_attackPacketMaxRate = _attackPacketMaxRate;
    m_attackPacketMaxRateHasBeenSet = true;
}

bool DDosAttackEvent::AttackPacketMaxRateHasBeenSet() const
{
    return m_attackPacketMaxRateHasBeenSet;
}

int64_t DDosAttackEvent::GetAttackStartTime() const
{
    return m_attackStartTime;
}

void DDosAttackEvent::SetAttackStartTime(const int64_t& _attackStartTime)
{
    m_attackStartTime = _attackStartTime;
    m_attackStartTimeHasBeenSet = true;
}

bool DDosAttackEvent::AttackStartTimeHasBeenSet() const
{
    return m_attackStartTimeHasBeenSet;
}

int64_t DDosAttackEvent::GetAttackEndTime() const
{
    return m_attackEndTime;
}

void DDosAttackEvent::SetAttackEndTime(const int64_t& _attackEndTime)
{
    m_attackEndTime = _attackEndTime;
    m_attackEndTimeHasBeenSet = true;
}

bool DDosAttackEvent::AttackEndTimeHasBeenSet() const
{
    return m_attackEndTimeHasBeenSet;
}

string DDosAttackEvent::GetEventId() const
{
    return m_eventId;
}

void DDosAttackEvent::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DDosAttackEvent::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DDosAttackEvent::GetZoneId() const
{
    return m_zoneId;
}

void DDosAttackEvent::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DDosAttackEvent::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

