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

#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayUpstreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeCloudNativeAPIGatewayUpstreamRequest::DescribeCloudNativeAPIGatewayUpstreamRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

string DescribeCloudNativeAPIGatewayUpstreamRequest::ToJsonString() const
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

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudNativeAPIGatewayUpstreamRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeCloudNativeAPIGatewayUpstreamRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayUpstreamRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayUpstreamRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeCloudNativeAPIGatewayUpstreamRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayUpstreamRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}


