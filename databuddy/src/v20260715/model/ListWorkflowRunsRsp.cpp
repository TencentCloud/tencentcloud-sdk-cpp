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

#include <tencentcloud/databuddy/v20260715/model/ListWorkflowRunsRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListWorkflowRunsRsp::ListWorkflowRunsRsp() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_totalPageNumberHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_bizStateEnumInfosHasBeenSet(false),
    m_bizErrorCodeEnumInfosHasBeenSet(false)
{
}

CoreInternalOutcome ListWorkflowRunsRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListWorkflowRunsRsp.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListWorkflowRunsRsp.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListWorkflowRunsRsp.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalPageNumber") && !value["TotalPageNumber"].IsNull())
    {
        if (!value["TotalPageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListWorkflowRunsRsp.TotalPageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPageNumber = value["TotalPageNumber"].GetInt64();
        m_totalPageNumberHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListWorkflowRunsRsp.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowRun item;
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

    if (value.HasMember("BizStateEnumInfos") && !value["BizStateEnumInfos"].IsNull())
    {
        if (!value["BizStateEnumInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListWorkflowRunsRsp.BizStateEnumInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["BizStateEnumInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScheduleBizEnumBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bizStateEnumInfos.push_back(item);
        }
        m_bizStateEnumInfosHasBeenSet = true;
    }

    if (value.HasMember("BizErrorCodeEnumInfos") && !value["BizErrorCodeEnumInfos"].IsNull())
    {
        if (!value["BizErrorCodeEnumInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListWorkflowRunsRsp.BizErrorCodeEnumInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["BizErrorCodeEnumInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScheduleBizEnumBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bizErrorCodeEnumInfos.push_back(item);
        }
        m_bizErrorCodeEnumInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListWorkflowRunsRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_bizStateEnumInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizStateEnumInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bizStateEnumInfos.begin(); itr != m_bizStateEnumInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bizErrorCodeEnumInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizErrorCodeEnumInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bizErrorCodeEnumInfos.begin(); itr != m_bizErrorCodeEnumInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ListWorkflowRunsRsp::GetPageNumber() const
{
    return m_pageNumber;
}

void ListWorkflowRunsRsp::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListWorkflowRunsRsp::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListWorkflowRunsRsp::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkflowRunsRsp::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkflowRunsRsp::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t ListWorkflowRunsRsp::GetTotalCount() const
{
    return m_totalCount;
}

void ListWorkflowRunsRsp::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ListWorkflowRunsRsp::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t ListWorkflowRunsRsp::GetTotalPageNumber() const
{
    return m_totalPageNumber;
}

void ListWorkflowRunsRsp::SetTotalPageNumber(const int64_t& _totalPageNumber)
{
    m_totalPageNumber = _totalPageNumber;
    m_totalPageNumberHasBeenSet = true;
}

bool ListWorkflowRunsRsp::TotalPageNumberHasBeenSet() const
{
    return m_totalPageNumberHasBeenSet;
}

vector<WorkflowRun> ListWorkflowRunsRsp::GetItems() const
{
    return m_items;
}

void ListWorkflowRunsRsp::SetItems(const vector<WorkflowRun>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool ListWorkflowRunsRsp::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

vector<ScheduleBizEnumBrief> ListWorkflowRunsRsp::GetBizStateEnumInfos() const
{
    return m_bizStateEnumInfos;
}

void ListWorkflowRunsRsp::SetBizStateEnumInfos(const vector<ScheduleBizEnumBrief>& _bizStateEnumInfos)
{
    m_bizStateEnumInfos = _bizStateEnumInfos;
    m_bizStateEnumInfosHasBeenSet = true;
}

bool ListWorkflowRunsRsp::BizStateEnumInfosHasBeenSet() const
{
    return m_bizStateEnumInfosHasBeenSet;
}

vector<ScheduleBizEnumBrief> ListWorkflowRunsRsp::GetBizErrorCodeEnumInfos() const
{
    return m_bizErrorCodeEnumInfos;
}

void ListWorkflowRunsRsp::SetBizErrorCodeEnumInfos(const vector<ScheduleBizEnumBrief>& _bizErrorCodeEnumInfos)
{
    m_bizErrorCodeEnumInfos = _bizErrorCodeEnumInfos;
    m_bizErrorCodeEnumInfosHasBeenSet = true;
}

bool ListWorkflowRunsRsp::BizErrorCodeEnumInfosHasBeenSet() const
{
    return m_bizErrorCodeEnumInfosHasBeenSet;
}

