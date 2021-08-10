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

#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeCustomizedConfigListRequest::DescribeCustomizedConfigListRequest() :
    m_configTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_uconfigIdsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeCustomizedConfigListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configType.c_str(), allocator).Move(), allocator);
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

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_uconfigIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UconfigIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uconfigIds.begin(); itr != m_uconfigIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCustomizedConfigListRequest::GetConfigType() const
{
    return m_configType;
}

void DescribeCustomizedConfigListRequest::SetConfigType(const string& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool DescribeCustomizedConfigListRequest::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

int64_t DescribeCustomizedConfigListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCustomizedConfigListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCustomizedConfigListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeCustomizedConfigListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCustomizedConfigListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCustomizedConfigListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCustomizedConfigListRequest::GetConfigName() const
{
    return m_configName;
}

void DescribeCustomizedConfigListRequest::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool DescribeCustomizedConfigListRequest::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

vector<string> DescribeCustomizedConfigListRequest::GetUconfigIds() const
{
    return m_uconfigIds;
}

void DescribeCustomizedConfigListRequest::SetUconfigIds(const vector<string>& _uconfigIds)
{
    m_uconfigIds = _uconfigIds;
    m_uconfigIdsHasBeenSet = true;
}

bool DescribeCustomizedConfigListRequest::UconfigIdsHasBeenSet() const
{
    return m_uconfigIdsHasBeenSet;
}

vector<Filter> DescribeCustomizedConfigListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeCustomizedConfigListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeCustomizedConfigListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


