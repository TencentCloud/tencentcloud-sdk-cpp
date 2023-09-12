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

#include <tencentcloud/tsf/v20180326/model/DescribeDeliveryConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeDeliveryConfigsRequest::DescribeDeliveryConfigsRequest() :
    m_searchWordHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_programIdListHasBeenSet(false),
    m_configIdListHasBeenSet(false)
{
}

string DescribeDeliveryConfigsRequest::ToJsonString() const
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

    if (m_programIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programIdList.begin(); itr != m_programIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string DescribeDeliveryConfigsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeDeliveryConfigsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeDeliveryConfigsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

int64_t DescribeDeliveryConfigsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDeliveryConfigsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDeliveryConfigsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDeliveryConfigsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDeliveryConfigsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDeliveryConfigsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeDeliveryConfigsRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void DescribeDeliveryConfigsRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool DescribeDeliveryConfigsRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}

vector<string> DescribeDeliveryConfigsRequest::GetConfigIdList() const
{
    return m_configIdList;
}

void DescribeDeliveryConfigsRequest::SetConfigIdList(const vector<string>& _configIdList)
{
    m_configIdList = _configIdList;
    m_configIdListHasBeenSet = true;
}

bool DescribeDeliveryConfigsRequest::ConfigIdListHasBeenSet() const
{
    return m_configIdListHasBeenSet;
}


