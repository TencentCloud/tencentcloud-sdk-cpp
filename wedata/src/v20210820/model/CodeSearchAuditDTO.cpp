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

#include <tencentcloud/wedata/v20210820/model/CodeSearchAuditDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CodeSearchAuditDTO::CodeSearchAuditDTO() :
    m_tenantIdHasBeenSet(false),
    m_ownerUserIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

CoreInternalOutcome CodeSearchAuditDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchAuditDTO.TenantId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = value["TenantId"].GetUint64();
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserId") && !value["OwnerUserId"].IsNull())
    {
        if (!value["OwnerUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchAuditDTO.OwnerUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserId = value["OwnerUserId"].GetUint64();
        m_ownerUserIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchAuditDTO.UserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetUint64();
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchAuditDTO.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchAuditDTO.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeSearchAuditDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tenantId, allocator);
    }

    if (m_ownerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUserId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CodeSearchAuditDTO::GetTenantId() const
{
    return m_tenantId;
}

void CodeSearchAuditDTO::SetTenantId(const uint64_t& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool CodeSearchAuditDTO::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

uint64_t CodeSearchAuditDTO::GetOwnerUserId() const
{
    return m_ownerUserId;
}

void CodeSearchAuditDTO::SetOwnerUserId(const uint64_t& _ownerUserId)
{
    m_ownerUserId = _ownerUserId;
    m_ownerUserIdHasBeenSet = true;
}

bool CodeSearchAuditDTO::OwnerUserIdHasBeenSet() const
{
    return m_ownerUserIdHasBeenSet;
}

uint64_t CodeSearchAuditDTO::GetUserId() const
{
    return m_userId;
}

void CodeSearchAuditDTO::SetUserId(const uint64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CodeSearchAuditDTO::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t CodeSearchAuditDTO::GetProjectId() const
{
    return m_projectId;
}

void CodeSearchAuditDTO::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CodeSearchAuditDTO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CodeSearchAuditDTO::GetKeyword() const
{
    return m_keyword;
}

void CodeSearchAuditDTO::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool CodeSearchAuditDTO::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

