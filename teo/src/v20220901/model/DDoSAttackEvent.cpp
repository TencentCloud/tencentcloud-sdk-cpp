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

#include <tencentcloud/teo/v20220901/model/DDoSAttackEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSAttackEvent::DDoSAttackEvent() :
    m_eventIdHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_attackStatusHasBeenSet(false),
    m_attackMaxBandWidthHasBeenSet(false),
    m_attackPacketMaxRateHasBeenSet(false),
    m_attackStartTimeHasBeenSet(false),
    m_attackEndTimeHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_dDoSBlockDataHasBeenSet(false)
{
}

CoreInternalOutcome DDoSAttackEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("AttackStatus") && !value["AttackStatus"].IsNull())
    {
        if (!value["AttackStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.AttackStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackStatus = value["AttackStatus"].GetInt64();
        m_attackStatusHasBeenSet = true;
    }

    if (value.HasMember("AttackMaxBandWidth") && !value["AttackMaxBandWidth"].IsNull())
    {
        if (!value["AttackMaxBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.AttackMaxBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackMaxBandWidth = value["AttackMaxBandWidth"].GetInt64();
        m_attackMaxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("AttackPacketMaxRate") && !value["AttackPacketMaxRate"].IsNull())
    {
        if (!value["AttackPacketMaxRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.AttackPacketMaxRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackPacketMaxRate = value["AttackPacketMaxRate"].GetInt64();
        m_attackPacketMaxRateHasBeenSet = true;
    }

    if (value.HasMember("AttackStartTime") && !value["AttackStartTime"].IsNull())
    {
        if (!value["AttackStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.AttackStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackStartTime = value["AttackStartTime"].GetInt64();
        m_attackStartTimeHasBeenSet = true;
    }

    if (value.HasMember("AttackEndTime") && !value["AttackEndTime"].IsNull())
    {
        if (!value["AttackEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.AttackEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackEndTime = value["AttackEndTime"].GetInt64();
        m_attackEndTimeHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("DDoSBlockData") && !value["DDoSBlockData"].IsNull())
    {
        if (!value["DDoSBlockData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSAttackEvent.DDoSBlockData` is not array type"));

        const rapidjson::Value &tmpValue = value["DDoSBlockData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DDoSBlockData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dDoSBlockData.push_back(item);
        }
        m_dDoSBlockDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSAttackEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
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

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_dDoSBlockDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSBlockData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dDoSBlockData.begin(); itr != m_dDoSBlockData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DDoSAttackEvent::GetEventId() const
{
    return m_eventId;
}

void DDoSAttackEvent::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DDoSAttackEvent::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DDoSAttackEvent::GetAttackType() const
{
    return m_attackType;
}

void DDoSAttackEvent::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool DDoSAttackEvent::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

int64_t DDoSAttackEvent::GetAttackStatus() const
{
    return m_attackStatus;
}

void DDoSAttackEvent::SetAttackStatus(const int64_t& _attackStatus)
{
    m_attackStatus = _attackStatus;
    m_attackStatusHasBeenSet = true;
}

bool DDoSAttackEvent::AttackStatusHasBeenSet() const
{
    return m_attackStatusHasBeenSet;
}

int64_t DDoSAttackEvent::GetAttackMaxBandWidth() const
{
    return m_attackMaxBandWidth;
}

void DDoSAttackEvent::SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth)
{
    m_attackMaxBandWidth = _attackMaxBandWidth;
    m_attackMaxBandWidthHasBeenSet = true;
}

bool DDoSAttackEvent::AttackMaxBandWidthHasBeenSet() const
{
    return m_attackMaxBandWidthHasBeenSet;
}

int64_t DDoSAttackEvent::GetAttackPacketMaxRate() const
{
    return m_attackPacketMaxRate;
}

void DDoSAttackEvent::SetAttackPacketMaxRate(const int64_t& _attackPacketMaxRate)
{
    m_attackPacketMaxRate = _attackPacketMaxRate;
    m_attackPacketMaxRateHasBeenSet = true;
}

bool DDoSAttackEvent::AttackPacketMaxRateHasBeenSet() const
{
    return m_attackPacketMaxRateHasBeenSet;
}

int64_t DDoSAttackEvent::GetAttackStartTime() const
{
    return m_attackStartTime;
}

void DDoSAttackEvent::SetAttackStartTime(const int64_t& _attackStartTime)
{
    m_attackStartTime = _attackStartTime;
    m_attackStartTimeHasBeenSet = true;
}

bool DDoSAttackEvent::AttackStartTimeHasBeenSet() const
{
    return m_attackStartTimeHasBeenSet;
}

int64_t DDoSAttackEvent::GetAttackEndTime() const
{
    return m_attackEndTime;
}

void DDoSAttackEvent::SetAttackEndTime(const int64_t& _attackEndTime)
{
    m_attackEndTime = _attackEndTime;
    m_attackEndTimeHasBeenSet = true;
}

bool DDoSAttackEvent::AttackEndTimeHasBeenSet() const
{
    return m_attackEndTimeHasBeenSet;
}

int64_t DDoSAttackEvent::GetPolicyId() const
{
    return m_policyId;
}

void DDoSAttackEvent::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DDoSAttackEvent::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DDoSAttackEvent::GetZoneId() const
{
    return m_zoneId;
}

void DDoSAttackEvent::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DDoSAttackEvent::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DDoSAttackEvent::GetArea() const
{
    return m_area;
}

void DDoSAttackEvent::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DDoSAttackEvent::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

vector<DDoSBlockData> DDoSAttackEvent::GetDDoSBlockData() const
{
    return m_dDoSBlockData;
}

void DDoSAttackEvent::SetDDoSBlockData(const vector<DDoSBlockData>& _dDoSBlockData)
{
    m_dDoSBlockData = _dDoSBlockData;
    m_dDoSBlockDataHasBeenSet = true;
}

bool DDoSAttackEvent::DDoSBlockDataHasBeenSet() const
{
    return m_dDoSBlockDataHasBeenSet;
}

