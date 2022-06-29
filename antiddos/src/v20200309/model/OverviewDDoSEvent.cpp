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

#include <tencentcloud/antiddos/v20200309/model/OverviewDDoSEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

OverviewDDoSEvent::OverviewDDoSEvent() :
    m_idHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_attackStatusHasBeenSet(false),
    m_mbpsHasBeenSet(false),
    m_ppsHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false)
{
}

CoreInternalOutcome OverviewDDoSEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("AttackStatus") && !value["AttackStatus"].IsNull())
    {
        if (!value["AttackStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.AttackStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackStatus = value["AttackStatus"].GetUint64();
        m_attackStatusHasBeenSet = true;
    }

    if (value.HasMember("Mbps") && !value["Mbps"].IsNull())
    {
        if (!value["Mbps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.Mbps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mbps = value["Mbps"].GetUint64();
        m_mbpsHasBeenSet = true;
    }

    if (value.HasMember("Pps") && !value["Pps"].IsNull())
    {
        if (!value["Pps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.Pps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pps = value["Pps"].GetUint64();
        m_ppsHasBeenSet = true;
    }

    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(value["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDDoSEvent.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewDDoSEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_mbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mbps, allocator);
    }

    if (m_ppsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pps, allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

}


string OverviewDDoSEvent::GetId() const
{
    return m_id;
}

void OverviewDDoSEvent::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool OverviewDDoSEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string OverviewDDoSEvent::GetVip() const
{
    return m_vip;
}

void OverviewDDoSEvent::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool OverviewDDoSEvent::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string OverviewDDoSEvent::GetStartTime() const
{
    return m_startTime;
}

void OverviewDDoSEvent::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool OverviewDDoSEvent::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string OverviewDDoSEvent::GetEndTime() const
{
    return m_endTime;
}

void OverviewDDoSEvent::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool OverviewDDoSEvent::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string OverviewDDoSEvent::GetAttackType() const
{
    return m_attackType;
}

void OverviewDDoSEvent::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool OverviewDDoSEvent::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

uint64_t OverviewDDoSEvent::GetAttackStatus() const
{
    return m_attackStatus;
}

void OverviewDDoSEvent::SetAttackStatus(const uint64_t& _attackStatus)
{
    m_attackStatus = _attackStatus;
    m_attackStatusHasBeenSet = true;
}

bool OverviewDDoSEvent::AttackStatusHasBeenSet() const
{
    return m_attackStatusHasBeenSet;
}

uint64_t OverviewDDoSEvent::GetMbps() const
{
    return m_mbps;
}

void OverviewDDoSEvent::SetMbps(const uint64_t& _mbps)
{
    m_mbps = _mbps;
    m_mbpsHasBeenSet = true;
}

bool OverviewDDoSEvent::MbpsHasBeenSet() const
{
    return m_mbpsHasBeenSet;
}

uint64_t OverviewDDoSEvent::GetPps() const
{
    return m_pps;
}

void OverviewDDoSEvent::SetPps(const uint64_t& _pps)
{
    m_pps = _pps;
    m_ppsHasBeenSet = true;
}

bool OverviewDDoSEvent::PpsHasBeenSet() const
{
    return m_ppsHasBeenSet;
}

string OverviewDDoSEvent::GetBusiness() const
{
    return m_business;
}

void OverviewDDoSEvent::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool OverviewDDoSEvent::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string OverviewDDoSEvent::GetInstanceId() const
{
    return m_instanceId;
}

void OverviewDDoSEvent::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool OverviewDDoSEvent::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string OverviewDDoSEvent::GetInstanceName() const
{
    return m_instanceName;
}

void OverviewDDoSEvent::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool OverviewDDoSEvent::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

