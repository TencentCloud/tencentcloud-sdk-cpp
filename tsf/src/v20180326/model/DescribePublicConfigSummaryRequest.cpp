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

#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribePublicConfigSummaryRequest::DescribePublicConfigSummaryRequest() :
    m_searchWordHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_configTagListHasBeenSet(false),
    m_disableProgramAuthCheckHasBeenSet(false),
    m_configIdListHasBeenSet(false)
{
}

string DescribePublicConfigSummaryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_configTagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_configTagList.begin(); itr != m_configTagList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_disableProgramAuthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableProgramAuthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableProgramAuthCheck, allocator);
    }

    if (m_configIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_configIdList.begin(); itr != m_configIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePublicConfigSummaryRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribePublicConfigSummaryRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribePublicConfigSummaryRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

int64_t DescribePublicConfigSummaryRequest::GetOffset() const
{
    return m_offset;
}

void DescribePublicConfigSummaryRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePublicConfigSummaryRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribePublicConfigSummaryRequest::GetLimit() const
{
    return m_limit;
}

void DescribePublicConfigSummaryRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePublicConfigSummaryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribePublicConfigSummaryRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribePublicConfigSummaryRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribePublicConfigSummaryRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribePublicConfigSummaryRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribePublicConfigSummaryRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribePublicConfigSummaryRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

vector<string> DescribePublicConfigSummaryRequest::GetConfigTagList() const
{
    return m_configTagList;
}

void DescribePublicConfigSummaryRequest::SetConfigTagList(const vector<string>& _configTagList)
{
    m_configTagList = _configTagList;
    m_configTagListHasBeenSet = true;
}

bool DescribePublicConfigSummaryRequest::ConfigTagListHasBeenSet() const
{
    return m_configTagListHasBeenSet;
}

bool DescribePublicConfigSummaryRequest::GetDisableProgramAuthCheck() const
{
    return m_disableProgramAuthCheck;
}

void DescribePublicConfigSummaryRequest::SetDisableProgramAuthCheck(const bool& _disableProgramAuthCheck)
{
    m_disableProgramAuthCheck = _disableProgramAuthCheck;
    m_disableProgramAuthCheckHasBeenSet = true;
}

bool DescribePublicConfigSummaryRequest::DisableProgramAuthCheckHasBeenSet() const
{
    return m_disableProgramAuthCheckHasBeenSet;
}

vector<string> DescribePublicConfigSummaryRequest::GetConfigIdList() const
{
    return m_configIdList;
}

void DescribePublicConfigSummaryRequest::SetConfigIdList(const vector<string>& _configIdList)
{
    m_configIdList = _configIdList;
    m_configIdListHasBeenSet = true;
}

bool DescribePublicConfigSummaryRequest::ConfigIdListHasBeenSet() const
{
    return m_configIdListHasBeenSet;
}


