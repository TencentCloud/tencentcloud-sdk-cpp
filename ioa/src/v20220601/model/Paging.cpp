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

#include <tencentcloud/ioa/v20220601/model/Paging.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

Paging::Paging() :
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageCountHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome Paging::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Paging.PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("PageNum") && !value["PageNum"].IsNull())
    {
        if (!value["PageNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Paging.PageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = value["PageNum"].GetUint64();
        m_pageNumHasBeenSet = true;
    }

    if (value.HasMember("PageCount") && !value["PageCount"].IsNull())
    {
        if (!value["PageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Paging.PageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageCount = value["PageCount"].GetUint64();
        m_pageCountHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Paging.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Paging::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageCount, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


uint64_t Paging::GetPageSize() const
{
    return m_pageSize;
}

void Paging::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool Paging::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t Paging::GetPageNum() const
{
    return m_pageNum;
}

void Paging::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool Paging::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t Paging::GetPageCount() const
{
    return m_pageCount;
}

void Paging::SetPageCount(const uint64_t& _pageCount)
{
    m_pageCount = _pageCount;
    m_pageCountHasBeenSet = true;
}

bool Paging::PageCountHasBeenSet() const
{
    return m_pageCountHasBeenSet;
}

uint64_t Paging::GetTotal() const
{
    return m_total;
}

void Paging::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool Paging::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

