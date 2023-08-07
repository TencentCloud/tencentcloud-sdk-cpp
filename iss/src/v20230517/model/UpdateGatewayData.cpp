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

#include <tencentcloud/iss/v20230517/model/UpdateGatewayData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateGatewayData::UpdateGatewayData() :
    m_gatewayIdHasBeenSet(false),
    m_gwIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome UpdateGatewayData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GwId") && !value["GwId"].IsNull())
    {
        if (!value["GwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.GwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gwId = string(value["GwId"].GetString());
        m_gwIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.Secret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secret = string(value["Secret"].GetString());
        m_secretHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateGatewayData.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateGatewayData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secret.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string UpdateGatewayData::GetGatewayId() const
{
    return m_gatewayId;
}

void UpdateGatewayData::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool UpdateGatewayData::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string UpdateGatewayData::GetGwId() const
{
    return m_gwId;
}

void UpdateGatewayData::SetGwId(const string& _gwId)
{
    m_gwId = _gwId;
    m_gwIdHasBeenSet = true;
}

bool UpdateGatewayData::GwIdHasBeenSet() const
{
    return m_gwIdHasBeenSet;
}

string UpdateGatewayData::GetName() const
{
    return m_name;
}

void UpdateGatewayData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateGatewayData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateGatewayData::GetDescription() const
{
    return m_description;
}

void UpdateGatewayData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateGatewayData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateGatewayData::GetClusterId() const
{
    return m_clusterId;
}

void UpdateGatewayData::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateGatewayData::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpdateGatewayData::GetClusterName() const
{
    return m_clusterName;
}

void UpdateGatewayData::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool UpdateGatewayData::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t UpdateGatewayData::GetStatus() const
{
    return m_status;
}

void UpdateGatewayData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateGatewayData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t UpdateGatewayData::GetCreatedAt() const
{
    return m_createdAt;
}

void UpdateGatewayData::SetCreatedAt(const int64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool UpdateGatewayData::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string UpdateGatewayData::GetSecret() const
{
    return m_secret;
}

void UpdateGatewayData::SetSecret(const string& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool UpdateGatewayData::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

string UpdateGatewayData::GetVersion() const
{
    return m_version;
}

void UpdateGatewayData::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool UpdateGatewayData::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

