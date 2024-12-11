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

#include <tencentcloud/tdmq/v20200217/model/InstanceNodeDistribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

InstanceNodeDistribution::InstanceNodeDistribution() :
    m_zoneNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_nodePermWipeFlagHasBeenSet(false),
    m_zoneStatusHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNodeDistribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeDistribution.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeDistribution.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeDistribution.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("NodePermWipeFlag") && !value["NodePermWipeFlag"].IsNull())
    {
        if (!value["NodePermWipeFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeDistribution.NodePermWipeFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nodePermWipeFlag = value["NodePermWipeFlag"].GetBool();
        m_nodePermWipeFlagHasBeenSet = true;
    }

    if (value.HasMember("ZoneStatus") && !value["ZoneStatus"].IsNull())
    {
        if (!value["ZoneStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeDistribution.ZoneStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneStatus = string(value["ZoneStatus"].GetString());
        m_zoneStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNodeDistribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_nodePermWipeFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePermWipeFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodePermWipeFlag, allocator);
    }

    if (m_zoneStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneStatus.c_str(), allocator).Move(), allocator);
    }

}


string InstanceNodeDistribution::GetZoneName() const
{
    return m_zoneName;
}

void InstanceNodeDistribution::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool InstanceNodeDistribution::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string InstanceNodeDistribution::GetZoneId() const
{
    return m_zoneId;
}

void InstanceNodeDistribution::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceNodeDistribution::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t InstanceNodeDistribution::GetNodeCount() const
{
    return m_nodeCount;
}

void InstanceNodeDistribution::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool InstanceNodeDistribution::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

bool InstanceNodeDistribution::GetNodePermWipeFlag() const
{
    return m_nodePermWipeFlag;
}

void InstanceNodeDistribution::SetNodePermWipeFlag(const bool& _nodePermWipeFlag)
{
    m_nodePermWipeFlag = _nodePermWipeFlag;
    m_nodePermWipeFlagHasBeenSet = true;
}

bool InstanceNodeDistribution::NodePermWipeFlagHasBeenSet() const
{
    return m_nodePermWipeFlagHasBeenSet;
}

string InstanceNodeDistribution::GetZoneStatus() const
{
    return m_zoneStatus;
}

void InstanceNodeDistribution::SetZoneStatus(const string& _zoneStatus)
{
    m_zoneStatus = _zoneStatus;
    m_zoneStatusHasBeenSet = true;
}

bool InstanceNodeDistribution::ZoneStatusHasBeenSet() const
{
    return m_zoneStatusHasBeenSet;
}

