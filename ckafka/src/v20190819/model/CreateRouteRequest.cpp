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

#include <tencentcloud/ckafka/v20190819/model/CreateRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateRouteRequest::CreateRouteRequest() :
    m_instanceIdHasBeenSet(false),
    m_vipTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_authFlagHasBeenSet(false),
    m_callerAppidHasBeenSet(false),
    m_publicNetworkHasBeenSet(false),
    m_ipHasBeenSet(false)
{
}

string CreateRouteRequest::ToJsonString() const
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

    if (m_vipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vipType, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessType, allocator);
    }

    if (m_authFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authFlag, allocator);
    }

    if (m_callerAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallerAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_callerAppid, allocator);
    }

    if (m_publicNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetwork";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publicNetwork, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRouteRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRouteRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRouteRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateRouteRequest::GetVipType() const
{
    return m_vipType;
}

void CreateRouteRequest::SetVipType(const int64_t& _vipType)
{
    m_vipType = _vipType;
    m_vipTypeHasBeenSet = true;
}

bool CreateRouteRequest::VipTypeHasBeenSet() const
{
    return m_vipTypeHasBeenSet;
}

string CreateRouteRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateRouteRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateRouteRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateRouteRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateRouteRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateRouteRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateRouteRequest::GetAccessType() const
{
    return m_accessType;
}

void CreateRouteRequest::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CreateRouteRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

int64_t CreateRouteRequest::GetAuthFlag() const
{
    return m_authFlag;
}

void CreateRouteRequest::SetAuthFlag(const int64_t& _authFlag)
{
    m_authFlag = _authFlag;
    m_authFlagHasBeenSet = true;
}

bool CreateRouteRequest::AuthFlagHasBeenSet() const
{
    return m_authFlagHasBeenSet;
}

int64_t CreateRouteRequest::GetCallerAppid() const
{
    return m_callerAppid;
}

void CreateRouteRequest::SetCallerAppid(const int64_t& _callerAppid)
{
    m_callerAppid = _callerAppid;
    m_callerAppidHasBeenSet = true;
}

bool CreateRouteRequest::CallerAppidHasBeenSet() const
{
    return m_callerAppidHasBeenSet;
}

int64_t CreateRouteRequest::GetPublicNetwork() const
{
    return m_publicNetwork;
}

void CreateRouteRequest::SetPublicNetwork(const int64_t& _publicNetwork)
{
    m_publicNetwork = _publicNetwork;
    m_publicNetworkHasBeenSet = true;
}

bool CreateRouteRequest::PublicNetworkHasBeenSet() const
{
    return m_publicNetworkHasBeenSet;
}

string CreateRouteRequest::GetIp() const
{
    return m_ip;
}

void CreateRouteRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CreateRouteRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}


