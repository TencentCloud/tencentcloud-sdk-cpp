/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/redis/v20180412/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subStatusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_degradeStrategyHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubStatus") && !value["SubStatus"].IsNull())
    {
        if (!value["SubStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subStatus = value["SubStatus"].GetInt64();
        m_subStatusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DegradeStrategy") && !value["DegradeStrategy"].IsNull())
    {
        if (!value["DegradeStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DegradeStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_degradeStrategy = value["DegradeStrategy"].GetInt64();
        m_degradeStrategyHasBeenSet = true;
    }

    if (value.HasMember("InstanceTags") && !value["InstanceTags"].IsNull())
    {
        if (!value["InstanceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTags.push_back(item);
        }
        m_instanceTagsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subStatus, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_degradeStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DegradeStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_degradeStrategy, allocator);
    }

    if (m_instanceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTags.begin(); itr != m_instanceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t InstanceInfo::GetProjectId() const
{
    return m_projectId;
}

void InstanceInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceInfo::GetSubStatus() const
{
    return m_subStatus;
}

void InstanceInfo::SetSubStatus(const int64_t& _subStatus)
{
    m_subStatus = _subStatus;
    m_subStatusHasBeenSet = true;
}

bool InstanceInfo::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetZone() const
{
    return m_zone;
}

void InstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t InstanceInfo::GetDegradeStrategy() const
{
    return m_degradeStrategy;
}

void InstanceInfo::SetDegradeStrategy(const int64_t& _degradeStrategy)
{
    m_degradeStrategy = _degradeStrategy;
    m_degradeStrategyHasBeenSet = true;
}

bool InstanceInfo::DegradeStrategyHasBeenSet() const
{
    return m_degradeStrategyHasBeenSet;
}

vector<InstanceTagInfo> InstanceInfo::GetInstanceTags() const
{
    return m_instanceTags;
}

void InstanceInfo::SetInstanceTags(const vector<InstanceTagInfo>& _instanceTags)
{
    m_instanceTags = _instanceTags;
    m_instanceTagsHasBeenSet = true;
}

bool InstanceInfo::InstanceTagsHasBeenSet() const
{
    return m_instanceTagsHasBeenSet;
}

int64_t InstanceInfo::GetType() const
{
    return m_type;
}

void InstanceInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InstanceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

