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

#include <tencentcloud/tdmq/v20200217/model/VpcBindRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

VpcBindRecord::VpcBindRecord() :
    m_uniqueVpcIdHasBeenSet(false),
    m_uniqueSubnetIdHasBeenSet(false),
    m_routerIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome VpcBindRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UniqueVpcId") && !value["UniqueVpcId"].IsNull())
    {
        if (!value["UniqueVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcBindRecord.UniqueVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueVpcId = string(value["UniqueVpcId"].GetString());
        m_uniqueVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqueSubnetId") && !value["UniqueSubnetId"].IsNull())
    {
        if (!value["UniqueSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcBindRecord.UniqueSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueSubnetId = string(value["UniqueSubnetId"].GetString());
        m_uniqueSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("RouterId") && !value["RouterId"].IsNull())
    {
        if (!value["RouterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcBindRecord.RouterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routerId = string(value["RouterId"].GetString());
        m_routerIdHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcBindRecord.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcBindRecord.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcBindRecord.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcBindRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uniqueVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_routerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routerId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string VpcBindRecord::GetUniqueVpcId() const
{
    return m_uniqueVpcId;
}

void VpcBindRecord::SetUniqueVpcId(const string& _uniqueVpcId)
{
    m_uniqueVpcId = _uniqueVpcId;
    m_uniqueVpcIdHasBeenSet = true;
}

bool VpcBindRecord::UniqueVpcIdHasBeenSet() const
{
    return m_uniqueVpcIdHasBeenSet;
}

string VpcBindRecord::GetUniqueSubnetId() const
{
    return m_uniqueSubnetId;
}

void VpcBindRecord::SetUniqueSubnetId(const string& _uniqueSubnetId)
{
    m_uniqueSubnetId = _uniqueSubnetId;
    m_uniqueSubnetIdHasBeenSet = true;
}

bool VpcBindRecord::UniqueSubnetIdHasBeenSet() const
{
    return m_uniqueSubnetIdHasBeenSet;
}

string VpcBindRecord::GetRouterId() const
{
    return m_routerId;
}

void VpcBindRecord::SetRouterId(const string& _routerId)
{
    m_routerId = _routerId;
    m_routerIdHasBeenSet = true;
}

bool VpcBindRecord::RouterIdHasBeenSet() const
{
    return m_routerIdHasBeenSet;
}

string VpcBindRecord::GetIp() const
{
    return m_ip;
}

void VpcBindRecord::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool VpcBindRecord::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t VpcBindRecord::GetPort() const
{
    return m_port;
}

void VpcBindRecord::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool VpcBindRecord::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string VpcBindRecord::GetRemark() const
{
    return m_remark;
}

void VpcBindRecord::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool VpcBindRecord::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

