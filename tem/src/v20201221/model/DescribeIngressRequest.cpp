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

#include <tencentcloud/tem/v20201221/model/DescribeIngressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

DescribeIngressRequest::DescribeIngressRequest() :
    m_namespaceIdHasBeenSet(false),
    m_eksNamespaceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceChannelHasBeenSet(false)
{
}

string DescribeIngressRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
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


string DescribeIngressRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DescribeIngressRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DescribeIngressRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string DescribeIngressRequest::GetEksNamespace() const
{
    return m_eksNamespace;
}

void DescribeIngressRequest::SetEksNamespace(const string& _eksNamespace)
{
    m_eksNamespace = _eksNamespace;
    m_eksNamespaceHasBeenSet = true;
}

bool DescribeIngressRequest::EksNamespaceHasBeenSet() const
{
    return m_eksNamespaceHasBeenSet;
}

string DescribeIngressRequest::GetName() const
{
    return m_name;
}

void DescribeIngressRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeIngressRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeIngressRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void DescribeIngressRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool DescribeIngressRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}


