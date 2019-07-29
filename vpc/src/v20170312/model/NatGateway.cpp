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

#include <tencentcloud/vpc/v20170312/model/NatGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

NatGateway::NatGateway() :
    m_natGatewayIdHasBeenSet(false),
    m_natGatewayNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_maxConcurrentConnectionHasBeenSet(false),
    m_publicIpAddressSetHasBeenSet(false),
    m_networkStateHasBeenSet(false),
    m_destinationIpPortTranslationNatRuleSetHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome NatGateway::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("NatGatewayId") && !value["NatGatewayId"].IsNull())
    {
        if (!value["NatGatewayId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NatGateway.NatGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayId = string(value["NatGatewayId"].GetString());
        m_natGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("NatGatewayName") && !value["NatGatewayName"].IsNull())
    {
        if (!value["NatGatewayName"].IsString())
        {
            return CoreInternalOutcome(Error("response `NatGateway.NatGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayName = string(value["NatGatewayName"].GetString());
        m_natGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `NatGateway.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `NatGateway.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NatGateway.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrentConnection") && !value["MaxConcurrentConnection"].IsNull())
    {
        if (!value["MaxConcurrentConnection"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NatGateway.MaxConcurrentConnection` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrentConnection = value["MaxConcurrentConnection"].GetUint64();
        m_maxConcurrentConnectionHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddressSet") && !value["PublicIpAddressSet"].IsNull())
    {
        if (!value["PublicIpAddressSet"].IsArray())
            return CoreInternalOutcome(Error("response `NatGateway.PublicIpAddressSet` is not array type"));

        const Value &tmpValue = value["PublicIpAddressSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NatGatewayAddress item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_publicIpAddressSet.push_back(item);
        }
        m_publicIpAddressSetHasBeenSet = true;
    }

    if (value.HasMember("NetworkState") && !value["NetworkState"].IsNull())
    {
        if (!value["NetworkState"].IsString())
        {
            return CoreInternalOutcome(Error("response `NatGateway.NetworkState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkState = string(value["NetworkState"].GetString());
        m_networkStateHasBeenSet = true;
    }

    if (value.HasMember("DestinationIpPortTranslationNatRuleSet") && !value["DestinationIpPortTranslationNatRuleSet"].IsNull())
    {
        if (!value["DestinationIpPortTranslationNatRuleSet"].IsArray())
            return CoreInternalOutcome(Error("response `NatGateway.DestinationIpPortTranslationNatRuleSet` is not array type"));

        const Value &tmpValue = value["DestinationIpPortTranslationNatRuleSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DestinationIpPortTranslationNatRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinationIpPortTranslationNatRuleSet.push_back(item);
        }
        m_destinationIpPortTranslationNatRuleSetHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NatGateway.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `NatGateway.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatGateway::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_natGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_natGatewayNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NatGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_natGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_maxConcurrentConnectionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxConcurrentConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrentConnection, allocator);
    }

    if (m_publicIpAddressSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicIpAddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publicIpAddressSet.begin(); itr != m_publicIpAddressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_networkStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkState.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationIpPortTranslationNatRuleSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationIpPortTranslationNatRuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinationIpPortTranslationNatRuleSet.begin(); itr != m_destinationIpPortTranslationNatRuleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


string NatGateway::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void NatGateway::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool NatGateway::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

string NatGateway::GetNatGatewayName() const
{
    return m_natGatewayName;
}

void NatGateway::SetNatGatewayName(const string& _natGatewayName)
{
    m_natGatewayName = _natGatewayName;
    m_natGatewayNameHasBeenSet = true;
}

bool NatGateway::NatGatewayNameHasBeenSet() const
{
    return m_natGatewayNameHasBeenSet;
}

string NatGateway::GetCreatedTime() const
{
    return m_createdTime;
}

void NatGateway::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool NatGateway::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string NatGateway::GetState() const
{
    return m_state;
}

void NatGateway::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NatGateway::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t NatGateway::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void NatGateway::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool NatGateway::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

uint64_t NatGateway::GetMaxConcurrentConnection() const
{
    return m_maxConcurrentConnection;
}

void NatGateway::SetMaxConcurrentConnection(const uint64_t& _maxConcurrentConnection)
{
    m_maxConcurrentConnection = _maxConcurrentConnection;
    m_maxConcurrentConnectionHasBeenSet = true;
}

bool NatGateway::MaxConcurrentConnectionHasBeenSet() const
{
    return m_maxConcurrentConnectionHasBeenSet;
}

vector<NatGatewayAddress> NatGateway::GetPublicIpAddressSet() const
{
    return m_publicIpAddressSet;
}

void NatGateway::SetPublicIpAddressSet(const vector<NatGatewayAddress>& _publicIpAddressSet)
{
    m_publicIpAddressSet = _publicIpAddressSet;
    m_publicIpAddressSetHasBeenSet = true;
}

bool NatGateway::PublicIpAddressSetHasBeenSet() const
{
    return m_publicIpAddressSetHasBeenSet;
}

string NatGateway::GetNetworkState() const
{
    return m_networkState;
}

void NatGateway::SetNetworkState(const string& _networkState)
{
    m_networkState = _networkState;
    m_networkStateHasBeenSet = true;
}

bool NatGateway::NetworkStateHasBeenSet() const
{
    return m_networkStateHasBeenSet;
}

vector<DestinationIpPortTranslationNatRule> NatGateway::GetDestinationIpPortTranslationNatRuleSet() const
{
    return m_destinationIpPortTranslationNatRuleSet;
}

void NatGateway::SetDestinationIpPortTranslationNatRuleSet(const vector<DestinationIpPortTranslationNatRule>& _destinationIpPortTranslationNatRuleSet)
{
    m_destinationIpPortTranslationNatRuleSet = _destinationIpPortTranslationNatRuleSet;
    m_destinationIpPortTranslationNatRuleSetHasBeenSet = true;
}

bool NatGateway::DestinationIpPortTranslationNatRuleSetHasBeenSet() const
{
    return m_destinationIpPortTranslationNatRuleSetHasBeenSet;
}

string NatGateway::GetVpcId() const
{
    return m_vpcId;
}

void NatGateway::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NatGateway::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NatGateway::GetZone() const
{
    return m_zone;
}

void NatGateway::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NatGateway::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

