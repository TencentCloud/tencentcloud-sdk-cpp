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

#include <tencentcloud/weilingwith/v20230427/model/DescribeTenantUserListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeTenantUserListRequest::DescribeTenantUserListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_updateAtHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_noRecursiveHasBeenSet(false)
{
}

string DescribeTenantUserListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateAt, allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_noRecursiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoRecursive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_noRecursive.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeTenantUserListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTenantUserListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTenantUserListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeTenantUserListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTenantUserListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTenantUserListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTenantUserListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeTenantUserListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeTenantUserListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

string DescribeTenantUserListRequest::GetTenantId() const
{
    return m_tenantId;
}

void DescribeTenantUserListRequest::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool DescribeTenantUserListRequest::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

int64_t DescribeTenantUserListRequest::GetUpdateAt() const
{
    return m_updateAt;
}

void DescribeTenantUserListRequest::SetUpdateAt(const int64_t& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool DescribeTenantUserListRequest::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}

string DescribeTenantUserListRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void DescribeTenantUserListRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool DescribeTenantUserListRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

string DescribeTenantUserListRequest::GetCursor() const
{
    return m_cursor;
}

void DescribeTenantUserListRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool DescribeTenantUserListRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

uint64_t DescribeTenantUserListRequest::GetStatus() const
{
    return m_status;
}

void DescribeTenantUserListRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeTenantUserListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTenantUserListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeTenantUserListRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeTenantUserListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeTenantUserListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeTenantUserListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeTenantUserListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeTenantUserListRequest::GetNoRecursive() const
{
    return m_noRecursive;
}

void DescribeTenantUserListRequest::SetNoRecursive(const string& _noRecursive)
{
    m_noRecursive = _noRecursive;
    m_noRecursiveHasBeenSet = true;
}

bool DescribeTenantUserListRequest::NoRecursiveHasBeenSet() const
{
    return m_noRecursiveHasBeenSet;
}


