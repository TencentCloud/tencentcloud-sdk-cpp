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

#include <tencentcloud/bi/v20220105/model/CreatePermissionRanksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

CreatePermissionRanksRequest::CreatePermissionRanksRequest() :
    m_tableIdHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_rulerInfoHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_openStatusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_rowColumnConfigListHasBeenSet(false)
{
}

string CreatePermissionRanksRequest::ToJsonString() const
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

    if (m_rulerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulerInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rulerInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_openStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_rowColumnConfigListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowColumnConfigList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rowColumnConfigList.begin(); itr != m_rowColumnConfigList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreatePermissionRanksRequest::GetTableId() const
{
    return m_tableId;
}

void CreatePermissionRanksRequest::SetTableId(const int64_t& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool CreatePermissionRanksRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string CreatePermissionRanksRequest::GetMode() const
{
    return m_mode;
}

void CreatePermissionRanksRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreatePermissionRanksRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string CreatePermissionRanksRequest::GetRoleType() const
{
    return m_roleType;
}

void CreatePermissionRanksRequest::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool CreatePermissionRanksRequest::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

int64_t CreatePermissionRanksRequest::GetRoleId() const
{
    return m_roleId;
}

void CreatePermissionRanksRequest::SetRoleId(const int64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool CreatePermissionRanksRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string CreatePermissionRanksRequest::GetRulerInfo() const
{
    return m_rulerInfo;
}

void CreatePermissionRanksRequest::SetRulerInfo(const string& _rulerInfo)
{
    m_rulerInfo = _rulerInfo;
    m_rulerInfoHasBeenSet = true;
}

bool CreatePermissionRanksRequest::RulerInfoHasBeenSet() const
{
    return m_rulerInfoHasBeenSet;
}

string CreatePermissionRanksRequest::GetType() const
{
    return m_type;
}

void CreatePermissionRanksRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreatePermissionRanksRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreatePermissionRanksRequest::GetOpenStatus() const
{
    return m_openStatus;
}

void CreatePermissionRanksRequest::SetOpenStatus(const string& _openStatus)
{
    m_openStatus = _openStatus;
    m_openStatusHasBeenSet = true;
}

bool CreatePermissionRanksRequest::OpenStatusHasBeenSet() const
{
    return m_openStatusHasBeenSet;
}

int64_t CreatePermissionRanksRequest::GetProjectId() const
{
    return m_projectId;
}

void CreatePermissionRanksRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreatePermissionRanksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<RowColumnConfig> CreatePermissionRanksRequest::GetRowColumnConfigList() const
{
    return m_rowColumnConfigList;
}

void CreatePermissionRanksRequest::SetRowColumnConfigList(const vector<RowColumnConfig>& _rowColumnConfigList)
{
    m_rowColumnConfigList = _rowColumnConfigList;
    m_rowColumnConfigListHasBeenSet = true;
}

bool CreatePermissionRanksRequest::RowColumnConfigListHasBeenSet() const
{
    return m_rowColumnConfigListHasBeenSet;
}


