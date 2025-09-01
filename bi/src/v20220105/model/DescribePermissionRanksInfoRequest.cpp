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

#include <tencentcloud/bi/v20220105/model/DescribePermissionRanksInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribePermissionRanksInfoRequest::DescribePermissionRanksInfoRequest() :
    m_tableIdHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string DescribePermissionRanksInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tableId, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roleId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribePermissionRanksInfoRequest::GetTableId() const
{
    return m_tableId;
}

void DescribePermissionRanksInfoRequest::SetTableId(const int64_t& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool DescribePermissionRanksInfoRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string DescribePermissionRanksInfoRequest::GetMode() const
{
    return m_mode;
}

void DescribePermissionRanksInfoRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribePermissionRanksInfoRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribePermissionRanksInfoRequest::GetRoleType() const
{
    return m_roleType;
}

void DescribePermissionRanksInfoRequest::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool DescribePermissionRanksInfoRequest::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

int64_t DescribePermissionRanksInfoRequest::GetRoleId() const
{
    return m_roleId;
}

void DescribePermissionRanksInfoRequest::SetRoleId(const int64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool DescribePermissionRanksInfoRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string DescribePermissionRanksInfoRequest::GetType() const
{
    return m_type;
}

void DescribePermissionRanksInfoRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribePermissionRanksInfoRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribePermissionRanksInfoRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribePermissionRanksInfoRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribePermissionRanksInfoRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


