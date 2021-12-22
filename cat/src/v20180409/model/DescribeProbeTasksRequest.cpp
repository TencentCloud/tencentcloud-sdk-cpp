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

#include <tencentcloud/cat/v20180409/model/DescribeProbeTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeProbeTasksRequest::DescribeProbeTasksRequest() :
    m_taskIDsHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_targetAddressHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_orderStateHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskCategoryHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_ascendHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

string DescribeProbeTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIDs.begin(); itr != m_taskIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskStatus.begin(); itr != m_taskStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_orderStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderState, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskType.begin(); itr != m_taskType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_taskCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskCategory.begin(); itr != m_taskCategory.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_ascendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ascend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ascend, allocator);
    }

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
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


vector<string> DescribeProbeTasksRequest::GetTaskIDs() const
{
    return m_taskIDs;
}

void DescribeProbeTasksRequest::SetTaskIDs(const vector<string>& _taskIDs)
{
    m_taskIDs = _taskIDs;
    m_taskIDsHasBeenSet = true;
}

bool DescribeProbeTasksRequest::TaskIDsHasBeenSet() const
{
    return m_taskIDsHasBeenSet;
}

string DescribeProbeTasksRequest::GetTaskName() const
{
    return m_taskName;
}

void DescribeProbeTasksRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribeProbeTasksRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeProbeTasksRequest::GetTargetAddress() const
{
    return m_targetAddress;
}

void DescribeProbeTasksRequest::SetTargetAddress(const string& _targetAddress)
{
    m_targetAddress = _targetAddress;
    m_targetAddressHasBeenSet = true;
}

bool DescribeProbeTasksRequest::TargetAddressHasBeenSet() const
{
    return m_targetAddressHasBeenSet;
}

vector<int64_t> DescribeProbeTasksRequest::GetTaskStatus() const
{
    return m_taskStatus;
}

void DescribeProbeTasksRequest::SetTaskStatus(const vector<int64_t>& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DescribeProbeTasksRequest::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

int64_t DescribeProbeTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeProbeTasksRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeProbeTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeProbeTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeProbeTasksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeProbeTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeProbeTasksRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeProbeTasksRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeProbeTasksRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t DescribeProbeTasksRequest::GetOrderState() const
{
    return m_orderState;
}

void DescribeProbeTasksRequest::SetOrderState(const int64_t& _orderState)
{
    m_orderState = _orderState;
    m_orderStateHasBeenSet = true;
}

bool DescribeProbeTasksRequest::OrderStateHasBeenSet() const
{
    return m_orderStateHasBeenSet;
}

vector<int64_t> DescribeProbeTasksRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeProbeTasksRequest::SetTaskType(const vector<int64_t>& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeProbeTasksRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<int64_t> DescribeProbeTasksRequest::GetTaskCategory() const
{
    return m_taskCategory;
}

void DescribeProbeTasksRequest::SetTaskCategory(const vector<int64_t>& _taskCategory)
{
    m_taskCategory = _taskCategory;
    m_taskCategoryHasBeenSet = true;
}

bool DescribeProbeTasksRequest::TaskCategoryHasBeenSet() const
{
    return m_taskCategoryHasBeenSet;
}

string DescribeProbeTasksRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeProbeTasksRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeProbeTasksRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

bool DescribeProbeTasksRequest::GetAscend() const
{
    return m_ascend;
}

void DescribeProbeTasksRequest::SetAscend(const bool& _ascend)
{
    m_ascend = _ascend;
    m_ascendHasBeenSet = true;
}

bool DescribeProbeTasksRequest::AscendHasBeenSet() const
{
    return m_ascendHasBeenSet;
}

vector<KeyValuePair> DescribeProbeTasksRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeProbeTasksRequest::SetTagFilters(const vector<KeyValuePair>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeProbeTasksRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}


