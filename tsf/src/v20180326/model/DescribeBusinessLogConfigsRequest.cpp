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

#include <tencentcloud/tsf/v20180326/model/DescribeBusinessLogConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeBusinessLogConfigsRequest::DescribeBusinessLogConfigsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_disableProgramAuthCheckHasBeenSet(false),
    m_configIdListHasBeenSet(false)
{
}

string DescribeBusinessLogConfigsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeBusinessLogConfigsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBusinessLogConfigsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBusinessLogConfigsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeBusinessLogConfigsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBusinessLogConfigsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBusinessLogConfigsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeBusinessLogConfigsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeBusinessLogConfigsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeBusinessLogConfigsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

bool DescribeBusinessLogConfigsRequest::GetDisableProgramAuthCheck() const
{
    return m_disableProgramAuthCheck;
}

void DescribeBusinessLogConfigsRequest::SetDisableProgramAuthCheck(const bool& _disableProgramAuthCheck)
{
    m_disableProgramAuthCheck = _disableProgramAuthCheck;
    m_disableProgramAuthCheckHasBeenSet = true;
}

bool DescribeBusinessLogConfigsRequest::DisableProgramAuthCheckHasBeenSet() const
{
    return m_disableProgramAuthCheckHasBeenSet;
}

vector<string> DescribeBusinessLogConfigsRequest::GetConfigIdList() const
{
    return m_configIdList;
}

void DescribeBusinessLogConfigsRequest::SetConfigIdList(const vector<string>& _configIdList)
{
    m_configIdList = _configIdList;
    m_configIdListHasBeenSet = true;
}

bool DescribeBusinessLogConfigsRequest::ConfigIdListHasBeenSet() const
{
    return m_configIdListHasBeenSet;
}


