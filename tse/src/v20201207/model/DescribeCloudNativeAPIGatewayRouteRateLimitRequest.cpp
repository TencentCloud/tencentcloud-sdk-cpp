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

#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeCloudNativeAPIGatewayRouteRateLimitRequest::DescribeCloudNativeAPIGatewayRouteRateLimitRequest() :
    m_gatewayIdHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

string DescribeCloudNativeAPIGatewayRouteRateLimitRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudNativeAPIGatewayRouteRateLimitRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeCloudNativeAPIGatewayRouteRateLimitRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayRouteRateLimitRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayRouteRateLimitRequest::GetId() const
{
    return m_id;
}

void DescribeCloudNativeAPIGatewayRouteRateLimitRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayRouteRateLimitRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


