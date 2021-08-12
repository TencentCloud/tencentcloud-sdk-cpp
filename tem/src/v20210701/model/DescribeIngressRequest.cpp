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

#include <tencentcloud/tem/v20210701/model/DescribeIngressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DescribeIngressRequest::DescribeIngressRequest() :
    m_environmentIdHasBeenSet(false),
    m_clusterNamespaceHasBeenSet(false),
    m_ingressNameHasBeenSet(false),
    m_sourceChannelHasBeenSet(false)
{
}

string DescribeIngressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_ingressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ingressName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIngressRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DescribeIngressRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DescribeIngressRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DescribeIngressRequest::GetClusterNamespace() const
{
    return m_clusterNamespace;
}

void DescribeIngressRequest::SetClusterNamespace(const string& _clusterNamespace)
{
    m_clusterNamespace = _clusterNamespace;
    m_clusterNamespaceHasBeenSet = true;
}

bool DescribeIngressRequest::ClusterNamespaceHasBeenSet() const
{
    return m_clusterNamespaceHasBeenSet;
}

string DescribeIngressRequest::GetIngressName() const
{
    return m_ingressName;
}

void DescribeIngressRequest::SetIngressName(const string& _ingressName)
{
    m_ingressName = _ingressName;
    m_ingressNameHasBeenSet = true;
}

bool DescribeIngressRequest::IngressNameHasBeenSet() const
{
    return m_ingressNameHasBeenSet;
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


