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

#include <tencentcloud/bmlb/v20180625/model/TrafficMirrorReceiver.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

TrafficMirrorReceiver::TrafficMirrorReceiver() :
    m_instanceIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_trafficMirrorIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_subnetCidrBlockHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_operatesHasBeenSet(false)
{
}

CoreInternalOutcome TrafficMirrorReceiver::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("TrafficMirrorId") && !value["TrafficMirrorId"].IsNull())
    {
        if (!value["TrafficMirrorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.TrafficMirrorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMirrorId = string(value["TrafficMirrorId"].GetString());
        m_trafficMirrorIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetCidrBlock") && !value["SubnetCidrBlock"].IsNull())
    {
        if (!value["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(value["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.HealthStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthStatus = string(value["HealthStatus"].GetString());
        m_healthStatusHasBeenSet = true;
    }

    if (value.HasMember("Operates") && !value["Operates"].IsNull())
    {
        if (!value["Operates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReceiver.Operates` is not array type"));

        const rapidjson::Value &tmpValue = value["Operates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operates.push_back((*itr).GetString());
        }
        m_operatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficMirrorReceiver::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_operatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operates.begin(); itr != m_operates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TrafficMirrorReceiver::GetInstanceId() const
{
    return m_instanceId;
}

void TrafficMirrorReceiver::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TrafficMirrorReceiver::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t TrafficMirrorReceiver::GetPort() const
{
    return m_port;
}

void TrafficMirrorReceiver::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TrafficMirrorReceiver::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t TrafficMirrorReceiver::GetWeight() const
{
    return m_weight;
}

void TrafficMirrorReceiver::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool TrafficMirrorReceiver::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string TrafficMirrorReceiver::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void TrafficMirrorReceiver::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool TrafficMirrorReceiver::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

string TrafficMirrorReceiver::GetAlias() const
{
    return m_alias;
}

void TrafficMirrorReceiver::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool TrafficMirrorReceiver::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string TrafficMirrorReceiver::GetLanIp() const
{
    return m_lanIp;
}

void TrafficMirrorReceiver::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool TrafficMirrorReceiver::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string TrafficMirrorReceiver::GetSubnetId() const
{
    return m_subnetId;
}

void TrafficMirrorReceiver::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool TrafficMirrorReceiver::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string TrafficMirrorReceiver::GetSubnetName() const
{
    return m_subnetName;
}

void TrafficMirrorReceiver::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool TrafficMirrorReceiver::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string TrafficMirrorReceiver::GetSubnetCidrBlock() const
{
    return m_subnetCidrBlock;
}

void TrafficMirrorReceiver::SetSubnetCidrBlock(const string& _subnetCidrBlock)
{
    m_subnetCidrBlock = _subnetCidrBlock;
    m_subnetCidrBlockHasBeenSet = true;
}

bool TrafficMirrorReceiver::SubnetCidrBlockHasBeenSet() const
{
    return m_subnetCidrBlockHasBeenSet;
}

string TrafficMirrorReceiver::GetVpcId() const
{
    return m_vpcId;
}

void TrafficMirrorReceiver::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TrafficMirrorReceiver::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string TrafficMirrorReceiver::GetVpcName() const
{
    return m_vpcName;
}

void TrafficMirrorReceiver::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool TrafficMirrorReceiver::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string TrafficMirrorReceiver::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void TrafficMirrorReceiver::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool TrafficMirrorReceiver::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string TrafficMirrorReceiver::GetHealthStatus() const
{
    return m_healthStatus;
}

void TrafficMirrorReceiver::SetHealthStatus(const string& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool TrafficMirrorReceiver::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

vector<string> TrafficMirrorReceiver::GetOperates() const
{
    return m_operates;
}

void TrafficMirrorReceiver::SetOperates(const vector<string>& _operates)
{
    m_operates = _operates;
    m_operatesHasBeenSet = true;
}

bool TrafficMirrorReceiver::OperatesHasBeenSet() const
{
    return m_operatesHasBeenSet;
}

