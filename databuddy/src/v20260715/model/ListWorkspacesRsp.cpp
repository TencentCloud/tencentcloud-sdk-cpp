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

#include <tencentcloud/databuddy/v20260715/model/ListWorkspacesRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListWorkspacesRsp::ListWorkspacesRsp() :
    m_itemsHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_totalPageNumberHasBeenSet(false),
    m_isConsoleAdminHasBeenSet(false)
{
}

CoreInternalOutcome ListWorkspacesRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListWorkspacesRsp.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkspaceInfo item;
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

    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListWorkspacesRsp.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListWorkspacesRsp.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListWorkspacesRsp.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalPageNumber") && !value["TotalPageNumber"].IsNull())
    {
        if (!value["TotalPageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListWorkspacesRsp.TotalPageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPageNumber = value["TotalPageNumber"].GetInt64();
        m_totalPageNumberHasBeenSet = true;
    }

    if (value.HasMember("IsConsoleAdmin") && !value["IsConsoleAdmin"].IsNull())
    {
        if (!value["IsConsoleAdmin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListWorkspacesRsp.IsConsoleAdmin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isConsoleAdmin = value["IsConsoleAdmin"].GetBool();
        m_isConsoleAdminHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListWorkspacesRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_isConsoleAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsConsoleAdmin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isConsoleAdmin, allocator);
    }

}


vector<WorkspaceInfo> ListWorkspacesRsp::GetItems() const
{
    return m_items;
}

void ListWorkspacesRsp::SetItems(const vector<WorkspaceInfo>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool ListWorkspacesRsp::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

int64_t ListWorkspacesRsp::GetPageNumber() const
{
    return m_pageNumber;
}

void ListWorkspacesRsp::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListWorkspacesRsp::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListWorkspacesRsp::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkspacesRsp::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkspacesRsp::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t ListWorkspacesRsp::GetTotalCount() const
{
    return m_totalCount;
}

void ListWorkspacesRsp::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ListWorkspacesRsp::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t ListWorkspacesRsp::GetTotalPageNumber() const
{
    return m_totalPageNumber;
}

void ListWorkspacesRsp::SetTotalPageNumber(const int64_t& _totalPageNumber)
{
    m_totalPageNumber = _totalPageNumber;
    m_totalPageNumberHasBeenSet = true;
}

bool ListWorkspacesRsp::TotalPageNumberHasBeenSet() const
{
    return m_totalPageNumberHasBeenSet;
}

bool ListWorkspacesRsp::GetIsConsoleAdmin() const
{
    return m_isConsoleAdmin;
}

void ListWorkspacesRsp::SetIsConsoleAdmin(const bool& _isConsoleAdmin)
{
    m_isConsoleAdmin = _isConsoleAdmin;
    m_isConsoleAdminHasBeenSet = true;
}

bool ListWorkspacesRsp::IsConsoleAdminHasBeenSet() const
{
    return m_isConsoleAdminHasBeenSet;
}

