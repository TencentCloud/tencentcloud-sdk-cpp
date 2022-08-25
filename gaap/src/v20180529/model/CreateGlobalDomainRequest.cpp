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

#include <tencentcloud/gaap/v20180529/model/CreateGlobalDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateGlobalDomainRequest::CreateGlobalDomainRequest() :
    m_projectIdHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

string CreateGlobalDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
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


int64_t CreateGlobalDomainRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateGlobalDomainRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateGlobalDomainRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateGlobalDomainRequest::GetDefaultValue() const
{
    return m_defaultValue;
}

void CreateGlobalDomainRequest::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool CreateGlobalDomainRequest::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string CreateGlobalDomainRequest::GetAlias() const
{
    return m_alias;
}

void CreateGlobalDomainRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CreateGlobalDomainRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

vector<TagPair> CreateGlobalDomainRequest::GetTagSet() const
{
    return m_tagSet;
}

void CreateGlobalDomainRequest::SetTagSet(const vector<TagPair>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool CreateGlobalDomainRequest::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}


