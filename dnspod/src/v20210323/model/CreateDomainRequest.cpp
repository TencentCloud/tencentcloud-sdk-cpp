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

#include <tencentcloud/dnspod/v20210323/model/CreateDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

CreateDomainRequest::CreateDomainRequest() :
    m_domainHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_isMarkHasBeenSet(false),
    m_transferSubDomainHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_isMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isMark.c_str(), allocator).Move(), allocator);
    }

    if (m_transferSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferSubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferSubDomain, allocator);
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


string CreateDomainRequest::GetDomain() const
{
    return m_domain;
}

void CreateDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t CreateDomainRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateDomainRequest::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateDomainRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreateDomainRequest::GetIsMark() const
{
    return m_isMark;
}

void CreateDomainRequest::SetIsMark(const string& _isMark)
{
    m_isMark = _isMark;
    m_isMarkHasBeenSet = true;
}

bool CreateDomainRequest::IsMarkHasBeenSet() const
{
    return m_isMarkHasBeenSet;
}

bool CreateDomainRequest::GetTransferSubDomain() const
{
    return m_transferSubDomain;
}

void CreateDomainRequest::SetTransferSubDomain(const bool& _transferSubDomain)
{
    m_transferSubDomain = _transferSubDomain;
    m_transferSubDomainHasBeenSet = true;
}

bool CreateDomainRequest::TransferSubDomainHasBeenSet() const
{
    return m_transferSubDomainHasBeenSet;
}

vector<TagItem> CreateDomainRequest::GetTags() const
{
    return m_tags;
}

void CreateDomainRequest::SetTags(const vector<TagItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDomainRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


