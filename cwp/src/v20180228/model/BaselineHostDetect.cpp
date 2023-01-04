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

#include <tencentcloud/cwp/v20180228/model/BaselineHostDetect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineHostDetect::BaselineHostDetect() :
    m_hostIdHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_detectStatusHasBeenSet(false),
    m_passedItemCountHasBeenSet(false),
    m_itemCountHasBeenSet(false),
    m_notPassedItemCountHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome BaselineHostDetect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("DetectStatus") && !value["DetectStatus"].IsNull())
    {
        if (!value["DetectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.DetectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectStatus = value["DetectStatus"].GetInt64();
        m_detectStatusHasBeenSet = true;
    }

    if (value.HasMember("PassedItemCount") && !value["PassedItemCount"].IsNull())
    {
        if (!value["PassedItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.PassedItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passedItemCount = value["PassedItemCount"].GetInt64();
        m_passedItemCountHasBeenSet = true;
    }

    if (value.HasMember("ItemCount") && !value["ItemCount"].IsNull())
    {
        if (!value["ItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.ItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCount = value["ItemCount"].GetInt64();
        m_itemCountHasBeenSet = true;
    }

    if (value.HasMember("NotPassedItemCount") && !value["NotPassedItemCount"].IsNull())
    {
        if (!value["NotPassedItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.NotPassedItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notPassedItemCount = value["NotPassedItemCount"].GetInt64();
        m_notPassedItemCountHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostDetect.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineHostDetect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_detectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectStatus, allocator);
    }

    if (m_passedItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassedItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passedItemCount, allocator);
    }

    if (m_itemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCount, allocator);
    }

    if (m_notPassedItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassedItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notPassedItemCount, allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BaselineHostDetect::GetHostId() const
{
    return m_hostId;
}

void BaselineHostDetect::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool BaselineHostDetect::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string BaselineHostDetect::GetHostIp() const
{
    return m_hostIp;
}

void BaselineHostDetect::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool BaselineHostDetect::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string BaselineHostDetect::GetHostName() const
{
    return m_hostName;
}

void BaselineHostDetect::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool BaselineHostDetect::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string BaselineHostDetect::GetWanIp() const
{
    return m_wanIp;
}

void BaselineHostDetect::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool BaselineHostDetect::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

int64_t BaselineHostDetect::GetDetectStatus() const
{
    return m_detectStatus;
}

void BaselineHostDetect::SetDetectStatus(const int64_t& _detectStatus)
{
    m_detectStatus = _detectStatus;
    m_detectStatusHasBeenSet = true;
}

bool BaselineHostDetect::DetectStatusHasBeenSet() const
{
    return m_detectStatusHasBeenSet;
}

int64_t BaselineHostDetect::GetPassedItemCount() const
{
    return m_passedItemCount;
}

void BaselineHostDetect::SetPassedItemCount(const int64_t& _passedItemCount)
{
    m_passedItemCount = _passedItemCount;
    m_passedItemCountHasBeenSet = true;
}

bool BaselineHostDetect::PassedItemCountHasBeenSet() const
{
    return m_passedItemCountHasBeenSet;
}

int64_t BaselineHostDetect::GetItemCount() const
{
    return m_itemCount;
}

void BaselineHostDetect::SetItemCount(const int64_t& _itemCount)
{
    m_itemCount = _itemCount;
    m_itemCountHasBeenSet = true;
}

bool BaselineHostDetect::ItemCountHasBeenSet() const
{
    return m_itemCountHasBeenSet;
}

int64_t BaselineHostDetect::GetNotPassedItemCount() const
{
    return m_notPassedItemCount;
}

void BaselineHostDetect::SetNotPassedItemCount(const int64_t& _notPassedItemCount)
{
    m_notPassedItemCount = _notPassedItemCount;
    m_notPassedItemCountHasBeenSet = true;
}

bool BaselineHostDetect::NotPassedItemCountHasBeenSet() const
{
    return m_notPassedItemCountHasBeenSet;
}

string BaselineHostDetect::GetFirstTime() const
{
    return m_firstTime;
}

void BaselineHostDetect::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool BaselineHostDetect::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string BaselineHostDetect::GetLastTime() const
{
    return m_lastTime;
}

void BaselineHostDetect::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool BaselineHostDetect::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

string BaselineHostDetect::GetUuid() const
{
    return m_uuid;
}

void BaselineHostDetect::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool BaselineHostDetect::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

MachineExtraInfo BaselineHostDetect::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void BaselineHostDetect::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool BaselineHostDetect::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

