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

#include <tencentcloud/monitor/v20230616/model/PageByNumResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

PageByNumResult::PageByNumResult() :
    m_totalCountHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_currentPageNoHasBeenSet(false)
{
}

CoreInternalOutcome PageByNumResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNumResult.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalPage") && !value["TotalPage"].IsNull())
    {
        if (!value["TotalPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNumResult.TotalPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = value["TotalPage"].GetInt64();
        m_totalPageHasBeenSet = true;
    }

    if (value.HasMember("CurrentPageNo") && !value["CurrentPageNo"].IsNull())
    {
        if (!value["CurrentPageNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNumResult.CurrentPageNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPageNo = value["CurrentPageNo"].GetInt64();
        m_currentPageNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PageByNumResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_currentPageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPageNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPageNo, allocator);
    }

}


int64_t PageByNumResult::GetTotalCount() const
{
    return m_totalCount;
}

void PageByNumResult::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool PageByNumResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t PageByNumResult::GetTotalPage() const
{
    return m_totalPage;
}

void PageByNumResult::SetTotalPage(const int64_t& _totalPage)
{
    m_totalPage = _totalPage;
    m_totalPageHasBeenSet = true;
}

bool PageByNumResult::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

int64_t PageByNumResult::GetCurrentPageNo() const
{
    return m_currentPageNo;
}

void PageByNumResult::SetCurrentPageNo(const int64_t& _currentPageNo)
{
    m_currentPageNo = _currentPageNo;
    m_currentPageNoHasBeenSet = true;
}

bool PageByNumResult::CurrentPageNoHasBeenSet() const
{
    return m_currentPageNoHasBeenSet;
}

