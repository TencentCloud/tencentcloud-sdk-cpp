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

#include <tencentcloud/cynosdb/v20190107/model/NetAddr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

NetAddr::NetAddr() :
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_wanIPHasBeenSet(false),
    m_wanStatusHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome NetAddr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("WanPort") && !value["WanPort"].IsNull())
    {
        if (!value["WanPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.WanPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = value["WanPort"].GetInt64();
        m_wanPortHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("WanIP") && !value["WanIP"].IsNull())
    {
        if (!value["WanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.WanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIP = string(value["WanIP"].GetString());
        m_wanIPHasBeenSet = true;
    }

    if (value.HasMember("WanStatus") && !value["WanStatus"].IsNull())
    {
        if (!value["WanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.WanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatus = string(value["WanStatus"].GetString());
        m_wanStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroupId") && !value["InstanceGroupId"].IsNull())
    {
        if (!value["InstanceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAddr.InstanceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGroupId = string(value["InstanceGroupId"].GetString());
        m_instanceGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetAddr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_wanDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_wanPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanPort, allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_wanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceGroupId.c_str(), allocator).Move(), allocator);
    }

}


string NetAddr::GetVip() const
{
    return m_vip;
}

void NetAddr::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool NetAddr::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t NetAddr::GetVport() const
{
    return m_vport;
}

void NetAddr::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool NetAddr::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string NetAddr::GetWanDomain() const
{
    return m_wanDomain;
}

void NetAddr::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool NetAddr::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

int64_t NetAddr::GetWanPort() const
{
    return m_wanPort;
}

void NetAddr::SetWanPort(const int64_t& _wanPort)
{
    m_wanPort = _wanPort;
    m_wanPortHasBeenSet = true;
}

bool NetAddr::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

string NetAddr::GetNetType() const
{
    return m_netType;
}

void NetAddr::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool NetAddr::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string NetAddr::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void NetAddr::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool NetAddr::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string NetAddr::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void NetAddr::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool NetAddr::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string NetAddr::GetDescription() const
{
    return m_description;
}

void NetAddr::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NetAddr::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NetAddr::GetWanIP() const
{
    return m_wanIP;
}

void NetAddr::SetWanIP(const string& _wanIP)
{
    m_wanIP = _wanIP;
    m_wanIPHasBeenSet = true;
}

bool NetAddr::WanIPHasBeenSet() const
{
    return m_wanIPHasBeenSet;
}

string NetAddr::GetWanStatus() const
{
    return m_wanStatus;
}

void NetAddr::SetWanStatus(const string& _wanStatus)
{
    m_wanStatus = _wanStatus;
    m_wanStatusHasBeenSet = true;
}

bool NetAddr::WanStatusHasBeenSet() const
{
    return m_wanStatusHasBeenSet;
}

string NetAddr::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void NetAddr::SetInstanceGroupId(const string& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool NetAddr::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

