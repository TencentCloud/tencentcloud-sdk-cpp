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

#include <tencentcloud/dlc/v20210125/model/GooseFSClustersInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GooseFSClustersInfo::GooseFSClustersInfo() :
    m_clusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_masterRPCAddressHasBeenSet(false)
{
}

CoreInternalOutcome GooseFSClustersInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSClustersInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSClustersInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSClustersInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSClustersInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("MasterRPCAddress") && !value["MasterRPCAddress"].IsNull())
    {
        if (!value["MasterRPCAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSClustersInfo.MasterRPCAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterRPCAddress = string(value["MasterRPCAddress"].GetString());
        m_masterRPCAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GooseFSClustersInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_masterRPCAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterRPCAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterRPCAddress.c_str(), allocator).Move(), allocator);
    }

}


string GooseFSClustersInfo::GetClusterId() const
{
    return m_clusterId;
}

void GooseFSClustersInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GooseFSClustersInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GooseFSClustersInfo::GetName() const
{
    return m_name;
}

void GooseFSClustersInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GooseFSClustersInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GooseFSClustersInfo::GetSubnetId() const
{
    return m_subnetId;
}

void GooseFSClustersInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool GooseFSClustersInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string GooseFSClustersInfo::GetZone() const
{
    return m_zone;
}

void GooseFSClustersInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool GooseFSClustersInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string GooseFSClustersInfo::GetMasterRPCAddress() const
{
    return m_masterRPCAddress;
}

void GooseFSClustersInfo::SetMasterRPCAddress(const string& _masterRPCAddress)
{
    m_masterRPCAddress = _masterRPCAddress;
    m_masterRPCAddressHasBeenSet = true;
}

bool GooseFSClustersInfo::MasterRPCAddressHasBeenSet() const
{
    return m_masterRPCAddressHasBeenSet;
}

