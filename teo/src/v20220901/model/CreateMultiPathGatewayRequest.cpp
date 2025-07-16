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

#include <tencentcloud/teo/v20220901/model/CreateMultiPathGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateMultiPathGatewayRequest::CreateMultiPathGatewayRequest() :
    m_zoneIdHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_gatewayPortHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_gatewayIPHasBeenSet(false)
{
}

string CreateMultiPathGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gatewayPort, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayIP.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMultiPathGatewayRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateMultiPathGatewayRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateMultiPathGatewayRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateMultiPathGatewayRequest::GetGatewayType() const
{
    return m_gatewayType;
}

void CreateMultiPathGatewayRequest::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool CreateMultiPathGatewayRequest::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string CreateMultiPathGatewayRequest::GetGatewayName() const
{
    return m_gatewayName;
}

void CreateMultiPathGatewayRequest::SetGatewayName(const string& _gatewayName)
{
    m_gatewayName = _gatewayName;
    m_gatewayNameHasBeenSet = true;
}

bool CreateMultiPathGatewayRequest::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

int64_t CreateMultiPathGatewayRequest::GetGatewayPort() const
{
    return m_gatewayPort;
}

void CreateMultiPathGatewayRequest::SetGatewayPort(const int64_t& _gatewayPort)
{
    m_gatewayPort = _gatewayPort;
    m_gatewayPortHasBeenSet = true;
}

bool CreateMultiPathGatewayRequest::GatewayPortHasBeenSet() const
{
    return m_gatewayPortHasBeenSet;
}

string CreateMultiPathGatewayRequest::GetRegionId() const
{
    return m_regionId;
}

void CreateMultiPathGatewayRequest::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CreateMultiPathGatewayRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string CreateMultiPathGatewayRequest::GetGatewayIP() const
{
    return m_gatewayIP;
}

void CreateMultiPathGatewayRequest::SetGatewayIP(const string& _gatewayIP)
{
    m_gatewayIP = _gatewayIP;
    m_gatewayIPHasBeenSet = true;
}

bool CreateMultiPathGatewayRequest::GatewayIPHasBeenSet() const
{
    return m_gatewayIPHasBeenSet;
}


