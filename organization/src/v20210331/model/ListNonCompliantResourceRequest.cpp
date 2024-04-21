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

#include <tencentcloud/organization/v20210331/model/ListNonCompliantResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListNonCompliantResourceRequest::ListNonCompliantResourceRequest() :
    m_maxResultsHasBeenSet(false),
    m_memberUinHasBeenSet(false),
    m_paginationTokenHasBeenSet(false),
    m_tagKeyHasBeenSet(false)
{
}

string ListNonCompliantResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_paginationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaginationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paginationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListNonCompliantResourceRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListNonCompliantResourceRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListNonCompliantResourceRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

uint64_t ListNonCompliantResourceRequest::GetMemberUin() const
{
    return m_memberUin;
}

void ListNonCompliantResourceRequest::SetMemberUin(const uint64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool ListNonCompliantResourceRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string ListNonCompliantResourceRequest::GetPaginationToken() const
{
    return m_paginationToken;
}

void ListNonCompliantResourceRequest::SetPaginationToken(const string& _paginationToken)
{
    m_paginationToken = _paginationToken;
    m_paginationTokenHasBeenSet = true;
}

bool ListNonCompliantResourceRequest::PaginationTokenHasBeenSet() const
{
    return m_paginationTokenHasBeenSet;
}

string ListNonCompliantResourceRequest::GetTagKey() const
{
    return m_tagKey;
}

void ListNonCompliantResourceRequest::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool ListNonCompliantResourceRequest::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}


