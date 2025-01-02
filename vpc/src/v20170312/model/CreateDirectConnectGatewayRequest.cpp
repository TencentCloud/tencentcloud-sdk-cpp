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

#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateDirectConnectGatewayRequest::CreateDirectConnectGatewayRequest() :
    m_directConnectGatewayNameHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_networkInstanceIdHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_modeTypeHasBeenSet(false),
    m_gatewayAsnHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_haZoneGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateDirectConnectGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_modeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modeType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayAsn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gatewayAsn, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_haZoneGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaZoneGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_haZoneGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDirectConnectGatewayRequest::GetDirectConnectGatewayName() const
{
    return m_directConnectGatewayName;
}

void CreateDirectConnectGatewayRequest::SetDirectConnectGatewayName(const string& _directConnectGatewayName)
{
    m_directConnectGatewayName = _directConnectGatewayName;
    m_directConnectGatewayNameHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::DirectConnectGatewayNameHasBeenSet() const
{
    return m_directConnectGatewayNameHasBeenSet;
}

string CreateDirectConnectGatewayRequest::GetNetworkType() const
{
    return m_networkType;
}

void CreateDirectConnectGatewayRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string CreateDirectConnectGatewayRequest::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void CreateDirectConnectGatewayRequest::SetNetworkInstanceId(const string& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

string CreateDirectConnectGatewayRequest::GetGatewayType() const
{
    return m_gatewayType;
}

void CreateDirectConnectGatewayRequest::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string CreateDirectConnectGatewayRequest::GetModeType() const
{
    return m_modeType;
}

void CreateDirectConnectGatewayRequest::SetModeType(const string& _modeType)
{
    m_modeType = _modeType;
    m_modeTypeHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::ModeTypeHasBeenSet() const
{
    return m_modeTypeHasBeenSet;
}

uint64_t CreateDirectConnectGatewayRequest::GetGatewayAsn() const
{
    return m_gatewayAsn;
}

void CreateDirectConnectGatewayRequest::SetGatewayAsn(const uint64_t& _gatewayAsn)
{
    m_gatewayAsn = _gatewayAsn;
    m_gatewayAsnHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::GatewayAsnHasBeenSet() const
{
    return m_gatewayAsnHasBeenSet;
}

string CreateDirectConnectGatewayRequest::GetZone() const
{
    return m_zone;
}

void CreateDirectConnectGatewayRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateDirectConnectGatewayRequest::GetHaZoneGroupId() const
{
    return m_haZoneGroupId;
}

void CreateDirectConnectGatewayRequest::SetHaZoneGroupId(const string& _haZoneGroupId)
{
    m_haZoneGroupId = _haZoneGroupId;
    m_haZoneGroupIdHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::HaZoneGroupIdHasBeenSet() const
{
    return m_haZoneGroupIdHasBeenSet;
}

vector<Tag> CreateDirectConnectGatewayRequest::GetTags() const
{
    return m_tags;
}

void CreateDirectConnectGatewayRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


