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

#include <tencentcloud/monitor/v20230616/model/PageByNoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

PageByNoResult::PageByNoResult() :
    m_totalCountHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_currentPageNoHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

CoreInternalOutcome PageByNoResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNoResult.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalPage") && !value["TotalPage"].IsNull())
    {
        if (!value["TotalPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNoResult.TotalPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = value["TotalPage"].GetInt64();
        m_totalPageHasBeenSet = true;
    }

    if (value.HasMember("CurrentPageNo") && !value["CurrentPageNo"].IsNull())
    {
        if (!value["CurrentPageNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNoResult.CurrentPageNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPageNo = value["CurrentPageNo"].GetInt64();
        m_currentPageNoHasBeenSet = true;
    }

    if (value.HasMember("IsEnd") && !value["IsEnd"].IsNull())
    {
        if (!value["IsEnd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNoResult.IsEnd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnd = value["IsEnd"].GetBool();
        m_isEndHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PageByNoResult.End` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetBool();
        m_endHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PageByNoResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_isEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnd, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_end, allocator);
    }

}


int64_t PageByNoResult::GetTotalCount() const
{
    return m_totalCount;
}

void PageByNoResult::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool PageByNoResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t PageByNoResult::GetTotalPage() const
{
    return m_totalPage;
}

void PageByNoResult::SetTotalPage(const int64_t& _totalPage)
{
    m_totalPage = _totalPage;
    m_totalPageHasBeenSet = true;
}

bool PageByNoResult::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

int64_t PageByNoResult::GetCurrentPageNo() const
{
    return m_currentPageNo;
}

void PageByNoResult::SetCurrentPageNo(const int64_t& _currentPageNo)
{
    m_currentPageNo = _currentPageNo;
    m_currentPageNoHasBeenSet = true;
}

bool PageByNoResult::CurrentPageNoHasBeenSet() const
{
    return m_currentPageNoHasBeenSet;
}

bool PageByNoResult::GetIsEnd() const
{
    return m_isEnd;
}

void PageByNoResult::SetIsEnd(const bool& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool PageByNoResult::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

bool PageByNoResult::GetEnd() const
{
    return m_end;
}

void PageByNoResult::SetEnd(const bool& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool PageByNoResult::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

