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

#include <tencentcloud/organization/v20210331/model/AddPermissionPolicyToRoleConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

AddPermissionPolicyToRoleConfigurationRequest::AddPermissionPolicyToRoleConfigurationRequest() :
    m_zoneIdHasBeenSet(false),
    m_roleConfigurationIdHasBeenSet(false),
    m_rolePolicyTypeHasBeenSet(false),
    m_rolePolicyNamesHasBeenSet(false),
    m_rolePoliciesHasBeenSet(false),
    m_customPolicyDocumentHasBeenSet(false),
    m_customPolicyDocumentsHasBeenSet(false)
{
}

string AddPermissionPolicyToRoleConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_rolePolicyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolePolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rolePolicyType.c_str(), allocator).Move(), allocator);
    }

    if (m_rolePolicyNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolePolicyNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rolePolicyNames.begin(); itr != m_rolePolicyNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rolePoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolePolicies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rolePolicies.begin(); itr != m_rolePolicies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_customPolicyDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customPolicyDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_customPolicyDocumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPolicyDocuments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customPolicyDocuments.begin(); itr != m_customPolicyDocuments.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddPermissionPolicyToRoleConfigurationRequest::GetZoneId() const
{
    return m_zoneId;
}

void AddPermissionPolicyToRoleConfigurationRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AddPermissionPolicyToRoleConfigurationRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string AddPermissionPolicyToRoleConfigurationRequest::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void AddPermissionPolicyToRoleConfigurationRequest::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool AddPermissionPolicyToRoleConfigurationRequest::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

string AddPermissionPolicyToRoleConfigurationRequest::GetRolePolicyType() const
{
    return m_rolePolicyType;
}

void AddPermissionPolicyToRoleConfigurationRequest::SetRolePolicyType(const string& _rolePolicyType)
{
    m_rolePolicyType = _rolePolicyType;
    m_rolePolicyTypeHasBeenSet = true;
}

bool AddPermissionPolicyToRoleConfigurationRequest::RolePolicyTypeHasBeenSet() const
{
    return m_rolePolicyTypeHasBeenSet;
}

vector<string> AddPermissionPolicyToRoleConfigurationRequest::GetRolePolicyNames() const
{
    return m_rolePolicyNames;
}

void AddPermissionPolicyToRoleConfigurationRequest::SetRolePolicyNames(const vector<string>& _rolePolicyNames)
{
    m_rolePolicyNames = _rolePolicyNames;
    m_rolePolicyNamesHasBeenSet = true;
}

bool AddPermissionPolicyToRoleConfigurationRequest::RolePolicyNamesHasBeenSet() const
{
    return m_rolePolicyNamesHasBeenSet;
}

vector<PolicyDetail> AddPermissionPolicyToRoleConfigurationRequest::GetRolePolicies() const
{
    return m_rolePolicies;
}

void AddPermissionPolicyToRoleConfigurationRequest::SetRolePolicies(const vector<PolicyDetail>& _rolePolicies)
{
    m_rolePolicies = _rolePolicies;
    m_rolePoliciesHasBeenSet = true;
}

bool AddPermissionPolicyToRoleConfigurationRequest::RolePoliciesHasBeenSet() const
{
    return m_rolePoliciesHasBeenSet;
}

string AddPermissionPolicyToRoleConfigurationRequest::GetCustomPolicyDocument() const
{
    return m_customPolicyDocument;
}

void AddPermissionPolicyToRoleConfigurationRequest::SetCustomPolicyDocument(const string& _customPolicyDocument)
{
    m_customPolicyDocument = _customPolicyDocument;
    m_customPolicyDocumentHasBeenSet = true;
}

bool AddPermissionPolicyToRoleConfigurationRequest::CustomPolicyDocumentHasBeenSet() const
{
    return m_customPolicyDocumentHasBeenSet;
}

vector<string> AddPermissionPolicyToRoleConfigurationRequest::GetCustomPolicyDocuments() const
{
    return m_customPolicyDocuments;
}

void AddPermissionPolicyToRoleConfigurationRequest::SetCustomPolicyDocuments(const vector<string>& _customPolicyDocuments)
{
    m_customPolicyDocuments = _customPolicyDocuments;
    m_customPolicyDocumentsHasBeenSet = true;
}

bool AddPermissionPolicyToRoleConfigurationRequest::CustomPolicyDocumentsHasBeenSet() const
{
    return m_customPolicyDocumentsHasBeenSet;
}


