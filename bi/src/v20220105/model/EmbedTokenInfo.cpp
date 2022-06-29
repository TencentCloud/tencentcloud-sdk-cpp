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

#include <tencentcloud/bi/v20220105/model/EmbedTokenInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

EmbedTokenInfo::EmbedTokenInfo() :
    m_idHasBeenSet(false),
    m_bITokenHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_createdUserHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedUserHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_extraParamHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome EmbedTokenInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("BIToken") && !value["BIToken"].IsNull())
    {
        if (!value["BIToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.BIToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bIToken = string(value["BIToken"].GetString());
        m_bITokenHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedUser") && !value["CreatedUser"].IsNull())
    {
        if (!value["CreatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.CreatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdUser = string(value["CreatedUser"].GetString());
        m_createdUserHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedUser") && !value["UpdatedUser"].IsNull())
    {
        if (!value["UpdatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.UpdatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedUser = string(value["UpdatedUser"].GetString());
        m_updatedUserHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("PageId") && !value["PageId"].IsNull())
    {
        if (!value["PageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.PageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageId = string(value["PageId"].GetString());
        m_pageIdHasBeenSet = true;
    }

    if (value.HasMember("ExtraParam") && !value["ExtraParam"].IsNull())
    {
        if (!value["ExtraParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.ExtraParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraParam = string(value["ExtraParam"].GetString());
        m_extraParamHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedTokenInfo.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmbedTokenInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_bITokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BIToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bIToken.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageId.c_str(), allocator).Move(), allocator);
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

}


uint64_t EmbedTokenInfo::GetId() const
{
    return m_id;
}

void EmbedTokenInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EmbedTokenInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string EmbedTokenInfo::GetBIToken() const
{
    return m_bIToken;
}

void EmbedTokenInfo::SetBIToken(const string& _bIToken)
{
    m_bIToken = _bIToken;
    m_bITokenHasBeenSet = true;
}

bool EmbedTokenInfo::BITokenHasBeenSet() const
{
    return m_bITokenHasBeenSet;
}

string EmbedTokenInfo::GetProjectId() const
{
    return m_projectId;
}

void EmbedTokenInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool EmbedTokenInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string EmbedTokenInfo::GetCreatedUser() const
{
    return m_createdUser;
}

void EmbedTokenInfo::SetCreatedUser(const string& _createdUser)
{
    m_createdUser = _createdUser;
    m_createdUserHasBeenSet = true;
}

bool EmbedTokenInfo::CreatedUserHasBeenSet() const
{
    return m_createdUserHasBeenSet;
}

string EmbedTokenInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void EmbedTokenInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool EmbedTokenInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string EmbedTokenInfo::GetUpdatedUser() const
{
    return m_updatedUser;
}

void EmbedTokenInfo::SetUpdatedUser(const string& _updatedUser)
{
    m_updatedUser = _updatedUser;
    m_updatedUserHasBeenSet = true;
}

bool EmbedTokenInfo::UpdatedUserHasBeenSet() const
{
    return m_updatedUserHasBeenSet;
}

string EmbedTokenInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void EmbedTokenInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool EmbedTokenInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string EmbedTokenInfo::GetPageId() const
{
    return m_pageId;
}

void EmbedTokenInfo::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool EmbedTokenInfo::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string EmbedTokenInfo::GetExtraParam() const
{
    return m_extraParam;
}

void EmbedTokenInfo::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool EmbedTokenInfo::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

string EmbedTokenInfo::GetScope() const
{
    return m_scope;
}

void EmbedTokenInfo::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool EmbedTokenInfo::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

uint64_t EmbedTokenInfo::GetExpireTime() const
{
    return m_expireTime;
}

void EmbedTokenInfo::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool EmbedTokenInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

