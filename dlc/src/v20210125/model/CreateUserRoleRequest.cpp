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

#include <tencentcloud/dlc/v20210125/model/CreateUserRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateUserRoleRequest::CreateUserRoleRequest() :
    m_arnHasBeenSet(false),
    m_descHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cosPermissionListHasBeenSet(false),
    m_permissionJsonHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

string CreateUserRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_arnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_arn.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPermissionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPermissionList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cosPermissionList.begin(); itr != m_cosPermissionList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_permissionJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_permissionJson.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDefault, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserRoleRequest::GetArn() const
{
    return m_arn;
}

void CreateUserRoleRequest::SetArn(const string& _arn)
{
    m_arn = _arn;
    m_arnHasBeenSet = true;
}

bool CreateUserRoleRequest::ArnHasBeenSet() const
{
    return m_arnHasBeenSet;
}

string CreateUserRoleRequest::GetDesc() const
{
    return m_desc;
}

void CreateUserRoleRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool CreateUserRoleRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string CreateUserRoleRequest::GetName() const
{
    return m_name;
}

void CreateUserRoleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateUserRoleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<CosPermission> CreateUserRoleRequest::GetCosPermissionList() const
{
    return m_cosPermissionList;
}

void CreateUserRoleRequest::SetCosPermissionList(const vector<CosPermission>& _cosPermissionList)
{
    m_cosPermissionList = _cosPermissionList;
    m_cosPermissionListHasBeenSet = true;
}

bool CreateUserRoleRequest::CosPermissionListHasBeenSet() const
{
    return m_cosPermissionListHasBeenSet;
}

string CreateUserRoleRequest::GetPermissionJson() const
{
    return m_permissionJson;
}

void CreateUserRoleRequest::SetPermissionJson(const string& _permissionJson)
{
    m_permissionJson = _permissionJson;
    m_permissionJsonHasBeenSet = true;
}

bool CreateUserRoleRequest::PermissionJsonHasBeenSet() const
{
    return m_permissionJsonHasBeenSet;
}

int64_t CreateUserRoleRequest::GetIsDefault() const
{
    return m_isDefault;
}

void CreateUserRoleRequest::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool CreateUserRoleRequest::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}


