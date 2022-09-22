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

#include <tencentcloud/wedata/v20210820/model/DataSourceInfoPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataSourceInfoPage::DataSourceInfoPage() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_totalPageNumberHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceInfoPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfoPage.PageNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetUint64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfoPage.PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("Rows") && !value["Rows"].IsNull())
    {
        if (!value["Rows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSourceInfoPage.Rows` is not array type"));

        const rapidjson::Value &tmpValue = value["Rows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataSourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rows.push_back(item);
        }
        m_rowsHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfoPage.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalPageNumber") && !value["TotalPageNumber"].IsNull())
    {
        if (!value["TotalPageNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfoPage.TotalPageNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPageNumber = value["TotalPageNumber"].GetUint64();
        m_totalPageNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceInfoPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rows.begin(); itr != m_rows.end(); ++itr, ++i)
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

    if (m_totalPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPageNumber, allocator);
    }

}


uint64_t DataSourceInfoPage::GetPageNumber() const
{
    return m_pageNumber;
}

void DataSourceInfoPage::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DataSourceInfoPage::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DataSourceInfoPage::GetPageSize() const
{
    return m_pageSize;
}

void DataSourceInfoPage::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DataSourceInfoPage::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<DataSourceInfo> DataSourceInfoPage::GetRows() const
{
    return m_rows;
}

void DataSourceInfoPage::SetRows(const vector<DataSourceInfo>& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool DataSourceInfoPage::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

uint64_t DataSourceInfoPage::GetTotalCount() const
{
    return m_totalCount;
}

void DataSourceInfoPage::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DataSourceInfoPage::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DataSourceInfoPage::GetTotalPageNumber() const
{
    return m_totalPageNumber;
}

void DataSourceInfoPage::SetTotalPageNumber(const uint64_t& _totalPageNumber)
{
    m_totalPageNumber = _totalPageNumber;
    m_totalPageNumberHasBeenSet = true;
}

bool DataSourceInfoPage::TotalPageNumberHasBeenSet() const
{
    return m_totalPageNumberHasBeenSet;
}

