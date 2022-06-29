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

#include <tencentcloud/cam/v20190116/model/CreateRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

CreateRoleRequest::CreateRoleRequest() :
    m_roleNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_consoleLoginHasBeenSet(false),
    m_sessionDurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_consoleLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_consoleLogin, allocator);
    }

    if (m_sessionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionDuration, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string CreateRoleRequest::GetRoleName() const
{
    return m_roleName;
}

void CreateRoleRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool CreateRoleRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string CreateRoleRequest::GetPolicyDocument() const
{
    return m_policyDocument;
}

void CreateRoleRequest::SetPolicyDocument(const string& _policyDocument)
{
    m_policyDocument = _policyDocument;
    m_policyDocumentHasBeenSet = true;
}

bool CreateRoleRequest::PolicyDocumentHasBeenSet() const
{
    return m_policyDocumentHasBeenSet;
}

string CreateRoleRequest::GetDescription() const
{
    return m_description;
}

void CreateRoleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRoleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CreateRoleRequest::GetConsoleLogin() const
{
    return m_consoleLogin;
}

void CreateRoleRequest::SetConsoleLogin(const uint64_t& _consoleLogin)
{
    m_consoleLogin = _consoleLogin;
    m_consoleLoginHasBeenSet = true;
}

bool CreateRoleRequest::ConsoleLoginHasBeenSet() const
{
    return m_consoleLoginHasBeenSet;
}

uint64_t CreateRoleRequest::GetSessionDuration() const
{
    return m_sessionDuration;
}

void CreateRoleRequest::SetSessionDuration(const uint64_t& _sessionDuration)
{
    m_sessionDuration = _sessionDuration;
    m_sessionDurationHasBeenSet = true;
}

bool CreateRoleRequest::SessionDurationHasBeenSet() const
{
    return m_sessionDurationHasBeenSet;
}

vector<RoleTags> CreateRoleRequest::GetTags() const
{
    return m_tags;
}

void CreateRoleRequest::SetTags(const vector<RoleTags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateRoleRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


