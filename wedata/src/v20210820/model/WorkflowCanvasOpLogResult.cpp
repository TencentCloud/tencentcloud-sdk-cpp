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

#include <tencentcloud/wedata/v20210820/model/WorkflowCanvasOpLogResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

WorkflowCanvasOpLogResult::WorkflowCanvasOpLogResult() :
    m_totalItemsHasBeenSet(false),
    m_totalPagesHasBeenSet(false),
    m_currentPageItemsHasBeenSet(false),
    m_currentPageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowCanvasOpLogResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalItems") && !value["TotalItems"].IsNull())
    {
        if (!value["TotalItems"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpLogResult.TotalItems` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalItems = value["TotalItems"].GetInt64();
        m_totalItemsHasBeenSet = true;
    }

    if (value.HasMember("TotalPages") && !value["TotalPages"].IsNull())
    {
        if (!value["TotalPages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpLogResult.TotalPages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPages = value["TotalPages"].GetInt64();
        m_totalPagesHasBeenSet = true;
    }

    if (value.HasMember("CurrentPageItems") && !value["CurrentPageItems"].IsNull())
    {
        if (!value["CurrentPageItems"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpLogResult.CurrentPageItems` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPageItems = value["CurrentPageItems"].GetInt64();
        m_currentPageItemsHasBeenSet = true;
    }

    if (value.HasMember("CurrentPage") && !value["CurrentPage"].IsNull())
    {
        if (!value["CurrentPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpLogResult.CurrentPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPage = value["CurrentPage"].GetInt64();
        m_currentPageHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpLogResult.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpLogResult.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowCanvasOplog item;
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


    return CoreInternalOutcome(true);
}

void WorkflowCanvasOpLogResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalItems, allocator);
    }

    if (m_totalPagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPages, allocator);
    }

    if (m_currentPageItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPageItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPageItems, allocator);
    }

    if (m_currentPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPage, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
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

}


int64_t WorkflowCanvasOpLogResult::GetTotalItems() const
{
    return m_totalItems;
}

void WorkflowCanvasOpLogResult::SetTotalItems(const int64_t& _totalItems)
{
    m_totalItems = _totalItems;
    m_totalItemsHasBeenSet = true;
}

bool WorkflowCanvasOpLogResult::TotalItemsHasBeenSet() const
{
    return m_totalItemsHasBeenSet;
}

int64_t WorkflowCanvasOpLogResult::GetTotalPages() const
{
    return m_totalPages;
}

void WorkflowCanvasOpLogResult::SetTotalPages(const int64_t& _totalPages)
{
    m_totalPages = _totalPages;
    m_totalPagesHasBeenSet = true;
}

bool WorkflowCanvasOpLogResult::TotalPagesHasBeenSet() const
{
    return m_totalPagesHasBeenSet;
}

int64_t WorkflowCanvasOpLogResult::GetCurrentPageItems() const
{
    return m_currentPageItems;
}

void WorkflowCanvasOpLogResult::SetCurrentPageItems(const int64_t& _currentPageItems)
{
    m_currentPageItems = _currentPageItems;
    m_currentPageItemsHasBeenSet = true;
}

bool WorkflowCanvasOpLogResult::CurrentPageItemsHasBeenSet() const
{
    return m_currentPageItemsHasBeenSet;
}

int64_t WorkflowCanvasOpLogResult::GetCurrentPage() const
{
    return m_currentPage;
}

void WorkflowCanvasOpLogResult::SetCurrentPage(const int64_t& _currentPage)
{
    m_currentPage = _currentPage;
    m_currentPageHasBeenSet = true;
}

bool WorkflowCanvasOpLogResult::CurrentPageHasBeenSet() const
{
    return m_currentPageHasBeenSet;
}

int64_t WorkflowCanvasOpLogResult::GetPageSize() const
{
    return m_pageSize;
}

void WorkflowCanvasOpLogResult::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool WorkflowCanvasOpLogResult::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<WorkflowCanvasOplog> WorkflowCanvasOpLogResult::GetItems() const
{
    return m_items;
}

void WorkflowCanvasOpLogResult::SetItems(const vector<WorkflowCanvasOplog>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool WorkflowCanvasOpLogResult::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

