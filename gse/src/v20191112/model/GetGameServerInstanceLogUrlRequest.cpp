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

#include <tencentcloud/gse/v20191112/model/GetGameServerInstanceLogUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

GetGameServerInstanceLogUrlRequest::GetGameServerInstanceLogUrlRequest() :
    m_fleetIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_serverIpHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

string GetGameServerInstanceLogUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverIp.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetGameServerInstanceLogUrlRequest::GetFleetId() const
{
    return m_fleetId;
}

void GetGameServerInstanceLogUrlRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool GetGameServerInstanceLogUrlRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string GetGameServerInstanceLogUrlRequest::GetInstanceId() const
{
    return m_instanceId;
}

void GetGameServerInstanceLogUrlRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool GetGameServerInstanceLogUrlRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string GetGameServerInstanceLogUrlRequest::GetServerIp() const
{
    return m_serverIp;
}

void GetGameServerInstanceLogUrlRequest::SetServerIp(const string& _serverIp)
{
    m_serverIp = _serverIp;
    m_serverIpHasBeenSet = true;
}

bool GetGameServerInstanceLogUrlRequest::ServerIpHasBeenSet() const
{
    return m_serverIpHasBeenSet;
}

uint64_t GetGameServerInstanceLogUrlRequest::GetOffset() const
{
    return m_offset;
}

void GetGameServerInstanceLogUrlRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetGameServerInstanceLogUrlRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetGameServerInstanceLogUrlRequest::GetSize() const
{
    return m_size;
}

void GetGameServerInstanceLogUrlRequest::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool GetGameServerInstanceLogUrlRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}


