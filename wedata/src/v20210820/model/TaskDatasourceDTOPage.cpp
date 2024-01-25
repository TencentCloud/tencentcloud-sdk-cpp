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

#include <tencentcloud/wedata/v20210820/model/TaskDatasourceDTOPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskDatasourceDTOPage::TaskDatasourceDTOPage() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome TaskDatasourceDTOPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDatasourceDTOPage.PageNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetUint64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDatasourceDTOPage.PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDatasourceDTOPage.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskDatasourceDTO item;
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

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDatasourceDTOPage.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDatasourceDTOPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


uint64_t TaskDatasourceDTOPage::GetPageNumber() const
{
    return m_pageNumber;
}

void TaskDatasourceDTOPage::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool TaskDatasourceDTOPage::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t TaskDatasourceDTOPage::GetPageSize() const
{
    return m_pageSize;
}

void TaskDatasourceDTOPage::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool TaskDatasourceDTOPage::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<TaskDatasourceDTO> TaskDatasourceDTOPage::GetItems() const
{
    return m_items;
}

void TaskDatasourceDTOPage::SetItems(const vector<TaskDatasourceDTO>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool TaskDatasourceDTOPage::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

uint64_t TaskDatasourceDTOPage::GetTotalCount() const
{
    return m_totalCount;
}

void TaskDatasourceDTOPage::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool TaskDatasourceDTOPage::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

