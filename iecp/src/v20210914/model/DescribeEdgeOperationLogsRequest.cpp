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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeOperationLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeOperationLogsRequest::DescribeEdgeOperationLogsRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
}

string DescribeEdgeOperationLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sort.begin(); itr != m_sort.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEdgeOperationLogsRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeEdgeOperationLogsRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeEdgeOperationLogsRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeEdgeOperationLogsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeEdgeOperationLogsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeEdgeOperationLogsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeEdgeOperationLogsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEdgeOperationLogsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEdgeOperationLogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeEdgeOperationLogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEdgeOperationLogsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEdgeOperationLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<FieldSort> DescribeEdgeOperationLogsRequest::GetSort() const
{
    return m_sort;
}

void DescribeEdgeOperationLogsRequest::SetSort(const vector<FieldSort>& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeEdgeOperationLogsRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeEdgeOperationLogsRequest::GetModule() const
{
    return m_module;
}

void DescribeEdgeOperationLogsRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeEdgeOperationLogsRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

OperationLogsCondition DescribeEdgeOperationLogsRequest::GetCondition() const
{
    return m_condition;
}

void DescribeEdgeOperationLogsRequest::SetCondition(const OperationLogsCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeEdgeOperationLogsRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}


