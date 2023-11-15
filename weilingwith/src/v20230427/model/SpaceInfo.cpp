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

#include <tencentcloud/weilingwith/v20230427/model/SpaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceInfo::SpaceInfo() :
    m_workspaceIdHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_englishNameHasBeenSet(false),
    m_chineseNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isCommWorkspaceHasBeenSet(false),
    m_validityStartTimeHasBeenSet(false),
    m_validityEndTimeHasBeenSet(false),
    m_selectedHasBeenSet(false),
    m_isSystemHasBeenSet(false)
{
}

CoreInternalOutcome SpaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.WorkspaceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = value["WorkspaceId"].GetUint64();
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.TenantId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = value["TenantId"].GetUint64();
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("EnglishName") && !value["EnglishName"].IsNull())
    {
        if (!value["EnglishName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.EnglishName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishName = string(value["EnglishName"].GetString());
        m_englishNameHasBeenSet = true;
    }

    if (value.HasMember("ChineseName") && !value["ChineseName"].IsNull())
    {
        if (!value["ChineseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.ChineseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chineseName = string(value["ChineseName"].GetString());
        m_chineseNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsCommWorkspace") && !value["IsCommWorkspace"].IsNull())
    {
        if (!value["IsCommWorkspace"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.IsCommWorkspace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCommWorkspace = value["IsCommWorkspace"].GetBool();
        m_isCommWorkspaceHasBeenSet = true;
    }

    if (value.HasMember("ValidityStartTime") && !value["ValidityStartTime"].IsNull())
    {
        if (!value["ValidityStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.ValidityStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validityStartTime = string(value["ValidityStartTime"].GetString());
        m_validityStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ValidityEndTime") && !value["ValidityEndTime"].IsNull())
    {
        if (!value["ValidityEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.ValidityEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validityEndTime = string(value["ValidityEndTime"].GetString());
        m_validityEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Selected") && !value["Selected"].IsNull())
    {
        if (!value["Selected"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.Selected` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_selected = value["Selected"].GetUint64();
        m_selectedHasBeenSet = true;
    }

    if (value.HasMember("IsSystem") && !value["IsSystem"].IsNull())
    {
        if (!value["IsSystem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceInfo.IsSystem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSystem = value["IsSystem"].GetUint64();
        m_isSystemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tenantId, allocator);
    }

    if (m_englishNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishName.c_str(), allocator).Move(), allocator);
    }

    if (m_chineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChineseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chineseName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isCommWorkspaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCommWorkspace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCommWorkspace, allocator);
    }

    if (m_validityStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validityStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_validityEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validityEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Selected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selected, allocator);
    }

    if (m_isSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSystem, allocator);
    }

}


uint64_t SpaceInfo::GetWorkspaceId() const
{
    return m_workspaceId;
}

void SpaceInfo::SetWorkspaceId(const uint64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool SpaceInfo::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

uint64_t SpaceInfo::GetTenantId() const
{
    return m_tenantId;
}

void SpaceInfo::SetTenantId(const uint64_t& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool SpaceInfo::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string SpaceInfo::GetEnglishName() const
{
    return m_englishName;
}

void SpaceInfo::SetEnglishName(const string& _englishName)
{
    m_englishName = _englishName;
    m_englishNameHasBeenSet = true;
}

bool SpaceInfo::EnglishNameHasBeenSet() const
{
    return m_englishNameHasBeenSet;
}

string SpaceInfo::GetChineseName() const
{
    return m_chineseName;
}

void SpaceInfo::SetChineseName(const string& _chineseName)
{
    m_chineseName = _chineseName;
    m_chineseNameHasBeenSet = true;
}

bool SpaceInfo::ChineseNameHasBeenSet() const
{
    return m_chineseNameHasBeenSet;
}

string SpaceInfo::GetDescription() const
{
    return m_description;
}

void SpaceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SpaceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t SpaceInfo::GetStatus() const
{
    return m_status;
}

void SpaceInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SpaceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool SpaceInfo::GetIsCommWorkspace() const
{
    return m_isCommWorkspace;
}

void SpaceInfo::SetIsCommWorkspace(const bool& _isCommWorkspace)
{
    m_isCommWorkspace = _isCommWorkspace;
    m_isCommWorkspaceHasBeenSet = true;
}

bool SpaceInfo::IsCommWorkspaceHasBeenSet() const
{
    return m_isCommWorkspaceHasBeenSet;
}

string SpaceInfo::GetValidityStartTime() const
{
    return m_validityStartTime;
}

void SpaceInfo::SetValidityStartTime(const string& _validityStartTime)
{
    m_validityStartTime = _validityStartTime;
    m_validityStartTimeHasBeenSet = true;
}

bool SpaceInfo::ValidityStartTimeHasBeenSet() const
{
    return m_validityStartTimeHasBeenSet;
}

string SpaceInfo::GetValidityEndTime() const
{
    return m_validityEndTime;
}

void SpaceInfo::SetValidityEndTime(const string& _validityEndTime)
{
    m_validityEndTime = _validityEndTime;
    m_validityEndTimeHasBeenSet = true;
}

bool SpaceInfo::ValidityEndTimeHasBeenSet() const
{
    return m_validityEndTimeHasBeenSet;
}

uint64_t SpaceInfo::GetSelected() const
{
    return m_selected;
}

void SpaceInfo::SetSelected(const uint64_t& _selected)
{
    m_selected = _selected;
    m_selectedHasBeenSet = true;
}

bool SpaceInfo::SelectedHasBeenSet() const
{
    return m_selectedHasBeenSet;
}

uint64_t SpaceInfo::GetIsSystem() const
{
    return m_isSystem;
}

void SpaceInfo::SetIsSystem(const uint64_t& _isSystem)
{
    m_isSystem = _isSystem;
    m_isSystemHasBeenSet = true;
}

bool SpaceInfo::IsSystemHasBeenSet() const
{
    return m_isSystemHasBeenSet;
}

