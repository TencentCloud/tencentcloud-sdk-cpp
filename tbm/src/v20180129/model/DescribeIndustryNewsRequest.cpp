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

#include <tencentcloud/tbm/v20180129/model/DescribeIndustryNewsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbm::V20180129::Model;
using namespace std;

DescribeIndustryNewsRequest::DescribeIndustryNewsRequest() :
    m_industryIdHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_showListHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeIndustryNewsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_industryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_industryId.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_showListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showList, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIndustryNewsRequest::GetIndustryId() const
{
    return m_industryId;
}

void DescribeIndustryNewsRequest::SetIndustryId(const string& _industryId)
{
    m_industryId = _industryId;
    m_industryIdHasBeenSet = true;
}

bool DescribeIndustryNewsRequest::IndustryIdHasBeenSet() const
{
    return m_industryIdHasBeenSet;
}

string DescribeIndustryNewsRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeIndustryNewsRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeIndustryNewsRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeIndustryNewsRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeIndustryNewsRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeIndustryNewsRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

bool DescribeIndustryNewsRequest::GetShowList() const
{
    return m_showList;
}

void DescribeIndustryNewsRequest::SetShowList(const bool& _showList)
{
    m_showList = _showList;
    m_showListHasBeenSet = true;
}

bool DescribeIndustryNewsRequest::ShowListHasBeenSet() const
{
    return m_showListHasBeenSet;
}

int64_t DescribeIndustryNewsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIndustryNewsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIndustryNewsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeIndustryNewsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIndustryNewsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIndustryNewsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


