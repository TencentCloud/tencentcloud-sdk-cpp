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

#include <tencentcloud/cme/v20191029/model/GrantResourceAuthorizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

GrantResourceAuthorizationRequest::GrantResourceAuthorizationRequest() :
    m_platformHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_authorizeesHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string GrantResourceAuthorizationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_authorizeesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authorizees";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authorizees.begin(); itr != m_authorizees.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GrantResourceAuthorizationRequest::GetPlatform() const
{
    return m_platform;
}

void GrantResourceAuthorizationRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool GrantResourceAuthorizationRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

Entity GrantResourceAuthorizationRequest::GetOwner() const
{
    return m_owner;
}

void GrantResourceAuthorizationRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool GrantResourceAuthorizationRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

vector<Resource> GrantResourceAuthorizationRequest::GetResources() const
{
    return m_resources;
}

void GrantResourceAuthorizationRequest::SetResources(const vector<Resource>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool GrantResourceAuthorizationRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

vector<Entity> GrantResourceAuthorizationRequest::GetAuthorizees() const
{
    return m_authorizees;
}

void GrantResourceAuthorizationRequest::SetAuthorizees(const vector<Entity>& _authorizees)
{
    m_authorizees = _authorizees;
    m_authorizeesHasBeenSet = true;
}

bool GrantResourceAuthorizationRequest::AuthorizeesHasBeenSet() const
{
    return m_authorizeesHasBeenSet;
}

vector<string> GrantResourceAuthorizationRequest::GetPermissions() const
{
    return m_permissions;
}

void GrantResourceAuthorizationRequest::SetPermissions(const vector<string>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool GrantResourceAuthorizationRequest::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

string GrantResourceAuthorizationRequest::GetOperator() const
{
    return m_operator;
}

void GrantResourceAuthorizationRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool GrantResourceAuthorizationRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


