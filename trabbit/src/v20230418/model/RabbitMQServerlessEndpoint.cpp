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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessEndpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQServerlessEndpoint::RabbitMQServerlessEndpoint() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false),
    m_vpcDataStreamEndpointStatusHasBeenSet(false),
    m_publicNetworkHasBeenSet(false),
    m_accessStrategyHasBeenSet(false),
    m_bandwidthHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQServerlessEndpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessEndpoint.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessEndpoint.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcEndpoint") && !value["VpcEndpoint"].IsNull())
    {
        if (!value["VpcEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessEndpoint.VpcEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcEndpoint = string(value["VpcEndpoint"].GetString());
        m_vpcEndpointHasBeenSet = true;
    }

    if (value.HasMember("VpcDataStreamEndpointStatus") && !value["VpcDataStreamEndpointStatus"].IsNull())
    {
        if (!value["VpcDataStreamEndpointStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessEndpoint.VpcDataStreamEndpointStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcDataStreamEndpointStatus = string(value["VpcDataStreamEndpointStatus"].GetString());
        m_vpcDataStreamEndpointStatusHasBeenSet = true;
    }

    if (value.HasMember("PublicNetwork") && !value["PublicNetwork"].IsNull())
    {
        if (!value["PublicNetwork"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessEndpoint.PublicNetwork` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetwork = value["PublicNetwork"].GetBool();
        m_publicNetworkHasBeenSet = true;
    }

    if (value.HasMember("AccessStrategy") && !value["AccessStrategy"].IsNull())
    {
        if (!value["AccessStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessEndpoint.AccessStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessStrategy = string(value["AccessStrategy"].GetString());
        m_accessStrategyHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessEndpoint.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQServerlessEndpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcDataStreamEndpointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcDataStreamEndpointStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcDataStreamEndpointStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_publicNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicNetwork, allocator);
    }

    if (m_accessStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

}


string RabbitMQServerlessEndpoint::GetVpcId() const
{
    return m_vpcId;
}

void RabbitMQServerlessEndpoint::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool RabbitMQServerlessEndpoint::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string RabbitMQServerlessEndpoint::GetSubnetId() const
{
    return m_subnetId;
}

void RabbitMQServerlessEndpoint::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool RabbitMQServerlessEndpoint::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string RabbitMQServerlessEndpoint::GetVpcEndpoint() const
{
    return m_vpcEndpoint;
}

void RabbitMQServerlessEndpoint::SetVpcEndpoint(const string& _vpcEndpoint)
{
    m_vpcEndpoint = _vpcEndpoint;
    m_vpcEndpointHasBeenSet = true;
}

bool RabbitMQServerlessEndpoint::VpcEndpointHasBeenSet() const
{
    return m_vpcEndpointHasBeenSet;
}

string RabbitMQServerlessEndpoint::GetVpcDataStreamEndpointStatus() const
{
    return m_vpcDataStreamEndpointStatus;
}

void RabbitMQServerlessEndpoint::SetVpcDataStreamEndpointStatus(const string& _vpcDataStreamEndpointStatus)
{
    m_vpcDataStreamEndpointStatus = _vpcDataStreamEndpointStatus;
    m_vpcDataStreamEndpointStatusHasBeenSet = true;
}

bool RabbitMQServerlessEndpoint::VpcDataStreamEndpointStatusHasBeenSet() const
{
    return m_vpcDataStreamEndpointStatusHasBeenSet;
}

bool RabbitMQServerlessEndpoint::GetPublicNetwork() const
{
    return m_publicNetwork;
}

void RabbitMQServerlessEndpoint::SetPublicNetwork(const bool& _publicNetwork)
{
    m_publicNetwork = _publicNetwork;
    m_publicNetworkHasBeenSet = true;
}

bool RabbitMQServerlessEndpoint::PublicNetworkHasBeenSet() const
{
    return m_publicNetworkHasBeenSet;
}

string RabbitMQServerlessEndpoint::GetAccessStrategy() const
{
    return m_accessStrategy;
}

void RabbitMQServerlessEndpoint::SetAccessStrategy(const string& _accessStrategy)
{
    m_accessStrategy = _accessStrategy;
    m_accessStrategyHasBeenSet = true;
}

bool RabbitMQServerlessEndpoint::AccessStrategyHasBeenSet() const
{
    return m_accessStrategyHasBeenSet;
}

int64_t RabbitMQServerlessEndpoint::GetBandwidth() const
{
    return m_bandwidth;
}

void RabbitMQServerlessEndpoint::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool RabbitMQServerlessEndpoint::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

