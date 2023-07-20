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

#include <tencentcloud/wedata/v20210820/model/EventCaseAuditLogVOCollection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventCaseAuditLogVOCollection::EventCaseAuditLogVOCollection() :
    m_totalCountHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_pageCountHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome EventCaseAuditLogVOCollection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogVOCollection.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalPage") && !value["TotalPage"].IsNull())
    {
        if (!value["TotalPage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogVOCollection.TotalPage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = value["TotalPage"].GetUint64();
        m_totalPageHasBeenSet = true;
    }

    if (value.HasMember("PageCount") && !value["PageCount"].IsNull())
    {
        if (!value["PageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogVOCollection.PageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageCount = value["PageCount"].GetUint64();
        m_pageCountHasBeenSet = true;
    }

    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogVOCollection.PageNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetUint64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogVOCollection.PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogVOCollection.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventCaseAuditLogOptDto item;
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

void EventCaseAuditLogVOCollection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_totalPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPage, allocator);
    }

    if (m_pageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageCount, allocator);
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


uint64_t EventCaseAuditLogVOCollection::GetTotalCount() const
{
    return m_totalCount;
}

void EventCaseAuditLogVOCollection::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool EventCaseAuditLogVOCollection::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t EventCaseAuditLogVOCollection::GetTotalPage() const
{
    return m_totalPage;
}

void EventCaseAuditLogVOCollection::SetTotalPage(const uint64_t& _totalPage)
{
    m_totalPage = _totalPage;
    m_totalPageHasBeenSet = true;
}

bool EventCaseAuditLogVOCollection::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

uint64_t EventCaseAuditLogVOCollection::GetPageCount() const
{
    return m_pageCount;
}

void EventCaseAuditLogVOCollection::SetPageCount(const uint64_t& _pageCount)
{
    m_pageCount = _pageCount;
    m_pageCountHasBeenSet = true;
}

bool EventCaseAuditLogVOCollection::PageCountHasBeenSet() const
{
    return m_pageCountHasBeenSet;
}

uint64_t EventCaseAuditLogVOCollection::GetPageNumber() const
{
    return m_pageNumber;
}

void EventCaseAuditLogVOCollection::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool EventCaseAuditLogVOCollection::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t EventCaseAuditLogVOCollection::GetPageSize() const
{
    return m_pageSize;
}

void EventCaseAuditLogVOCollection::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool EventCaseAuditLogVOCollection::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<EventCaseAuditLogOptDto> EventCaseAuditLogVOCollection::GetItems() const
{
    return m_items;
}

void EventCaseAuditLogVOCollection::SetItems(const vector<EventCaseAuditLogOptDto>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool EventCaseAuditLogVOCollection::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

