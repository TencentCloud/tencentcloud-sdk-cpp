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

#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayInfoByIpRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeCloudNativeAPIGatewayInfoByIpRequest::DescribeCloudNativeAPIGatewayInfoByIpRequest() :
    m_publicNetworkIPHasBeenSet(false)
{
}

string DescribeCloudNativeAPIGatewayInfoByIpRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_publicNetworkIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publicNetworkIP.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudNativeAPIGatewayInfoByIpRequest::GetPublicNetworkIP() const
{
    return m_publicNetworkIP;
}

void DescribeCloudNativeAPIGatewayInfoByIpRequest::SetPublicNetworkIP(const string& _publicNetworkIP)
{
    m_publicNetworkIP = _publicNetworkIP;
    m_publicNetworkIPHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayInfoByIpRequest::PublicNetworkIPHasBeenSet() const
{
    return m_publicNetworkIPHasBeenSet;
}


