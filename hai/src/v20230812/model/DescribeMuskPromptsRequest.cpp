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

#include <tencentcloud/hai/v20230812/model/DescribeMuskPromptsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

DescribeMuskPromptsRequest::DescribeMuskPromptsRequest() :
    m_workgroupIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeMuskPromptsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workgroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkgroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workgroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
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


string DescribeMuskPromptsRequest::GetWorkgroupId() const
{
    return m_workgroupId;
}

void DescribeMuskPromptsRequest::SetWorkgroupId(const string& _workgroupId)
{
    m_workgroupId = _workgroupId;
    m_workgroupIdHasBeenSet = true;
}

bool DescribeMuskPromptsRequest::WorkgroupIdHasBeenSet() const
{
    return m_workgroupIdHasBeenSet;
}

string DescribeMuskPromptsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeMuskPromptsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeMuskPromptsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

uint64_t DescribeMuskPromptsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMuskPromptsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMuskPromptsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeMuskPromptsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMuskPromptsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMuskPromptsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<Filter> DescribeMuskPromptsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeMuskPromptsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeMuskPromptsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


