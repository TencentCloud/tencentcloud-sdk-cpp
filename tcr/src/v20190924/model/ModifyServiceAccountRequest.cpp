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

#include <tencentcloud/tcr/v20190924/model/ModifyServiceAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ModifyServiceAccountRequest::ModifyServiceAccountRequest() :
    m_registryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_disableHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

string ModifyServiceAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_expiresAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresAt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expiresAt, allocator);
    }

    if (m_disableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disable, allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr, ++i)
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


string ModifyServiceAccountRequest::GetRegistryId() const
{
    return m_registryId;
}

void ModifyServiceAccountRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ModifyServiceAccountRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ModifyServiceAccountRequest::GetName() const
{
    return m_name;
}

void ModifyServiceAccountRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyServiceAccountRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyServiceAccountRequest::GetDescription() const
{
    return m_description;
}

void ModifyServiceAccountRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyServiceAccountRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyServiceAccountRequest::GetDuration() const
{
    return m_duration;
}

void ModifyServiceAccountRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ModifyServiceAccountRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t ModifyServiceAccountRequest::GetExpiresAt() const
{
    return m_expiresAt;
}

void ModifyServiceAccountRequest::SetExpiresAt(const int64_t& _expiresAt)
{
    m_expiresAt = _expiresAt;
    m_expiresAtHasBeenSet = true;
}

bool ModifyServiceAccountRequest::ExpiresAtHasBeenSet() const
{
    return m_expiresAtHasBeenSet;
}

bool ModifyServiceAccountRequest::GetDisable() const
{
    return m_disable;
}

void ModifyServiceAccountRequest::SetDisable(const bool& _disable)
{
    m_disable = _disable;
    m_disableHasBeenSet = true;
}

bool ModifyServiceAccountRequest::DisableHasBeenSet() const
{
    return m_disableHasBeenSet;
}

vector<Permission> ModifyServiceAccountRequest::GetPermissions() const
{
    return m_permissions;
}

void ModifyServiceAccountRequest::SetPermissions(const vector<Permission>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool ModifyServiceAccountRequest::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}


