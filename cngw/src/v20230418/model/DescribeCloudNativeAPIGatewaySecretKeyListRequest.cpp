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

#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

DescribeCloudNativeAPIGatewaySecretKeyListRequest::DescribeCloudNativeAPIGatewaySecretKeyListRequest() :
    m_gatewayIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_useToBindHasBeenSet(false)
{
}

string DescribeCloudNativeAPIGatewaySecretKeyListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
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

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_useToBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseToBind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useToBind, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudNativeAPIGatewaySecretKeyListRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeCloudNativeAPIGatewaySecretKeyListRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewaySecretKeyListRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

uint64_t DescribeCloudNativeAPIGatewaySecretKeyListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCloudNativeAPIGatewaySecretKeyListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewaySecretKeyListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeCloudNativeAPIGatewaySecretKeyListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCloudNativeAPIGatewaySecretKeyListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewaySecretKeyListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeCloudNativeAPIGatewaySecretKeyListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeCloudNativeAPIGatewaySecretKeyListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewaySecretKeyListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeCloudNativeAPIGatewaySecretKeyListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeCloudNativeAPIGatewaySecretKeyListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewaySecretKeyListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeCloudNativeAPIGatewaySecretKeyListRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeCloudNativeAPIGatewaySecretKeyListRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewaySecretKeyListRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewaySecretKeyListRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeCloudNativeAPIGatewaySecretKeyListRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewaySecretKeyListRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

bool DescribeCloudNativeAPIGatewaySecretKeyListRequest::GetUseToBind() const
{
    return m_useToBind;
}

void DescribeCloudNativeAPIGatewaySecretKeyListRequest::SetUseToBind(const bool& _useToBind)
{
    m_useToBind = _useToBind;
    m_useToBindHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewaySecretKeyListRequest::UseToBindHasBeenSet() const
{
    return m_useToBindHasBeenSet;
}


