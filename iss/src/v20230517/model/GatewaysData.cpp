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

#include <tencentcloud/iss/v20230517/model/GatewaysData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

GatewaysData::GatewaysData() :
    m_gatewayIdHasBeenSet(false),
    m_gwIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deviceNumHasBeenSet(false)
{
}

CoreInternalOutcome GatewaysData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GwId") && !value["GwId"].IsNull())
    {
        if (!value["GwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.GwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gwId = string(value["GwId"].GetString());
        m_gwIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("DeviceNum") && !value["DeviceNum"].IsNull())
    {
        if (!value["DeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewaysData.DeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceNum = value["DeviceNum"].GetInt64();
        m_deviceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewaysData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_gwIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GwId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gwId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceNum, allocator);
    }

}


string GatewaysData::GetGatewayId() const
{
    return m_gatewayId;
}

void GatewaysData::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool GatewaysData::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string GatewaysData::GetGwId() const
{
    return m_gwId;
}

void GatewaysData::SetGwId(const string& _gwId)
{
    m_gwId = _gwId;
    m_gwIdHasBeenSet = true;
}

bool GatewaysData::GwIdHasBeenSet() const
{
    return m_gwIdHasBeenSet;
}

string GatewaysData::GetName() const
{
    return m_name;
}

void GatewaysData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GatewaysData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GatewaysData::GetDescription() const
{
    return m_description;
}

void GatewaysData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GatewaysData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GatewaysData::GetClusterId() const
{
    return m_clusterId;
}

void GatewaysData::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GatewaysData::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GatewaysData::GetClusterName() const
{
    return m_clusterName;
}

void GatewaysData::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool GatewaysData::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string GatewaysData::GetRegion() const
{
    return m_region;
}

void GatewaysData::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool GatewaysData::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t GatewaysData::GetStatus() const
{
    return m_status;
}

void GatewaysData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GatewaysData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GatewaysData::GetCreatedAt() const
{
    return m_createdAt;
}

void GatewaysData::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool GatewaysData::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t GatewaysData::GetDeviceNum() const
{
    return m_deviceNum;
}

void GatewaysData::SetDeviceNum(const int64_t& _deviceNum)
{
    m_deviceNum = _deviceNum;
    m_deviceNumHasBeenSet = true;
}

bool GatewaysData::DeviceNumHasBeenSet() const
{
    return m_deviceNumHasBeenSet;
}

