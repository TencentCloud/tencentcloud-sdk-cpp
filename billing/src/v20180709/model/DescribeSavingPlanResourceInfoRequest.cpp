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

#include <tencentcloud/billing/v20180709/model/DescribeSavingPlanResourceInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeSavingPlanResourceInfoRequest::DescribeSavingPlanResourceInfoRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_createStartDateHasBeenSet(false),
    m_createEndDateHasBeenSet(false)
{
}

string DescribeSavingPlanResourceInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_createStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_createEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createEndDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSavingPlanResourceInfoRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSavingPlanResourceInfoRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSavingPlanResourceInfoRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeSavingPlanResourceInfoRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSavingPlanResourceInfoRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSavingPlanResourceInfoRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeSavingPlanResourceInfoRequest::GetCreateStartDate() const
{
    return m_createStartDate;
}

void DescribeSavingPlanResourceInfoRequest::SetCreateStartDate(const string& _createStartDate)
{
    m_createStartDate = _createStartDate;
    m_createStartDateHasBeenSet = true;
}

bool DescribeSavingPlanResourceInfoRequest::CreateStartDateHasBeenSet() const
{
    return m_createStartDateHasBeenSet;
}

string DescribeSavingPlanResourceInfoRequest::GetCreateEndDate() const
{
    return m_createEndDate;
}

void DescribeSavingPlanResourceInfoRequest::SetCreateEndDate(const string& _createEndDate)
{
    m_createEndDate = _createEndDate;
    m_createEndDateHasBeenSet = true;
}

bool DescribeSavingPlanResourceInfoRequest::CreateEndDateHasBeenSet() const
{
    return m_createEndDateHasBeenSet;
}


