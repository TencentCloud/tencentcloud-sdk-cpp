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

#include <tencentcloud/tiems/v20190416/model/RsgAsGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

RsgAsGroup::RsgAsGroup() :
    m_idHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_rsgIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_desiredSizeHasBeenSet(false)
{
}

CoreInternalOutcome RsgAsGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(value["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("RsgId") && !value["RsgId"].IsNull())
    {
        if (!value["RsgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.RsgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rsgId = string(value["RsgId"].GetString());
        m_rsgIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.MaxSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetUint64();
        m_maxSizeHasBeenSet = true;
    }

    if (value.HasMember("MinSize") && !value["MinSize"].IsNull())
    {
        if (!value["MinSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.MinSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minSize = value["MinSize"].GetUint64();
        m_minSizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("DesiredSize") && !value["DesiredSize"].IsNull())
    {
        if (!value["DesiredSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RsgAsGroup.DesiredSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredSize = value["DesiredSize"].GetUint64();
        m_desiredSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RsgAsGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_rsgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rsgId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSize, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_desiredSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredSize, allocator);
    }

}


string RsgAsGroup::GetId() const
{
    return m_id;
}

void RsgAsGroup::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RsgAsGroup::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RsgAsGroup::GetRegion() const
{
    return m_region;
}

void RsgAsGroup::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RsgAsGroup::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RsgAsGroup::GetZone() const
{
    return m_zone;
}

void RsgAsGroup::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool RsgAsGroup::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string RsgAsGroup::GetCluster() const
{
    return m_cluster;
}

void RsgAsGroup::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool RsgAsGroup::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string RsgAsGroup::GetRsgId() const
{
    return m_rsgId;
}

void RsgAsGroup::SetRsgId(const string& _rsgId)
{
    m_rsgId = _rsgId;
    m_rsgIdHasBeenSet = true;
}

bool RsgAsGroup::RsgIdHasBeenSet() const
{
    return m_rsgIdHasBeenSet;
}

string RsgAsGroup::GetName() const
{
    return m_name;
}

void RsgAsGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RsgAsGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t RsgAsGroup::GetMaxSize() const
{
    return m_maxSize;
}

void RsgAsGroup::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool RsgAsGroup::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t RsgAsGroup::GetMinSize() const
{
    return m_minSize;
}

void RsgAsGroup::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool RsgAsGroup::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

string RsgAsGroup::GetCreateTime() const
{
    return m_createTime;
}

void RsgAsGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RsgAsGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RsgAsGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void RsgAsGroup::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RsgAsGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RsgAsGroup::GetStatus() const
{
    return m_status;
}

void RsgAsGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RsgAsGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RsgAsGroup::GetInstanceType() const
{
    return m_instanceType;
}

void RsgAsGroup::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RsgAsGroup::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t RsgAsGroup::GetInstanceCount() const
{
    return m_instanceCount;
}

void RsgAsGroup::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool RsgAsGroup::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

uint64_t RsgAsGroup::GetDesiredSize() const
{
    return m_desiredSize;
}

void RsgAsGroup::SetDesiredSize(const uint64_t& _desiredSize)
{
    m_desiredSize = _desiredSize;
    m_desiredSizeHasBeenSet = true;
}

bool RsgAsGroup::DesiredSizeHasBeenSet() const
{
    return m_desiredSizeHasBeenSet;
}

