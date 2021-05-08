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

#include <tencentcloud/tem/v20201221/model/CreateResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

CreateResourceRequest::CreateResourceRequest() :
    m_namespaceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_sourceChannelHasBeenSet(false)
{
}

string CreateResourceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_namespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateResourceRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void CreateResourceRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool CreateResourceRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string CreateResourceRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateResourceRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateResourceRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CreateResourceRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateResourceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateResourceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t CreateResourceRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void CreateResourceRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool CreateResourceRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}


