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

#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRun.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

InnerWorkflowTaskRun::InnerWorkflowTaskRun() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_totalPageNumberHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_iterationCountHasBeenSet(false),
    m_failureCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_innerWorkflowIdHasBeenSet(false),
    m_innerTaskIdHasBeenSet(false),
    m_innerTaskRunBizEnumInfosHasBeenSet(false)
{
}

CoreInternalOutcome InnerWorkflowTaskRun::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalPageNumber") && !value["TotalPageNumber"].IsNull())
    {
        if (!value["TotalPageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.TotalPageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPageNumber = value["TotalPageNumber"].GetInt64();
        m_totalPageNumberHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InnerWorkflowTaskRunIteration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (value.HasMember("IterationCount") && !value["IterationCount"].IsNull())
    {
        if (!value["IterationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.IterationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iterationCount = value["IterationCount"].GetInt64();
        m_iterationCountHasBeenSet = true;
    }

    if (value.HasMember("FailureCount") && !value["FailureCount"].IsNull())
    {
        if (!value["FailureCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.FailureCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failureCount = value["FailureCount"].GetInt64();
        m_failureCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("InnerWorkflowId") && !value["InnerWorkflowId"].IsNull())
    {
        if (!value["InnerWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.InnerWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerWorkflowId = string(value["InnerWorkflowId"].GetString());
        m_innerWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("InnerTaskId") && !value["InnerTaskId"].IsNull())
    {
        if (!value["InnerTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.InnerTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerTaskId = string(value["InnerTaskId"].GetString());
        m_innerTaskIdHasBeenSet = true;
    }

    if (value.HasMember("InnerTaskRunBizEnumInfos") && !value["InnerTaskRunBizEnumInfos"].IsNull())
    {
        if (!value["InnerTaskRunBizEnumInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRun.InnerTaskRunBizEnumInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["InnerTaskRunBizEnumInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScheduleBizEnumBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_innerTaskRunBizEnumInfos.push_back(item);
        }
        m_innerTaskRunBizEnumInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InnerWorkflowTaskRun::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_totalPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPageNumber, allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iterationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IterationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iterationCount, allocator);
    }

    if (m_failureCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failureCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_innerWorkflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerWorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerWorkflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_innerTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_innerTaskRunBizEnumInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerTaskRunBizEnumInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_innerTaskRunBizEnumInfos.begin(); itr != m_innerTaskRunBizEnumInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t InnerWorkflowTaskRun::GetPageNumber() const
{
    return m_pageNumber;
}

void InnerWorkflowTaskRun::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool InnerWorkflowTaskRun::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t InnerWorkflowTaskRun::GetPageSize() const
{
    return m_pageSize;
}

void InnerWorkflowTaskRun::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool InnerWorkflowTaskRun::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t InnerWorkflowTaskRun::GetTotalCount() const
{
    return m_totalCount;
}

void InnerWorkflowTaskRun::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool InnerWorkflowTaskRun::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t InnerWorkflowTaskRun::GetTotalPageNumber() const
{
    return m_totalPageNumber;
}

void InnerWorkflowTaskRun::SetTotalPageNumber(const int64_t& _totalPageNumber)
{
    m_totalPageNumber = _totalPageNumber;
    m_totalPageNumberHasBeenSet = true;
}

bool InnerWorkflowTaskRun::TotalPageNumberHasBeenSet() const
{
    return m_totalPageNumberHasBeenSet;
}

vector<InnerWorkflowTaskRunIteration> InnerWorkflowTaskRun::GetItems() const
{
    return m_items;
}

void InnerWorkflowTaskRun::SetItems(const vector<InnerWorkflowTaskRunIteration>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool InnerWorkflowTaskRun::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

int64_t InnerWorkflowTaskRun::GetIterationCount() const
{
    return m_iterationCount;
}

void InnerWorkflowTaskRun::SetIterationCount(const int64_t& _iterationCount)
{
    m_iterationCount = _iterationCount;
    m_iterationCountHasBeenSet = true;
}

bool InnerWorkflowTaskRun::IterationCountHasBeenSet() const
{
    return m_iterationCountHasBeenSet;
}

int64_t InnerWorkflowTaskRun::GetFailureCount() const
{
    return m_failureCount;
}

void InnerWorkflowTaskRun::SetFailureCount(const int64_t& _failureCount)
{
    m_failureCount = _failureCount;
    m_failureCountHasBeenSet = true;
}

bool InnerWorkflowTaskRun::FailureCountHasBeenSet() const
{
    return m_failureCountHasBeenSet;
}

int64_t InnerWorkflowTaskRun::GetSuccessCount() const
{
    return m_successCount;
}

void InnerWorkflowTaskRun::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool InnerWorkflowTaskRun::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

string InnerWorkflowTaskRun::GetInnerWorkflowId() const
{
    return m_innerWorkflowId;
}

void InnerWorkflowTaskRun::SetInnerWorkflowId(const string& _innerWorkflowId)
{
    m_innerWorkflowId = _innerWorkflowId;
    m_innerWorkflowIdHasBeenSet = true;
}

bool InnerWorkflowTaskRun::InnerWorkflowIdHasBeenSet() const
{
    return m_innerWorkflowIdHasBeenSet;
}

string InnerWorkflowTaskRun::GetInnerTaskId() const
{
    return m_innerTaskId;
}

void InnerWorkflowTaskRun::SetInnerTaskId(const string& _innerTaskId)
{
    m_innerTaskId = _innerTaskId;
    m_innerTaskIdHasBeenSet = true;
}

bool InnerWorkflowTaskRun::InnerTaskIdHasBeenSet() const
{
    return m_innerTaskIdHasBeenSet;
}

vector<ScheduleBizEnumBrief> InnerWorkflowTaskRun::GetInnerTaskRunBizEnumInfos() const
{
    return m_innerTaskRunBizEnumInfos;
}

void InnerWorkflowTaskRun::SetInnerTaskRunBizEnumInfos(const vector<ScheduleBizEnumBrief>& _innerTaskRunBizEnumInfos)
{
    m_innerTaskRunBizEnumInfos = _innerTaskRunBizEnumInfos;
    m_innerTaskRunBizEnumInfosHasBeenSet = true;
}

bool InnerWorkflowTaskRun::InnerTaskRunBizEnumInfosHasBeenSet() const
{
    return m_innerTaskRunBizEnumInfosHasBeenSet;
}

