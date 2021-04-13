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

#include <tencentcloud/cloudaudit/v20190319/model/DescribeEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace rapidjson;
using namespace std;

DescribeEventsRequest::DescribeEventsRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_lookupAttributesHasBeenSet(false)
{
}

string DescribeEventsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nextToken, allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_lookupAttributesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LookupAttributes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lookupAttributes.begin(); itr != m_lookupAttributes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeEventsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeEventsRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeEventsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeEventsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeEventsRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeEventsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeEventsRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeEventsRequest::SetNextToken(const uint64_t& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeEventsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

uint64_t DescribeEventsRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeEventsRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeEventsRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

vector<LookupAttribute> DescribeEventsRequest::GetLookupAttributes() const
{
    return m_lookupAttributes;
}

void DescribeEventsRequest::SetLookupAttributes(const vector<LookupAttribute>& _lookupAttributes)
{
    m_lookupAttributes = _lookupAttributes;
    m_lookupAttributesHasBeenSet = true;
}

bool DescribeEventsRequest::LookupAttributesHasBeenSet() const
{
    return m_lookupAttributesHasBeenSet;
}


