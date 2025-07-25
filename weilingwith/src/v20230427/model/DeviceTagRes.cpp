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

#include <tencentcloud/weilingwith/v20230427/model/DeviceTagRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceTagRes::DeviceTagRes() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_totalRowHasBeenSet(false),
    m_setHasBeenSet(false)
{
}

CoreInternalOutcome DeviceTagRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTagRes.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTagRes.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalPage") && !value["TotalPage"].IsNull())
    {
        if (!value["TotalPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTagRes.TotalPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = value["TotalPage"].GetInt64();
        m_totalPageHasBeenSet = true;
    }

    if (value.HasMember("TotalRow") && !value["TotalRow"].IsNull())
    {
        if (!value["TotalRow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceTagRes.TotalRow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRow = value["TotalRow"].GetInt64();
        m_totalRowHasBeenSet = true;
    }

    if (value.HasMember("Set") && !value["Set"].IsNull())
    {
        if (!value["Set"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceTagRes.Set` is not array type"));

        const rapidjson::Value &tmpValue = value["Set"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_set.push_back(item);
        }
        m_setHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceTagRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_totalPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPage, allocator);
    }

    if (m_totalRowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRow, allocator);
    }

    if (m_setHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Set";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_set.begin(); itr != m_set.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DeviceTagRes::GetPageNumber() const
{
    return m_pageNumber;
}

void DeviceTagRes::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DeviceTagRes::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DeviceTagRes::GetPageSize() const
{
    return m_pageSize;
}

void DeviceTagRes::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DeviceTagRes::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DeviceTagRes::GetTotalPage() const
{
    return m_totalPage;
}

void DeviceTagRes::SetTotalPage(const int64_t& _totalPage)
{
    m_totalPage = _totalPage;
    m_totalPageHasBeenSet = true;
}

bool DeviceTagRes::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

int64_t DeviceTagRes::GetTotalRow() const
{
    return m_totalRow;
}

void DeviceTagRes::SetTotalRow(const int64_t& _totalRow)
{
    m_totalRow = _totalRow;
    m_totalRowHasBeenSet = true;
}

bool DeviceTagRes::TotalRowHasBeenSet() const
{
    return m_totalRowHasBeenSet;
}

vector<DeviceTagInfo> DeviceTagRes::GetSet() const
{
    return m_set;
}

void DeviceTagRes::SetSet(const vector<DeviceTagInfo>& _set)
{
    m_set = _set;
    m_setHasBeenSet = true;
}

bool DeviceTagRes::SetHasBeenSet() const
{
    return m_setHasBeenSet;
}

