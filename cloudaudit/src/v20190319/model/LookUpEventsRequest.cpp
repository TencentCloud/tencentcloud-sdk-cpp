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

#include <tencentcloud/cloudaudit/v20190319/model/LookUpEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace rapidjson;
using namespace std;

LookUpEventsRequest::LookUpEventsRequest() :
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_lookupAttributesHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

string LookUpEventsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
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

    if (m_maxResultsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t LookUpEventsRequest::GetEndTime() const
{
    return m_endTime;
}

void LookUpEventsRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LookUpEventsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t LookUpEventsRequest::GetStartTime() const
{
    return m_startTime;
}

void LookUpEventsRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LookUpEventsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<LookupAttribute> LookUpEventsRequest::GetLookupAttributes() const
{
    return m_lookupAttributes;
}

void LookUpEventsRequest::SetLookupAttributes(const vector<LookupAttribute>& _lookupAttributes)
{
    m_lookupAttributes = _lookupAttributes;
    m_lookupAttributesHasBeenSet = true;
}

bool LookUpEventsRequest::LookupAttributesHasBeenSet() const
{
    return m_lookupAttributesHasBeenSet;
}

int64_t LookUpEventsRequest::GetMaxResults() const
{
    return m_maxResults;
}

void LookUpEventsRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool LookUpEventsRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string LookUpEventsRequest::GetNextToken() const
{
    return m_nextToken;
}

void LookUpEventsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool LookUpEventsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}


