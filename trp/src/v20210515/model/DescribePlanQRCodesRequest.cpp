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

#include <tencentcloud/trp/v20210515/model/DescribePlanQRCodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

DescribePlanQRCodesRequest::DescribePlanQRCodesRequest() :
    m_planIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribePlanQRCodesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_planId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribePlanQRCodesRequest::GetPlanId() const
{
    return m_planId;
}

void DescribePlanQRCodesRequest::SetPlanId(const int64_t& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool DescribePlanQRCodesRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string DescribePlanQRCodesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribePlanQRCodesRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribePlanQRCodesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribePlanQRCodesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribePlanQRCodesRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribePlanQRCodesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribePlanQRCodesRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribePlanQRCodesRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribePlanQRCodesRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribePlanQRCodesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribePlanQRCodesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribePlanQRCodesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


