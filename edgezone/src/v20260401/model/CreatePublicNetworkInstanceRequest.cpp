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

#include <tencentcloud/edgezone/v20260401/model/CreatePublicNetworkInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

CreatePublicNetworkInstanceRequest::CreatePublicNetworkInstanceRequest() :
    m_zoneIdHasBeenSet(false),
    m_networkInstanceNameHasBeenSet(false),
    m_lineHasBeenSet(false),
    m_routeModeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_bgpAsNumberHasBeenSet(false),
    m_bgpPasswordHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

string CreatePublicNetworkInstanceRequest::ToJsonString() const
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

    if (m_networkInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_line.c_str(), allocator).Move(), allocator);
    }

    if (m_routeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_bgpAsNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpAsNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bgpAsNumber, allocator);
    }

    if (m_bgpPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bgpPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePublicNetworkInstanceRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreatePublicNetworkInstanceRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreatePublicNetworkInstanceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreatePublicNetworkInstanceRequest::GetNetworkInstanceName() const
{
    return m_networkInstanceName;
}

void CreatePublicNetworkInstanceRequest::SetNetworkInstanceName(const string& _networkInstanceName)
{
    m_networkInstanceName = _networkInstanceName;
    m_networkInstanceNameHasBeenSet = true;
}

bool CreatePublicNetworkInstanceRequest::NetworkInstanceNameHasBeenSet() const
{
    return m_networkInstanceNameHasBeenSet;
}

string CreatePublicNetworkInstanceRequest::GetLine() const
{
    return m_line;
}

void CreatePublicNetworkInstanceRequest::SetLine(const string& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool CreatePublicNetworkInstanceRequest::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

string CreatePublicNetworkInstanceRequest::GetRouteMode() const
{
    return m_routeMode;
}

void CreatePublicNetworkInstanceRequest::SetRouteMode(const string& _routeMode)
{
    m_routeMode = _routeMode;
    m_routeModeHasBeenSet = true;
}

bool CreatePublicNetworkInstanceRequest::RouteModeHasBeenSet() const
{
    return m_routeModeHasBeenSet;
}

int64_t CreatePublicNetworkInstanceRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreatePublicNetworkInstanceRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreatePublicNetworkInstanceRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t CreatePublicNetworkInstanceRequest::GetBgpAsNumber() const
{
    return m_bgpAsNumber;
}

void CreatePublicNetworkInstanceRequest::SetBgpAsNumber(const int64_t& _bgpAsNumber)
{
    m_bgpAsNumber = _bgpAsNumber;
    m_bgpAsNumberHasBeenSet = true;
}

bool CreatePublicNetworkInstanceRequest::BgpAsNumberHasBeenSet() const
{
    return m_bgpAsNumberHasBeenSet;
}

string CreatePublicNetworkInstanceRequest::GetBgpPassword() const
{
    return m_bgpPassword;
}

void CreatePublicNetworkInstanceRequest::SetBgpPassword(const string& _bgpPassword)
{
    m_bgpPassword = _bgpPassword;
    m_bgpPasswordHasBeenSet = true;
}

bool CreatePublicNetworkInstanceRequest::BgpPasswordHasBeenSet() const
{
    return m_bgpPasswordHasBeenSet;
}

string CreatePublicNetworkInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreatePublicNetworkInstanceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreatePublicNetworkInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}


