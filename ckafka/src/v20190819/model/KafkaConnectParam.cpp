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

#include <tencentcloud/ckafka/v20190819/model/KafkaConnectParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

KafkaConnectParam::KafkaConnectParam() :
    m_resourceHasBeenSet(false),
    m_selfBuiltHasBeenSet(false),
    m_isUpdateHasBeenSet(false),
    m_brokerAddressHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_serviceVipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_crossNetResourceUniqueIdHasBeenSet(false),
    m_crossNetVpcSubNetIdHasBeenSet(false)
{
}

CoreInternalOutcome KafkaConnectParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("SelfBuilt") && !value["SelfBuilt"].IsNull())
    {
        if (!value["SelfBuilt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.SelfBuilt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selfBuilt = value["SelfBuilt"].GetBool();
        m_selfBuiltHasBeenSet = true;
    }

    if (value.HasMember("IsUpdate") && !value["IsUpdate"].IsNull())
    {
        if (!value["IsUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.IsUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUpdate = value["IsUpdate"].GetBool();
        m_isUpdateHasBeenSet = true;
    }

    if (value.HasMember("BrokerAddress") && !value["BrokerAddress"].IsNull())
    {
        if (!value["BrokerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.BrokerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerAddress = string(value["BrokerAddress"].GetString());
        m_brokerAddressHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("CrossNetResourceUniqueId") && !value["CrossNetResourceUniqueId"].IsNull())
    {
        if (!value["CrossNetResourceUniqueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.CrossNetResourceUniqueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossNetResourceUniqueId = string(value["CrossNetResourceUniqueId"].GetString());
        m_crossNetResourceUniqueIdHasBeenSet = true;
    }

    if (value.HasMember("CrossNetVpcSubNetId") && !value["CrossNetVpcSubNetId"].IsNull())
    {
        if (!value["CrossNetVpcSubNetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConnectParam.CrossNetVpcSubNetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossNetVpcSubNetId = string(value["CrossNetVpcSubNetId"].GetString());
        m_crossNetVpcSubNetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KafkaConnectParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_selfBuiltHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfBuilt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfBuilt, allocator);
    }

    if (m_isUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUpdate, allocator);
    }

    if (m_brokerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_crossNetResourceUniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossNetResourceUniqueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossNetResourceUniqueId.c_str(), allocator).Move(), allocator);
    }

    if (m_crossNetVpcSubNetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossNetVpcSubNetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossNetVpcSubNetId.c_str(), allocator).Move(), allocator);
    }

}


string KafkaConnectParam::GetResource() const
{
    return m_resource;
}

void KafkaConnectParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool KafkaConnectParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

bool KafkaConnectParam::GetSelfBuilt() const
{
    return m_selfBuilt;
}

void KafkaConnectParam::SetSelfBuilt(const bool& _selfBuilt)
{
    m_selfBuilt = _selfBuilt;
    m_selfBuiltHasBeenSet = true;
}

bool KafkaConnectParam::SelfBuiltHasBeenSet() const
{
    return m_selfBuiltHasBeenSet;
}

bool KafkaConnectParam::GetIsUpdate() const
{
    return m_isUpdate;
}

void KafkaConnectParam::SetIsUpdate(const bool& _isUpdate)
{
    m_isUpdate = _isUpdate;
    m_isUpdateHasBeenSet = true;
}

bool KafkaConnectParam::IsUpdateHasBeenSet() const
{
    return m_isUpdateHasBeenSet;
}

string KafkaConnectParam::GetBrokerAddress() const
{
    return m_brokerAddress;
}

void KafkaConnectParam::SetBrokerAddress(const string& _brokerAddress)
{
    m_brokerAddress = _brokerAddress;
    m_brokerAddressHasBeenSet = true;
}

bool KafkaConnectParam::BrokerAddressHasBeenSet() const
{
    return m_brokerAddressHasBeenSet;
}

string KafkaConnectParam::GetRegion() const
{
    return m_region;
}

void KafkaConnectParam::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool KafkaConnectParam::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string KafkaConnectParam::GetNetworkType() const
{
    return m_networkType;
}

void KafkaConnectParam::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool KafkaConnectParam::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string KafkaConnectParam::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void KafkaConnectParam::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool KafkaConnectParam::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string KafkaConnectParam::GetServiceVip() const
{
    return m_serviceVip;
}

void KafkaConnectParam::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool KafkaConnectParam::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

int64_t KafkaConnectParam::GetPort() const
{
    return m_port;
}

void KafkaConnectParam::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool KafkaConnectParam::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string KafkaConnectParam::GetCrossNetResourceUniqueId() const
{
    return m_crossNetResourceUniqueId;
}

void KafkaConnectParam::SetCrossNetResourceUniqueId(const string& _crossNetResourceUniqueId)
{
    m_crossNetResourceUniqueId = _crossNetResourceUniqueId;
    m_crossNetResourceUniqueIdHasBeenSet = true;
}

bool KafkaConnectParam::CrossNetResourceUniqueIdHasBeenSet() const
{
    return m_crossNetResourceUniqueIdHasBeenSet;
}

string KafkaConnectParam::GetCrossNetVpcSubNetId() const
{
    return m_crossNetVpcSubNetId;
}

void KafkaConnectParam::SetCrossNetVpcSubNetId(const string& _crossNetVpcSubNetId)
{
    m_crossNetVpcSubNetId = _crossNetVpcSubNetId;
    m_crossNetVpcSubNetIdHasBeenSet = true;
}

bool KafkaConnectParam::CrossNetVpcSubNetIdHasBeenSet() const
{
    return m_crossNetVpcSubNetIdHasBeenSet;
}

