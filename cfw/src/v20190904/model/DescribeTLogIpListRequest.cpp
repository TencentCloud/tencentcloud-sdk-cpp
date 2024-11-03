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

#include <tencentcloud/cfw/v20190904/model/DescribeTLogIpListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeTLogIpListRequest::DescribeTLogIpListRequest() :
    m_endTimeHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_topHasBeenSet(false),
    m_searchValueHasBeenSet(false)
{
}

string DescribeTLogIpListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_topHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Top";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_top, allocator);
    }

    if (m_searchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchValue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTLogIpListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTLogIpListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTLogIpListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTLogIpListRequest::GetQueryType() const
{
    return m_queryType;
}

void DescribeTLogIpListRequest::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool DescribeTLogIpListRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

string DescribeTLogIpListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTLogIpListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTLogIpListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTLogIpListRequest::GetTop() const
{
    return m_top;
}

void DescribeTLogIpListRequest::SetTop(const int64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool DescribeTLogIpListRequest::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

string DescribeTLogIpListRequest::GetSearchValue() const
{
    return m_searchValue;
}

void DescribeTLogIpListRequest::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool DescribeTLogIpListRequest::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}


