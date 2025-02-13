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

#include <tencentcloud/trocket/v20230308/model/CreateRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

CreateRoleRequest::CreateRoleRequest() :
    m_instanceIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_permWriteHasBeenSet(false),
    m_permReadHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_permTypeHasBeenSet(false),
    m_detailedPermsHasBeenSet(false)
{
}

string CreateRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_permWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermWrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_permWrite, allocator);
    }

    if (m_permReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermRead";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_permRead, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_permTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_permType.c_str(), allocator).Move(), allocator);
    }

    if (m_detailedPermsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailedPerms";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailedPerms.begin(); itr != m_detailedPerms.end(); ++itr, ++i)
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


string CreateRoleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRoleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRoleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateRoleRequest::GetRole() const
{
    return m_role;
}

void CreateRoleRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool CreateRoleRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

bool CreateRoleRequest::GetPermWrite() const
{
    return m_permWrite;
}

void CreateRoleRequest::SetPermWrite(const bool& _permWrite)
{
    m_permWrite = _permWrite;
    m_permWriteHasBeenSet = true;
}

bool CreateRoleRequest::PermWriteHasBeenSet() const
{
    return m_permWriteHasBeenSet;
}

bool CreateRoleRequest::GetPermRead() const
{
    return m_permRead;
}

void CreateRoleRequest::SetPermRead(const bool& _permRead)
{
    m_permRead = _permRead;
    m_permReadHasBeenSet = true;
}

bool CreateRoleRequest::PermReadHasBeenSet() const
{
    return m_permReadHasBeenSet;
}

string CreateRoleRequest::GetRemark() const
{
    return m_remark;
}

void CreateRoleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateRoleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateRoleRequest::GetPermType() const
{
    return m_permType;
}

void CreateRoleRequest::SetPermType(const string& _permType)
{
    m_permType = _permType;
    m_permTypeHasBeenSet = true;
}

bool CreateRoleRequest::PermTypeHasBeenSet() const
{
    return m_permTypeHasBeenSet;
}

vector<DetailedRolePerm> CreateRoleRequest::GetDetailedPerms() const
{
    return m_detailedPerms;
}

void CreateRoleRequest::SetDetailedPerms(const vector<DetailedRolePerm>& _detailedPerms)
{
    m_detailedPerms = _detailedPerms;
    m_detailedPermsHasBeenSet = true;
}

bool CreateRoleRequest::DetailedPermsHasBeenSet() const
{
    return m_detailedPermsHasBeenSet;
}


