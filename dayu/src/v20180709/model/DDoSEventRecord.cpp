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

#include <tencentcloud/dayu/v20180709/model/DDoSEventRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DDoSEventRecord::DDoSEventRecord() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_mbpsHasBeenSet(false),
    m_ppsHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_blockFlagHasBeenSet(false),
    m_overLoadHasBeenSet(false),
    m_attackStatusHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

CoreInternalOutcome DDoSEventRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(value["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Mbps") && !value["Mbps"].IsNull())
    {
        if (!value["Mbps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.Mbps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mbps = value["Mbps"].GetUint64();
        m_mbpsHasBeenSet = true;
    }

    if (value.HasMember("Pps") && !value["Pps"].IsNull())
    {
        if (!value["Pps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.Pps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pps = value["Pps"].GetUint64();
        m_ppsHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("BlockFlag") && !value["BlockFlag"].IsNull())
    {
        if (!value["BlockFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.BlockFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockFlag = value["BlockFlag"].GetUint64();
        m_blockFlagHasBeenSet = true;
    }

    if (value.HasMember("OverLoad") && !value["OverLoad"].IsNull())
    {
        if (!value["OverLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.OverLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_overLoad = string(value["OverLoad"].GetString());
        m_overLoadHasBeenSet = true;
    }

    if (value.HasMember("AttackStatus") && !value["AttackStatus"].IsNull())
    {
        if (!value["AttackStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.AttackStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackStatus = value["AttackStatus"].GetUint64();
        m_attackStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSEventRecord.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSEventRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

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

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_blockFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockFlag, allocator);
    }

    if (m_overLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_overLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_attackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackStatus, allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

}


string DDoSEventRecord::GetBusiness() const
{
    return m_business;
}

void DDoSEventRecord::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DDoSEventRecord::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DDoSEventRecord::GetId() const
{
    return m_id;
}

void DDoSEventRecord::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DDoSEventRecord::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DDoSEventRecord::GetVip() const
{
    return m_vip;
}

void DDoSEventRecord::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DDoSEventRecord::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string DDoSEventRecord::GetStartTime() const
{
    return m_startTime;
}

void DDoSEventRecord::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DDoSEventRecord::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DDoSEventRecord::GetEndTime() const
{
    return m_endTime;
}

void DDoSEventRecord::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DDoSEventRecord::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DDoSEventRecord::GetMbps() const
{
    return m_mbps;
}

void DDoSEventRecord::SetMbps(const uint64_t& _mbps)
{
    m_mbps = _mbps;
    m_mbpsHasBeenSet = true;
}

bool DDoSEventRecord::MbpsHasBeenSet() const
{
    return m_mbpsHasBeenSet;
}

uint64_t DDoSEventRecord::GetPps() const
{
    return m_pps;
}

void DDoSEventRecord::SetPps(const uint64_t& _pps)
{
    m_pps = _pps;
    m_ppsHasBeenSet = true;
}

bool DDoSEventRecord::PpsHasBeenSet() const
{
    return m_ppsHasBeenSet;
}

string DDoSEventRecord::GetAttackType() const
{
    return m_attackType;
}

void DDoSEventRecord::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool DDoSEventRecord::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

uint64_t DDoSEventRecord::GetBlockFlag() const
{
    return m_blockFlag;
}

void DDoSEventRecord::SetBlockFlag(const uint64_t& _blockFlag)
{
    m_blockFlag = _blockFlag;
    m_blockFlagHasBeenSet = true;
}

bool DDoSEventRecord::BlockFlagHasBeenSet() const
{
    return m_blockFlagHasBeenSet;
}

string DDoSEventRecord::GetOverLoad() const
{
    return m_overLoad;
}

void DDoSEventRecord::SetOverLoad(const string& _overLoad)
{
    m_overLoad = _overLoad;
    m_overLoadHasBeenSet = true;
}

bool DDoSEventRecord::OverLoadHasBeenSet() const
{
    return m_overLoadHasBeenSet;
}

uint64_t DDoSEventRecord::GetAttackStatus() const
{
    return m_attackStatus;
}

void DDoSEventRecord::SetAttackStatus(const uint64_t& _attackStatus)
{
    m_attackStatus = _attackStatus;
    m_attackStatusHasBeenSet = true;
}

bool DDoSEventRecord::AttackStatusHasBeenSet() const
{
    return m_attackStatusHasBeenSet;
}

string DDoSEventRecord::GetResourceName() const
{
    return m_resourceName;
}

void DDoSEventRecord::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool DDoSEventRecord::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string DDoSEventRecord::GetEventId() const
{
    return m_eventId;
}

void DDoSEventRecord::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DDoSEventRecord::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

