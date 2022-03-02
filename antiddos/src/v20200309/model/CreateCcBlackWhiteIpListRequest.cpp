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

#include <tencentcloud/antiddos/v20200309/model/CreateCcBlackWhiteIpListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CreateCcBlackWhiteIpListRequest::CreateCcBlackWhiteIpListRequest() :
    m_instanceIdHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

string CreateCcBlackWhiteIpListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCcBlackWhiteIpListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateCcBlackWhiteIpListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateCcBlackWhiteIpListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<IpSegment> CreateCcBlackWhiteIpListRequest::GetIpList() const
{
    return m_ipList;
}

void CreateCcBlackWhiteIpListRequest::SetIpList(const vector<IpSegment>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool CreateCcBlackWhiteIpListRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

string CreateCcBlackWhiteIpListRequest::GetType() const
{
    return m_type;
}

void CreateCcBlackWhiteIpListRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateCcBlackWhiteIpListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateCcBlackWhiteIpListRequest::GetIp() const
{
    return m_ip;
}

void CreateCcBlackWhiteIpListRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CreateCcBlackWhiteIpListRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CreateCcBlackWhiteIpListRequest::GetDomain() const
{
    return m_domain;
}

void CreateCcBlackWhiteIpListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateCcBlackWhiteIpListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateCcBlackWhiteIpListRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateCcBlackWhiteIpListRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateCcBlackWhiteIpListRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}


