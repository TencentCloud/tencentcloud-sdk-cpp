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

#include <tencentcloud/tag/v20180813/model/AttachResourcesTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tag::V20180813::Model;
using namespace rapidjson;
using namespace std;

AttachResourcesTagRequest::AttachResourcesTagRequest() :
    m_serviceTypeHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourcePrefixHasBeenSet(false)
{
}

string AttachResourcesTagRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePrefixHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourcePrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourcePrefix.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AttachResourcesTagRequest::GetServiceType() const
{
    return m_serviceType;
}

void AttachResourcesTagRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool AttachResourcesTagRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

vector<string> AttachResourcesTagRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void AttachResourcesTagRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool AttachResourcesTagRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string AttachResourcesTagRequest::GetTagKey() const
{
    return m_tagKey;
}

void AttachResourcesTagRequest::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool AttachResourcesTagRequest::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string AttachResourcesTagRequest::GetTagValue() const
{
    return m_tagValue;
}

void AttachResourcesTagRequest::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool AttachResourcesTagRequest::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

string AttachResourcesTagRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void AttachResourcesTagRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool AttachResourcesTagRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string AttachResourcesTagRequest::GetResourcePrefix() const
{
    return m_resourcePrefix;
}

void AttachResourcesTagRequest::SetResourcePrefix(const string& _resourcePrefix)
{
    m_resourcePrefix = _resourcePrefix;
    m_resourcePrefixHasBeenSet = true;
}

bool AttachResourcesTagRequest::ResourcePrefixHasBeenSet() const
{
    return m_resourcePrefixHasBeenSet;
}


