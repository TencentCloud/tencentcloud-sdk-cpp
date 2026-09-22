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

#include <tencentcloud/workbuddyenterprise/v20260709/model/AgentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

AgentItem::AgentItem() :
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_avatarUrlHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_a2AEnabledHasBeenSet(false),
    m_sessionCountHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_latestVersionIdHasBeenSet(false),
    m_latestVersionNameHasBeenSet(false),
    m_a2AEndpointHasBeenSet(false),
    m_a2AStatusHasBeenSet(false),
    m_publicApiEnabledHasBeenSet(false),
    m_publicApiUrlHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

CoreInternalOutcome AgentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AvatarUrl") && !value["AvatarUrl"].IsNull())
    {
        if (!value["AvatarUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.AvatarUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatarUrl = string(value["AvatarUrl"].GetString());
        m_avatarUrlHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("A2AEnabled") && !value["A2AEnabled"].IsNull())
    {
        if (!value["A2AEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.A2AEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_a2AEnabled = value["A2AEnabled"].GetBool();
        m_a2AEnabledHasBeenSet = true;
    }

    if (value.HasMember("SessionCount") && !value["SessionCount"].IsNull())
    {
        if (!value["SessionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.SessionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionCount = value["SessionCount"].GetInt64();
        m_sessionCountHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("LatestVersionId") && !value["LatestVersionId"].IsNull())
    {
        if (!value["LatestVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.LatestVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersionId = string(value["LatestVersionId"].GetString());
        m_latestVersionIdHasBeenSet = true;
    }

    if (value.HasMember("LatestVersionName") && !value["LatestVersionName"].IsNull())
    {
        if (!value["LatestVersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.LatestVersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersionName = string(value["LatestVersionName"].GetString());
        m_latestVersionNameHasBeenSet = true;
    }

    if (value.HasMember("A2AEndpoint") && !value["A2AEndpoint"].IsNull())
    {
        if (!value["A2AEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.A2AEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2AEndpoint = string(value["A2AEndpoint"].GetString());
        m_a2AEndpointHasBeenSet = true;
    }

    if (value.HasMember("A2AStatus") && !value["A2AStatus"].IsNull())
    {
        if (!value["A2AStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.A2AStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2AStatus = string(value["A2AStatus"].GetString());
        m_a2AStatusHasBeenSet = true;
    }

    if (value.HasMember("PublicApiEnabled") && !value["PublicApiEnabled"].IsNull())
    {
        if (!value["PublicApiEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.PublicApiEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicApiEnabled = value["PublicApiEnabled"].GetBool();
        m_publicApiEnabledHasBeenSet = true;
    }

    if (value.HasMember("PublicApiUrl") && !value["PublicApiUrl"].IsNull())
    {
        if (!value["PublicApiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.PublicApiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicApiUrl = string(value["PublicApiUrl"].GetString());
        m_publicApiUrlHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentItem.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
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

    if (m_a2AEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_a2AEnabled, allocator);
    }

    if (m_sessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionCount, allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_latestVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_latestVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_a2AEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2AEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_a2AStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2AStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_publicApiEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicApiEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicApiEnabled, allocator);
    }

    if (m_publicApiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicApiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicApiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

}


string AgentItem::GetAgentId() const
{
    return m_agentId;
}

void AgentItem::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool AgentItem::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string AgentItem::GetAgentName() const
{
    return m_agentName;
}

void AgentItem::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool AgentItem::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string AgentItem::GetDescription() const
{
    return m_description;
}

void AgentItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AgentItem::GetAvatarUrl() const
{
    return m_avatarUrl;
}

void AgentItem::SetAvatarUrl(const string& _avatarUrl)
{
    m_avatarUrl = _avatarUrl;
    m_avatarUrlHasBeenSet = true;
}

bool AgentItem::AvatarUrlHasBeenSet() const
{
    return m_avatarUrlHasBeenSet;
}

string AgentItem::GetCreatedTime() const
{
    return m_createdTime;
}

void AgentItem::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AgentItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string AgentItem::GetModifiedTime() const
{
    return m_modifiedTime;
}

void AgentItem::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool AgentItem::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

bool AgentItem::GetA2AEnabled() const
{
    return m_a2AEnabled;
}

void AgentItem::SetA2AEnabled(const bool& _a2AEnabled)
{
    m_a2AEnabled = _a2AEnabled;
    m_a2AEnabledHasBeenSet = true;
}

bool AgentItem::A2AEnabledHasBeenSet() const
{
    return m_a2AEnabledHasBeenSet;
}

int64_t AgentItem::GetSessionCount() const
{
    return m_sessionCount;
}

void AgentItem::SetSessionCount(const int64_t& _sessionCount)
{
    m_sessionCount = _sessionCount;
    m_sessionCountHasBeenSet = true;
}

bool AgentItem::SessionCountHasBeenSet() const
{
    return m_sessionCountHasBeenSet;
}

string AgentItem::GetModel() const
{
    return m_model;
}

void AgentItem::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AgentItem::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string AgentItem::GetLatestVersionId() const
{
    return m_latestVersionId;
}

void AgentItem::SetLatestVersionId(const string& _latestVersionId)
{
    m_latestVersionId = _latestVersionId;
    m_latestVersionIdHasBeenSet = true;
}

bool AgentItem::LatestVersionIdHasBeenSet() const
{
    return m_latestVersionIdHasBeenSet;
}

string AgentItem::GetLatestVersionName() const
{
    return m_latestVersionName;
}

void AgentItem::SetLatestVersionName(const string& _latestVersionName)
{
    m_latestVersionName = _latestVersionName;
    m_latestVersionNameHasBeenSet = true;
}

bool AgentItem::LatestVersionNameHasBeenSet() const
{
    return m_latestVersionNameHasBeenSet;
}

string AgentItem::GetA2AEndpoint() const
{
    return m_a2AEndpoint;
}

void AgentItem::SetA2AEndpoint(const string& _a2AEndpoint)
{
    m_a2AEndpoint = _a2AEndpoint;
    m_a2AEndpointHasBeenSet = true;
}

bool AgentItem::A2AEndpointHasBeenSet() const
{
    return m_a2AEndpointHasBeenSet;
}

string AgentItem::GetA2AStatus() const
{
    return m_a2AStatus;
}

void AgentItem::SetA2AStatus(const string& _a2AStatus)
{
    m_a2AStatus = _a2AStatus;
    m_a2AStatusHasBeenSet = true;
}

bool AgentItem::A2AStatusHasBeenSet() const
{
    return m_a2AStatusHasBeenSet;
}

bool AgentItem::GetPublicApiEnabled() const
{
    return m_publicApiEnabled;
}

void AgentItem::SetPublicApiEnabled(const bool& _publicApiEnabled)
{
    m_publicApiEnabled = _publicApiEnabled;
    m_publicApiEnabledHasBeenSet = true;
}

bool AgentItem::PublicApiEnabledHasBeenSet() const
{
    return m_publicApiEnabledHasBeenSet;
}

string AgentItem::GetPublicApiUrl() const
{
    return m_publicApiUrl;
}

void AgentItem::SetPublicApiUrl(const string& _publicApiUrl)
{
    m_publicApiUrl = _publicApiUrl;
    m_publicApiUrlHasBeenSet = true;
}

bool AgentItem::PublicApiUrlHasBeenSet() const
{
    return m_publicApiUrlHasBeenSet;
}

string AgentItem::GetCreatorUin() const
{
    return m_creatorUin;
}

void AgentItem::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool AgentItem::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string AgentItem::GetAccountId() const
{
    return m_accountId;
}

void AgentItem::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool AgentItem::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

