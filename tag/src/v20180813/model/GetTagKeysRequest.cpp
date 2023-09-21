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

#include <tencentcloud/tag/v20180813/model/GetTagKeysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

GetTagKeysRequest::GetTagKeysRequest() :
    m_paginationTokenHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

string GetTagKeysRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_paginationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaginationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paginationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTagKeysRequest::GetPaginationToken() const
{
    return m_paginationToken;
}

void GetTagKeysRequest::SetPaginationToken(const string& _paginationToken)
{
    m_paginationToken = _paginationToken;
    m_paginationTokenHasBeenSet = true;
}

bool GetTagKeysRequest::PaginationTokenHasBeenSet() const
{
    return m_paginationTokenHasBeenSet;
}

uint64_t GetTagKeysRequest::GetMaxResults() const
{
    return m_maxResults;
}

void GetTagKeysRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool GetTagKeysRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string GetTagKeysRequest::GetCategory() const
{
    return m_category;
}

void GetTagKeysRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool GetTagKeysRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}


