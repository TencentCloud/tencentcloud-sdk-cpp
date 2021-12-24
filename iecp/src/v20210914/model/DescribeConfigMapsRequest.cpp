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

#include <tencentcloud/iecp/v20210914/model/DescribeConfigMapsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeConfigMapsRequest::DescribeConfigMapsRequest() :
    m_edgeUnitIDHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_configMapNamespaceHasBeenSet(false),
    m_namePatternHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

string DescribeConfigMapsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitID, allocator);
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

    if (m_configMapNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMapNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configMapNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_namePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeConfigMapsRequest::GetEdgeUnitID() const
{
    return m_edgeUnitID;
}

void DescribeConfigMapsRequest::SetEdgeUnitID(const uint64_t& _edgeUnitID)
{
    m_edgeUnitID = _edgeUnitID;
    m_edgeUnitIDHasBeenSet = true;
}

bool DescribeConfigMapsRequest::EdgeUnitIDHasBeenSet() const
{
    return m_edgeUnitIDHasBeenSet;
}

uint64_t DescribeConfigMapsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeConfigMapsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeConfigMapsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeConfigMapsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeConfigMapsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeConfigMapsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeConfigMapsRequest::GetConfigMapNamespace() const
{
    return m_configMapNamespace;
}

void DescribeConfigMapsRequest::SetConfigMapNamespace(const string& _configMapNamespace)
{
    m_configMapNamespace = _configMapNamespace;
    m_configMapNamespaceHasBeenSet = true;
}

bool DescribeConfigMapsRequest::ConfigMapNamespaceHasBeenSet() const
{
    return m_configMapNamespaceHasBeenSet;
}

string DescribeConfigMapsRequest::GetNamePattern() const
{
    return m_namePattern;
}

void DescribeConfigMapsRequest::SetNamePattern(const string& _namePattern)
{
    m_namePattern = _namePattern;
    m_namePatternHasBeenSet = true;
}

bool DescribeConfigMapsRequest::NamePatternHasBeenSet() const
{
    return m_namePatternHasBeenSet;
}

FieldSort DescribeConfigMapsRequest::GetSort() const
{
    return m_sort;
}

void DescribeConfigMapsRequest::SetSort(const FieldSort& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeConfigMapsRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}


