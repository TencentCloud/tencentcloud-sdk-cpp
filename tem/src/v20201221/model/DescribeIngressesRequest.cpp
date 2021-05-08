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

#include <tencentcloud/tem/v20201221/model/DescribeIngressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

DescribeIngressesRequest::DescribeIngressesRequest() :
    m_namespaceIdHasBeenSet(false),
    m_eksNamespaceHasBeenSet(false),
    m_sourceChannelHasBeenSet(false)
{
}

string DescribeIngressesRequest::ToJsonString() const
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

    if (m_eksNamespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EksNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_eksNamespace.c_str(), allocator).Move(), allocator);
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


string DescribeIngressesRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DescribeIngressesRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DescribeIngressesRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string DescribeIngressesRequest::GetEksNamespace() const
{
    return m_eksNamespace;
}

void DescribeIngressesRequest::SetEksNamespace(const string& _eksNamespace)
{
    m_eksNamespace = _eksNamespace;
    m_eksNamespaceHasBeenSet = true;
}

bool DescribeIngressesRequest::EksNamespaceHasBeenSet() const
{
    return m_eksNamespaceHasBeenSet;
}

int64_t DescribeIngressesRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void DescribeIngressesRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool DescribeIngressesRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}


