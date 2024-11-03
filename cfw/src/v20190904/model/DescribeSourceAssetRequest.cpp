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

#include <tencentcloud/cfw/v20190904/model/DescribeSourceAssetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeSourceAssetRequest::DescribeSourceAssetRequest() :
    m_chooseTypeHasBeenSet(false),
    m_fuzzySearchHasBeenSet(false),
    m_insTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

string DescribeSourceAssetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_chooseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChooseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chooseType.c_str(), allocator).Move(), allocator);
    }

    if (m_fuzzySearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuzzySearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fuzzySearch.c_str(), allocator).Move(), allocator);
    }

    if (m_insTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_insType.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSourceAssetRequest::GetChooseType() const
{
    return m_chooseType;
}

void DescribeSourceAssetRequest::SetChooseType(const string& _chooseType)
{
    m_chooseType = _chooseType;
    m_chooseTypeHasBeenSet = true;
}

bool DescribeSourceAssetRequest::ChooseTypeHasBeenSet() const
{
    return m_chooseTypeHasBeenSet;
}

string DescribeSourceAssetRequest::GetFuzzySearch() const
{
    return m_fuzzySearch;
}

void DescribeSourceAssetRequest::SetFuzzySearch(const string& _fuzzySearch)
{
    m_fuzzySearch = _fuzzySearch;
    m_fuzzySearchHasBeenSet = true;
}

bool DescribeSourceAssetRequest::FuzzySearchHasBeenSet() const
{
    return m_fuzzySearchHasBeenSet;
}

string DescribeSourceAssetRequest::GetInsType() const
{
    return m_insType;
}

void DescribeSourceAssetRequest::SetInsType(const string& _insType)
{
    m_insType = _insType;
    m_insTypeHasBeenSet = true;
}

bool DescribeSourceAssetRequest::InsTypeHasBeenSet() const
{
    return m_insTypeHasBeenSet;
}

int64_t DescribeSourceAssetRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSourceAssetRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSourceAssetRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeSourceAssetRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSourceAssetRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSourceAssetRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeSourceAssetRequest::GetZone() const
{
    return m_zone;
}

void DescribeSourceAssetRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeSourceAssetRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}


