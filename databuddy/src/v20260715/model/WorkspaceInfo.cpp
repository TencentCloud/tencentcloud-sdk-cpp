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

#include <tencentcloud/databuddy/v20260715/model/WorkspaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkspaceInfo::WorkspaceInfo() :
    m_workspaceIdHasBeenSet(false),
    m_workspaceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_workspaceRegionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorReasonHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_hasAccessHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceName") && !value["WorkspaceName"].IsNull())
    {
        if (!value["WorkspaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.WorkspaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceName = string(value["WorkspaceName"].GetString());
        m_workspaceNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceRegion") && !value["WorkspaceRegion"].IsNull())
    {
        if (!value["WorkspaceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.WorkspaceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceRegion = string(value["WorkspaceRegion"].GetString());
        m_workspaceRegionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorReason") && !value["ErrorReason"].IsNull())
    {
        if (!value["ErrorReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.ErrorReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorReason = string(value["ErrorReason"].GetString());
        m_errorReasonHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.Creator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creator.Deserialize(value["Creator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("HasAccess") && !value["HasAccess"].IsNull())
    {
        if (!value["HasAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.HasAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasAccess = value["HasAccess"].GetBool();
        m_hasAccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errorReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorReason.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creator.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_hasAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasAccess, allocator);
    }

}


string WorkspaceInfo::GetWorkspaceId() const
{
    return m_workspaceId;
}

void WorkspaceInfo::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool WorkspaceInfo::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string WorkspaceInfo::GetWorkspaceName() const
{
    return m_workspaceName;
}

void WorkspaceInfo::SetWorkspaceName(const string& _workspaceName)
{
    m_workspaceName = _workspaceName;
    m_workspaceNameHasBeenSet = true;
}

bool WorkspaceInfo::WorkspaceNameHasBeenSet() const
{
    return m_workspaceNameHasBeenSet;
}

string WorkspaceInfo::GetDescription() const
{
    return m_description;
}

void WorkspaceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkspaceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WorkspaceInfo::GetWorkspaceRegion() const
{
    return m_workspaceRegion;
}

void WorkspaceInfo::SetWorkspaceRegion(const string& _workspaceRegion)
{
    m_workspaceRegion = _workspaceRegion;
    m_workspaceRegionHasBeenSet = true;
}

bool WorkspaceInfo::WorkspaceRegionHasBeenSet() const
{
    return m_workspaceRegionHasBeenSet;
}

int64_t WorkspaceInfo::GetStatus() const
{
    return m_status;
}

void WorkspaceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkspaceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WorkspaceInfo::GetErrorReason() const
{
    return m_errorReason;
}

void WorkspaceInfo::SetErrorReason(const string& _errorReason)
{
    m_errorReason = _errorReason;
    m_errorReasonHasBeenSet = true;
}

bool WorkspaceInfo::ErrorReasonHasBeenSet() const
{
    return m_errorReasonHasBeenSet;
}

StandardUserInfo WorkspaceInfo::GetCreator() const
{
    return m_creator;
}

void WorkspaceInfo::SetCreator(const StandardUserInfo& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool WorkspaceInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string WorkspaceInfo::GetCreateTime() const
{
    return m_createTime;
}

void WorkspaceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkspaceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkspaceInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void WorkspaceInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WorkspaceInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool WorkspaceInfo::GetHasAccess() const
{
    return m_hasAccess;
}

void WorkspaceInfo::SetHasAccess(const bool& _hasAccess)
{
    m_hasAccess = _hasAccess;
    m_hasAccessHasBeenSet = true;
}

bool WorkspaceInfo::HasAccessHasBeenSet() const
{
    return m_hasAccessHasBeenSet;
}

