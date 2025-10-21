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

#include <tencentcloud/tcb/v20180608/model/DescribeWxGatewayRoutesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeWxGatewayRoutesRequest::DescribeWxGatewayRoutesRequest() :
    m_envIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_gatewayRouteNameHasBeenSet(false),
    m_gatewayVersionHasBeenSet(false)
{
}

string DescribeWxGatewayRoutesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayRouteName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeWxGatewayRoutesRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeWxGatewayRoutesRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeWxGatewayRoutesRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeWxGatewayRoutesRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeWxGatewayRoutesRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeWxGatewayRoutesRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribeWxGatewayRoutesRequest::GetGatewayRouteName() const
{
    return m_gatewayRouteName;
}

void DescribeWxGatewayRoutesRequest::SetGatewayRouteName(const string& _gatewayRouteName)
{
    m_gatewayRouteName = _gatewayRouteName;
    m_gatewayRouteNameHasBeenSet = true;
}

bool DescribeWxGatewayRoutesRequest::GatewayRouteNameHasBeenSet() const
{
    return m_gatewayRouteNameHasBeenSet;
}

string DescribeWxGatewayRoutesRequest::GetGatewayVersion() const
{
    return m_gatewayVersion;
}

void DescribeWxGatewayRoutesRequest::SetGatewayVersion(const string& _gatewayVersion)
{
    m_gatewayVersion = _gatewayVersion;
    m_gatewayVersionHasBeenSet = true;
}

bool DescribeWxGatewayRoutesRequest::GatewayVersionHasBeenSet() const
{
    return m_gatewayVersionHasBeenSet;
}


