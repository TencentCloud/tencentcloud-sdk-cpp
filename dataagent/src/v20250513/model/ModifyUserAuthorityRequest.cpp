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

#include <tencentcloud/dataagent/v20250513/model/ModifyUserAuthorityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

ModifyUserAuthorityRequest::ModifyUserAuthorityRequest() :
    m_instanceIdHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_objectIdHasBeenSet(false),
    m_useScopeHasBeenSet(false),
    m_authorityUinsHasBeenSet(false)
{
}

string ModifyUserAuthorityRequest::ToJsonString() const
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

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

    if (m_useScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useScope, allocator);
    }

    if (m_authorityUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorityUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorityUins.begin(); itr != m_authorityUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserAuthorityRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyUserAuthorityRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyUserAuthorityRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyUserAuthorityRequest::GetModule() const
{
    return m_module;
}

void ModifyUserAuthorityRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ModifyUserAuthorityRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string ModifyUserAuthorityRequest::GetObjectId() const
{
    return m_objectId;
}

void ModifyUserAuthorityRequest::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool ModifyUserAuthorityRequest::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

int64_t ModifyUserAuthorityRequest::GetUseScope() const
{
    return m_useScope;
}

void ModifyUserAuthorityRequest::SetUseScope(const int64_t& _useScope)
{
    m_useScope = _useScope;
    m_useScopeHasBeenSet = true;
}

bool ModifyUserAuthorityRequest::UseScopeHasBeenSet() const
{
    return m_useScopeHasBeenSet;
}

vector<string> ModifyUserAuthorityRequest::GetAuthorityUins() const
{
    return m_authorityUins;
}

void ModifyUserAuthorityRequest::SetAuthorityUins(const vector<string>& _authorityUins)
{
    m_authorityUins = _authorityUins;
    m_authorityUinsHasBeenSet = true;
}

bool ModifyUserAuthorityRequest::AuthorityUinsHasBeenSet() const
{
    return m_authorityUinsHasBeenSet;
}


