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

#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsByTagKeysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

DescribeResourceTagsByTagKeysRequest::DescribeResourceTagsByTagKeysRequest() :
    m_serviceTypeHasBeenSet(false),
    m_resourcePrefixHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeResourceTagsByTagKeysRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourcePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagKeys.begin(); itr != m_tagKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeResourceTagsByTagKeysRequest::GetServiceType() const
{
    return m_serviceType;
}

void DescribeResourceTagsByTagKeysRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool DescribeResourceTagsByTagKeysRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string DescribeResourceTagsByTagKeysRequest::GetResourcePrefix() const
{
    return m_resourcePrefix;
}

void DescribeResourceTagsByTagKeysRequest::SetResourcePrefix(const string& _resourcePrefix)
{
    m_resourcePrefix = _resourcePrefix;
    m_resourcePrefixHasBeenSet = true;
}

bool DescribeResourceTagsByTagKeysRequest::ResourcePrefixHasBeenSet() const
{
    return m_resourcePrefixHasBeenSet;
}

string DescribeResourceTagsByTagKeysRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DescribeResourceTagsByTagKeysRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DescribeResourceTagsByTagKeysRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

vector<string> DescribeResourceTagsByTagKeysRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void DescribeResourceTagsByTagKeysRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool DescribeResourceTagsByTagKeysRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

vector<string> DescribeResourceTagsByTagKeysRequest::GetTagKeys() const
{
    return m_tagKeys;
}

void DescribeResourceTagsByTagKeysRequest::SetTagKeys(const vector<string>& _tagKeys)
{
    m_tagKeys = _tagKeys;
    m_tagKeysHasBeenSet = true;
}

bool DescribeResourceTagsByTagKeysRequest::TagKeysHasBeenSet() const
{
    return m_tagKeysHasBeenSet;
}

uint64_t DescribeResourceTagsByTagKeysRequest::GetLimit() const
{
    return m_limit;
}

void DescribeResourceTagsByTagKeysRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeResourceTagsByTagKeysRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeResourceTagsByTagKeysRequest::GetOffset() const
{
    return m_offset;
}

void DescribeResourceTagsByTagKeysRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeResourceTagsByTagKeysRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


