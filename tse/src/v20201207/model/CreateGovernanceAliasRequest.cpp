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

#include <tencentcloud/tse/v20201207/model/CreateGovernanceAliasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateGovernanceAliasRequest::CreateGovernanceAliasRequest() :
    m_instanceIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_aliasNamespaceHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateGovernanceAliasRequest::ToJsonString() const
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

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aliasNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateGovernanceAliasRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateGovernanceAliasRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateGovernanceAliasRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateGovernanceAliasRequest::GetAlias() const
{
    return m_alias;
}

void CreateGovernanceAliasRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CreateGovernanceAliasRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CreateGovernanceAliasRequest::GetAliasNamespace() const
{
    return m_aliasNamespace;
}

void CreateGovernanceAliasRequest::SetAliasNamespace(const string& _aliasNamespace)
{
    m_aliasNamespace = _aliasNamespace;
    m_aliasNamespaceHasBeenSet = true;
}

bool CreateGovernanceAliasRequest::AliasNamespaceHasBeenSet() const
{
    return m_aliasNamespaceHasBeenSet;
}

string CreateGovernanceAliasRequest::GetService() const
{
    return m_service;
}

void CreateGovernanceAliasRequest::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool CreateGovernanceAliasRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string CreateGovernanceAliasRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateGovernanceAliasRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateGovernanceAliasRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CreateGovernanceAliasRequest::GetComment() const
{
    return m_comment;
}

void CreateGovernanceAliasRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateGovernanceAliasRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


