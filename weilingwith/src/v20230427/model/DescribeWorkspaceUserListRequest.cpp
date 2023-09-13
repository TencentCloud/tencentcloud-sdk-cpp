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

#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceUserListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeWorkspaceUserListRequest::DescribeWorkspaceUserListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_updateAtHasBeenSet(false)
{
}

string DescribeWorkspaceUserListRequest::ToJsonString() const
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

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeWorkspaceUserListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeWorkspaceUserListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeWorkspaceUserListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeWorkspaceUserListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeWorkspaceUserListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeWorkspaceUserListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeWorkspaceUserListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeWorkspaceUserListRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeWorkspaceUserListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeWorkspaceUserListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeWorkspaceUserListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeWorkspaceUserListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

string DescribeWorkspaceUserListRequest::GetTenantId() const
{
    return m_tenantId;
}

void DescribeWorkspaceUserListRequest::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool DescribeWorkspaceUserListRequest::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

int64_t DescribeWorkspaceUserListRequest::GetUpdateAt() const
{
    return m_updateAt;
}

void DescribeWorkspaceUserListRequest::SetUpdateAt(const int64_t& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool DescribeWorkspaceUserListRequest::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}


