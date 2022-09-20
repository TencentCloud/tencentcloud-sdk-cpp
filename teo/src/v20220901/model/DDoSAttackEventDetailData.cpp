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

#include <tencentcloud/teo/v20220901/model/DDoSAttackEventDetailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSAttackEventDetailData::DDoSAttackEventDetailData() :
    m_attackStatusHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_packetMaxRateHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_policyIdHasBeenSet(false)
{
}

CoreInternalOutcome DDoSAttackEventDetailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackStatus") && !value["AttackStatus"].IsNull())
    {
        if (!value["AttackStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEventDetailData.AttackStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackStatus = value["AttackStatus"].GetInt64();
        m_attackStatusHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEventDetailData.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEventDetailData.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEventDetailData.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEventDetailData.MaxBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetInt64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("PacketMaxRate") && !value["PacketMaxRate"].IsNull())
    {
        if (!value["PacketMaxRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEventDetailData.PacketMaxRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packetMaxRate = value["PacketMaxRate"].GetInt64();
        m_packetMaxRateHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEventDetailData.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEventDetailData.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSAttackEventDetailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackStatus, allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_maxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandWidth, allocator);
    }

    if (m_packetMaxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketMaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packetMaxRate, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

}


int64_t DDoSAttackEventDetailData::GetAttackStatus() const
{
    return m_attackStatus;
}

void DDoSAttackEventDetailData::SetAttackStatus(const int64_t& _attackStatus)
{
    m_attackStatus = _attackStatus;
    m_attackStatusHasBeenSet = true;
}

bool DDoSAttackEventDetailData::AttackStatusHasBeenSet() const
{
    return m_attackStatusHasBeenSet;
}

string DDoSAttackEventDetailData::GetAttackType() const
{
    return m_attackType;
}

void DDoSAttackEventDetailData::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool DDoSAttackEventDetailData::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

int64_t DDoSAttackEventDetailData::GetEndTime() const
{
    return m_endTime;
}

void DDoSAttackEventDetailData::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DDoSAttackEventDetailData::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DDoSAttackEventDetailData::GetStartTime() const
{
    return m_startTime;
}

void DDoSAttackEventDetailData::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DDoSAttackEventDetailData::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DDoSAttackEventDetailData::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void DDoSAttackEventDetailData::SetMaxBandWidth(const int64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool DDoSAttackEventDetailData::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

int64_t DDoSAttackEventDetailData::GetPacketMaxRate() const
{
    return m_packetMaxRate;
}

void DDoSAttackEventDetailData::SetPacketMaxRate(const int64_t& _packetMaxRate)
{
    m_packetMaxRate = _packetMaxRate;
    m_packetMaxRateHasBeenSet = true;
}

bool DDoSAttackEventDetailData::PacketMaxRateHasBeenSet() const
{
    return m_packetMaxRateHasBeenSet;
}

string DDoSAttackEventDetailData::GetEventId() const
{
    return m_eventId;
}

void DDoSAttackEventDetailData::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DDoSAttackEventDetailData::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

int64_t DDoSAttackEventDetailData::GetPolicyId() const
{
    return m_policyId;
}

void DDoSAttackEventDetailData::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DDoSAttackEventDetailData::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

