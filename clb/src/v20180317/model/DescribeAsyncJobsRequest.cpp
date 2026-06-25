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

#include <tencentcloud/clb/v20180317/model/DescribeAsyncJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeAsyncJobsRequest::DescribeAsyncJobsRequest() :
    m_requestIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResultsHasBeenSet(false)
{
}

string DescribeAsyncJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_requestIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_requestIds.begin(); itr != m_requestIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeAsyncJobsRequest::GetRequestIds() const
{
    return m_requestIds;
}

void DescribeAsyncJobsRequest::SetRequestIds(const vector<string>& _requestIds)
{
    m_requestIds = _requestIds;
    m_requestIdsHasBeenSet = true;
}

bool DescribeAsyncJobsRequest::RequestIdsHasBeenSet() const
{
    return m_requestIdsHasBeenSet;
}

string DescribeAsyncJobsRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeAsyncJobsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeAsyncJobsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

uint64_t DescribeAsyncJobsRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeAsyncJobsRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeAsyncJobsRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}


