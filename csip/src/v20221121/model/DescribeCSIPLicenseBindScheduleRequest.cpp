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

#include <tencentcloud/csip/v20221121/model/DescribeCSIPLicenseBindScheduleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCSIPLicenseBindScheduleRequest::DescribeCSIPLicenseBindScheduleRequest() :
    m_taskIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeCSIPLicenseBindScheduleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

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

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
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


uint64_t DescribeCSIPLicenseBindScheduleRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeCSIPLicenseBindScheduleRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeCSIPLicenseBindScheduleRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeCSIPLicenseBindScheduleRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCSIPLicenseBindScheduleRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCSIPLicenseBindScheduleRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeCSIPLicenseBindScheduleRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCSIPLicenseBindScheduleRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCSIPLicenseBindScheduleRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<LicenseBindFilter> DescribeCSIPLicenseBindScheduleRequest::GetFilters() const
{
    return m_filters;
}

void DescribeCSIPLicenseBindScheduleRequest::SetFilters(const vector<LicenseBindFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeCSIPLicenseBindScheduleRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


