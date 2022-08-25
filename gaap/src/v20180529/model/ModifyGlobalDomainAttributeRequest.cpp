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

#include <tencentcloud/gaap/v20180529/model/ModifyGlobalDomainAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ModifyGlobalDomainAttributeRequest::ModifyGlobalDomainAttributeRequest() :
    m_domainIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

string ModifyGlobalDomainAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyGlobalDomainAttributeRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyGlobalDomainAttributeRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyGlobalDomainAttributeRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

uint64_t ModifyGlobalDomainAttributeRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyGlobalDomainAttributeRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyGlobalDomainAttributeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyGlobalDomainAttributeRequest::GetAlias() const
{
    return m_alias;
}

void ModifyGlobalDomainAttributeRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ModifyGlobalDomainAttributeRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string ModifyGlobalDomainAttributeRequest::GetDefaultValue() const
{
    return m_defaultValue;
}

void ModifyGlobalDomainAttributeRequest::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ModifyGlobalDomainAttributeRequest::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}


