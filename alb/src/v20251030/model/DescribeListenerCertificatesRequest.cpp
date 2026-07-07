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

#include <tencentcloud/alb/v20251030/model/DescribeListenerCertificatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DescribeListenerCertificatesRequest::DescribeListenerCertificatesRequest() :
    m_certificateTypeHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

string DescribeListenerCertificatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateType.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeListenerCertificatesRequest::GetCertificateType() const
{
    return m_certificateType;
}

void DescribeListenerCertificatesRequest::SetCertificateType(const string& _certificateType)
{
    m_certificateType = _certificateType;
    m_certificateTypeHasBeenSet = true;
}

bool DescribeListenerCertificatesRequest::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

string DescribeListenerCertificatesRequest::GetListenerId() const
{
    return m_listenerId;
}

void DescribeListenerCertificatesRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DescribeListenerCertificatesRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string DescribeListenerCertificatesRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DescribeListenerCertificatesRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DescribeListenerCertificatesRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

uint64_t DescribeListenerCertificatesRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeListenerCertificatesRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeListenerCertificatesRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string DescribeListenerCertificatesRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeListenerCertificatesRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeListenerCertificatesRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}


