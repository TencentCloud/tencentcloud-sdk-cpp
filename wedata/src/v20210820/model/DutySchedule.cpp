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

#include <tencentcloud/wedata/v20210820/model/DutySchedule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DutySchedule::DutySchedule() :
    m_rowsHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalPageNumberHasBeenSet(false)
{
}

CoreInternalOutcome DutySchedule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rows") && !value["Rows"].IsNull())
    {
        if (!value["Rows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DutySchedule.Rows` is not array type"));

        const rapidjson::Value &tmpValue = value["Rows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DutyScheduleData item;
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
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DutySchedule.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DutySchedule.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DutySchedule.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalPageNumber") && !value["TotalPageNumber"].IsNull())
    {
        if (!value["TotalPageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DutySchedule.TotalPageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPageNumber = value["TotalPageNumber"].GetInt64();
        m_totalPageNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DutySchedule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_totalPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPageNumber, allocator);
    }

}


vector<DutyScheduleData> DutySchedule::GetRows() const
{
    return m_rows;
}

void DutySchedule::SetRows(const vector<DutyScheduleData>& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool DutySchedule::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

int64_t DutySchedule::GetTotalCount() const
{
    return m_totalCount;
}

void DutySchedule::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DutySchedule::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DutySchedule::GetPageNumber() const
{
    return m_pageNumber;
}

void DutySchedule::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DutySchedule::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DutySchedule::GetPageSize() const
{
    return m_pageSize;
}

void DutySchedule::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DutySchedule::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DutySchedule::GetTotalPageNumber() const
{
    return m_totalPageNumber;
}

void DutySchedule::SetTotalPageNumber(const int64_t& _totalPageNumber)
{
    m_totalPageNumber = _totalPageNumber;
    m_totalPageNumberHasBeenSet = true;
}

bool DutySchedule::TotalPageNumberHasBeenSet() const
{
    return m_totalPageNumberHasBeenSet;
}

