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

#include <tencentcloud/dataagent/v20250513/model/ModifyKnowledgeBaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

ModifyKnowledgeBaseRequest::ModifyKnowledgeBaseRequest() :
    m_instanceIdHasBeenSet(false),
    m_operateTypeHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_knowledgeBaseNameHasBeenSet(false),
    m_knowledgeBaseDescHasBeenSet(false),
    m_useScopeHasBeenSet(false),
    m_authorityUinsHasBeenSet(false)
{
}

string ModifyKnowledgeBaseRequest::ToJsonString() const
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

    if (m_operateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateType.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeBaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_knowledgeBaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeBaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_knowledgeBaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeBaseDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_knowledgeBaseDesc.c_str(), allocator).Move(), allocator);
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


string ModifyKnowledgeBaseRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyKnowledgeBaseRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyKnowledgeBaseRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyKnowledgeBaseRequest::GetOperateType() const
{
    return m_operateType;
}

void ModifyKnowledgeBaseRequest::SetOperateType(const string& _operateType)
{
    m_operateType = _operateType;
    m_operateTypeHasBeenSet = true;
}

bool ModifyKnowledgeBaseRequest::OperateTypeHasBeenSet() const
{
    return m_operateTypeHasBeenSet;
}

string ModifyKnowledgeBaseRequest::GetKnowledgeBaseId() const
{
    return m_knowledgeBaseId;
}

void ModifyKnowledgeBaseRequest::SetKnowledgeBaseId(const string& _knowledgeBaseId)
{
    m_knowledgeBaseId = _knowledgeBaseId;
    m_knowledgeBaseIdHasBeenSet = true;
}

bool ModifyKnowledgeBaseRequest::KnowledgeBaseIdHasBeenSet() const
{
    return m_knowledgeBaseIdHasBeenSet;
}

string ModifyKnowledgeBaseRequest::GetKnowledgeBaseName() const
{
    return m_knowledgeBaseName;
}

void ModifyKnowledgeBaseRequest::SetKnowledgeBaseName(const string& _knowledgeBaseName)
{
    m_knowledgeBaseName = _knowledgeBaseName;
    m_knowledgeBaseNameHasBeenSet = true;
}

bool ModifyKnowledgeBaseRequest::KnowledgeBaseNameHasBeenSet() const
{
    return m_knowledgeBaseNameHasBeenSet;
}

string ModifyKnowledgeBaseRequest::GetKnowledgeBaseDesc() const
{
    return m_knowledgeBaseDesc;
}

void ModifyKnowledgeBaseRequest::SetKnowledgeBaseDesc(const string& _knowledgeBaseDesc)
{
    m_knowledgeBaseDesc = _knowledgeBaseDesc;
    m_knowledgeBaseDescHasBeenSet = true;
}

bool ModifyKnowledgeBaseRequest::KnowledgeBaseDescHasBeenSet() const
{
    return m_knowledgeBaseDescHasBeenSet;
}

int64_t ModifyKnowledgeBaseRequest::GetUseScope() const
{
    return m_useScope;
}

void ModifyKnowledgeBaseRequest::SetUseScope(const int64_t& _useScope)
{
    m_useScope = _useScope;
    m_useScopeHasBeenSet = true;
}

bool ModifyKnowledgeBaseRequest::UseScopeHasBeenSet() const
{
    return m_useScopeHasBeenSet;
}

vector<string> ModifyKnowledgeBaseRequest::GetAuthorityUins() const
{
    return m_authorityUins;
}

void ModifyKnowledgeBaseRequest::SetAuthorityUins(const vector<string>& _authorityUins)
{
    m_authorityUins = _authorityUins;
    m_authorityUinsHasBeenSet = true;
}

bool ModifyKnowledgeBaseRequest::AuthorityUinsHasBeenSet() const
{
    return m_authorityUinsHasBeenSet;
}


