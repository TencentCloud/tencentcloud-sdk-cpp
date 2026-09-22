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

#include <tencentcloud/workbuddyenterprise/v20260709/model/AgentVersionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

AgentVersionItem::AgentVersionItem() :
    m_versionIdHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_versionTypeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_sandboxTemplateIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sessionCountHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome AgentVersionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersionItem.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersionItem.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("VersionType") && !value["VersionType"].IsNull())
    {
        if (!value["VersionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersionItem.VersionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionType = string(value["VersionType"].GetString());
        m_versionTypeHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersionItem.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("SandboxTemplateId") && !value["SandboxTemplateId"].IsNull())
    {
        if (!value["SandboxTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersionItem.SandboxTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sandboxTemplateId = string(value["SandboxTemplateId"].GetString());
        m_sandboxTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersionItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SessionCount") && !value["SessionCount"].IsNull())
    {
        if (!value["SessionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersionItem.SessionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionCount = value["SessionCount"].GetInt64();
        m_sessionCountHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersionItem.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersionItem.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentVersionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_sandboxTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SandboxTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sandboxTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionCount, allocator);
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


string AgentVersionItem::GetVersionId() const
{
    return m_versionId;
}

void AgentVersionItem::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool AgentVersionItem::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string AgentVersionItem::GetVersionName() const
{
    return m_versionName;
}

void AgentVersionItem::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool AgentVersionItem::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string AgentVersionItem::GetVersionType() const
{
    return m_versionType;
}

void AgentVersionItem::SetVersionType(const string& _versionType)
{
    m_versionType = _versionType;
    m_versionTypeHasBeenSet = true;
}

bool AgentVersionItem::VersionTypeHasBeenSet() const
{
    return m_versionTypeHasBeenSet;
}

string AgentVersionItem::GetModel() const
{
    return m_model;
}

void AgentVersionItem::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AgentVersionItem::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string AgentVersionItem::GetSandboxTemplateId() const
{
    return m_sandboxTemplateId;
}

void AgentVersionItem::SetSandboxTemplateId(const string& _sandboxTemplateId)
{
    m_sandboxTemplateId = _sandboxTemplateId;
    m_sandboxTemplateIdHasBeenSet = true;
}

bool AgentVersionItem::SandboxTemplateIdHasBeenSet() const
{
    return m_sandboxTemplateIdHasBeenSet;
}

string AgentVersionItem::GetStatus() const
{
    return m_status;
}

void AgentVersionItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentVersionItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AgentVersionItem::GetSessionCount() const
{
    return m_sessionCount;
}

void AgentVersionItem::SetSessionCount(const int64_t& _sessionCount)
{
    m_sessionCount = _sessionCount;
    m_sessionCountHasBeenSet = true;
}

bool AgentVersionItem::SessionCountHasBeenSet() const
{
    return m_sessionCountHasBeenSet;
}

string AgentVersionItem::GetCreatedTime() const
{
    return m_createdTime;
}

void AgentVersionItem::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AgentVersionItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string AgentVersionItem::GetModifiedTime() const
{
    return m_modifiedTime;
}

void AgentVersionItem::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool AgentVersionItem::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

