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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ConnectorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ConnectorInfo::ConnectorInfo() :
    m_connectorIdHasBeenSet(false),
    m_connectorSlugHasBeenSet(false),
    m_connectorKeyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_avatarUrlHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_enterpriseIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_serviceUrlHasBeenSet(false),
    m_authModesHasBeenSet(false),
    m_latestVersionNoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome ConnectorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectorId") && !value["ConnectorId"].IsNull())
    {
        if (!value["ConnectorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.ConnectorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorId = string(value["ConnectorId"].GetString());
        m_connectorIdHasBeenSet = true;
    }

    if (value.HasMember("ConnectorSlug") && !value["ConnectorSlug"].IsNull())
    {
        if (!value["ConnectorSlug"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.ConnectorSlug` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorSlug = string(value["ConnectorSlug"].GetString());
        m_connectorSlugHasBeenSet = true;
    }

    if (value.HasMember("ConnectorKey") && !value["ConnectorKey"].IsNull())
    {
        if (!value["ConnectorKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.ConnectorKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorKey = string(value["ConnectorKey"].GetString());
        m_connectorKeyHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AvatarUrl") && !value["AvatarUrl"].IsNull())
    {
        if (!value["AvatarUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.AvatarUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatarUrl = string(value["AvatarUrl"].GetString());
        m_avatarUrlHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("EnterpriseId") && !value["EnterpriseId"].IsNull())
    {
        if (!value["EnterpriseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.EnterpriseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseId = string(value["EnterpriseId"].GetString());
        m_enterpriseIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ServiceUrl") && !value["ServiceUrl"].IsNull())
    {
        if (!value["ServiceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.ServiceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceUrl = string(value["ServiceUrl"].GetString());
        m_serviceUrlHasBeenSet = true;
    }

    if (value.HasMember("AuthModes") && !value["AuthModes"].IsNull())
    {
        if (!value["AuthModes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.AuthModes` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthModes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authModes.push_back((*itr).GetString());
        }
        m_authModesHasBeenSet = true;
    }

    if (value.HasMember("LatestVersionNo") && !value["LatestVersionNo"].IsNull())
    {
        if (!value["LatestVersionNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.LatestVersionNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersionNo = value["LatestVersionNo"].GetInt64();
        m_latestVersionNoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatorId") && !value["CreatorId"].IsNull())
    {
        if (!value["CreatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.CreatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorId = string(value["CreatorId"].GetString());
        m_creatorIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorSlugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorSlug";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorSlug.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorKey.c_str(), allocator).Move(), allocator);
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

    if (m_avatarUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatarUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_authModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthModes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authModes.begin(); itr != m_authModes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_latestVersionNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersionNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestVersionNo, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

}


string ConnectorInfo::GetConnectorId() const
{
    return m_connectorId;
}

void ConnectorInfo::SetConnectorId(const string& _connectorId)
{
    m_connectorId = _connectorId;
    m_connectorIdHasBeenSet = true;
}

bool ConnectorInfo::ConnectorIdHasBeenSet() const
{
    return m_connectorIdHasBeenSet;
}

string ConnectorInfo::GetConnectorSlug() const
{
    return m_connectorSlug;
}

void ConnectorInfo::SetConnectorSlug(const string& _connectorSlug)
{
    m_connectorSlug = _connectorSlug;
    m_connectorSlugHasBeenSet = true;
}

bool ConnectorInfo::ConnectorSlugHasBeenSet() const
{
    return m_connectorSlugHasBeenSet;
}

string ConnectorInfo::GetConnectorKey() const
{
    return m_connectorKey;
}

void ConnectorInfo::SetConnectorKey(const string& _connectorKey)
{
    m_connectorKey = _connectorKey;
    m_connectorKeyHasBeenSet = true;
}

bool ConnectorInfo::ConnectorKeyHasBeenSet() const
{
    return m_connectorKeyHasBeenSet;
}

string ConnectorInfo::GetName() const
{
    return m_name;
}

void ConnectorInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConnectorInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConnectorInfo::GetDescription() const
{
    return m_description;
}

void ConnectorInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ConnectorInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ConnectorInfo::GetAvatarUrl() const
{
    return m_avatarUrl;
}

void ConnectorInfo::SetAvatarUrl(const string& _avatarUrl)
{
    m_avatarUrl = _avatarUrl;
    m_avatarUrlHasBeenSet = true;
}

bool ConnectorInfo::AvatarUrlHasBeenSet() const
{
    return m_avatarUrlHasBeenSet;
}

string ConnectorInfo::GetSource() const
{
    return m_source;
}

void ConnectorInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ConnectorInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ConnectorInfo::GetEnterpriseId() const
{
    return m_enterpriseId;
}

void ConnectorInfo::SetEnterpriseId(const string& _enterpriseId)
{
    m_enterpriseId = _enterpriseId;
    m_enterpriseIdHasBeenSet = true;
}

bool ConnectorInfo::EnterpriseIdHasBeenSet() const
{
    return m_enterpriseIdHasBeenSet;
}

string ConnectorInfo::GetType() const
{
    return m_type;
}

void ConnectorInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConnectorInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ConnectorInfo::GetServiceUrl() const
{
    return m_serviceUrl;
}

void ConnectorInfo::SetServiceUrl(const string& _serviceUrl)
{
    m_serviceUrl = _serviceUrl;
    m_serviceUrlHasBeenSet = true;
}

bool ConnectorInfo::ServiceUrlHasBeenSet() const
{
    return m_serviceUrlHasBeenSet;
}

vector<string> ConnectorInfo::GetAuthModes() const
{
    return m_authModes;
}

void ConnectorInfo::SetAuthModes(const vector<string>& _authModes)
{
    m_authModes = _authModes;
    m_authModesHasBeenSet = true;
}

bool ConnectorInfo::AuthModesHasBeenSet() const
{
    return m_authModesHasBeenSet;
}

int64_t ConnectorInfo::GetLatestVersionNo() const
{
    return m_latestVersionNo;
}

void ConnectorInfo::SetLatestVersionNo(const int64_t& _latestVersionNo)
{
    m_latestVersionNo = _latestVersionNo;
    m_latestVersionNoHasBeenSet = true;
}

bool ConnectorInfo::LatestVersionNoHasBeenSet() const
{
    return m_latestVersionNoHasBeenSet;
}

string ConnectorInfo::GetStatus() const
{
    return m_status;
}

void ConnectorInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConnectorInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ConnectorInfo::GetCreatorId() const
{
    return m_creatorId;
}

void ConnectorInfo::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool ConnectorInfo::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

string ConnectorInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void ConnectorInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ConnectorInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ConnectorInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ConnectorInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ConnectorInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

