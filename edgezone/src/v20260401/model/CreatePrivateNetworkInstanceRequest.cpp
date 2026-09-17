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

#include <tencentcloud/edgezone/v20260401/model/CreatePrivateNetworkInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

CreatePrivateNetworkInstanceRequest::CreatePrivateNetworkInstanceRequest() :
    m_networkInstanceNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_maskHasBeenSet(false)
{
}

string CreatePrivateNetworkInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Network";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_network.c_str(), allocator).Move(), allocator);
    }

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mask, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePrivateNetworkInstanceRequest::GetNetworkInstanceName() const
{
    return m_networkInstanceName;
}

void CreatePrivateNetworkInstanceRequest::SetNetworkInstanceName(const string& _networkInstanceName)
{
    m_networkInstanceName = _networkInstanceName;
    m_networkInstanceNameHasBeenSet = true;
}

bool CreatePrivateNetworkInstanceRequest::NetworkInstanceNameHasBeenSet() const
{
    return m_networkInstanceNameHasBeenSet;
}

string CreatePrivateNetworkInstanceRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreatePrivateNetworkInstanceRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreatePrivateNetworkInstanceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreatePrivateNetworkInstanceRequest::GetNetwork() const
{
    return m_network;
}

void CreatePrivateNetworkInstanceRequest::SetNetwork(const string& _network)
{
    m_network = _network;
    m_networkHasBeenSet = true;
}

bool CreatePrivateNetworkInstanceRequest::NetworkHasBeenSet() const
{
    return m_networkHasBeenSet;
}

int64_t CreatePrivateNetworkInstanceRequest::GetMask() const
{
    return m_mask;
}

void CreatePrivateNetworkInstanceRequest::SetMask(const int64_t& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool CreatePrivateNetworkInstanceRequest::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}


