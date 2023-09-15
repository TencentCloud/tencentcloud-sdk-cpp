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
    m_zoneHasBeenSet(false),
    m_directConnectGatewayIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_securityGroupSetHasBeenSet(false),
    m_sourceIpTranslationNatRuleSetHasBeenSet(false),
    m_isExclusiveHasBeenSet(false),
    m_exclusiveGatewayBandwidthHasBeenSet(false),
    m_restrictStateHasBeenSet(false),
    m_natProductVersionHasBeenSet(false),
    m_smartScheduleModeHasBeenSet(false),
    m_dedicatedClusterIdHasBeenSet(false)
{
}

CoreInternalOutcome NatGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatGatewayId") && !value["NatGatewayId"].IsNull())
    {
        if (!value["NatGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.NatGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayId = string(value["NatGatewayId"].GetString());
        m_natGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("NatGatewayName") && !value["NatGatewayName"].IsNull())
    {
        if (!value["NatGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.NatGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayName = string(value["NatGatewayName"].GetString());
        m_natGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrentConnection") && !value["MaxConcurrentConnection"].IsNull())
    {
        if (!value["MaxConcurrentConnection"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.MaxConcurrentConnection` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrentConnection = value["MaxConcurrentConnection"].GetUint64();
        m_maxConcurrentConnectionHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddressSet") && !value["PublicIpAddressSet"].IsNull())
    {
        if (!value["PublicIpAddressSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatGateway.PublicIpAddressSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddressSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `NatGateway.NetworkState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkState = string(value["NetworkState"].GetString());
        m_networkStateHasBeenSet = true;
    }

    if (value.HasMember("DestinationIpPortTranslationNatRuleSet") && !value["DestinationIpPortTranslationNatRuleSet"].IsNull())
    {
        if (!value["DestinationIpPortTranslationNatRuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatGateway.DestinationIpPortTranslationNatRuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DestinationIpPortTranslationNatRuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `NatGateway.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayIds") && !value["DirectConnectGatewayIds"].IsNull())
    {
        if (!value["DirectConnectGatewayIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatGateway.DirectConnectGatewayIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DirectConnectGatewayIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_directConnectGatewayIds.push_back((*itr).GetString());
        }
        m_directConnectGatewayIdsHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatGateway.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupSet") && !value["SecurityGroupSet"].IsNull())
    {
        if (!value["SecurityGroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatGateway.SecurityGroupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupSet.push_back((*itr).GetString());
        }
        m_securityGroupSetHasBeenSet = true;
    }

    if (value.HasMember("SourceIpTranslationNatRuleSet") && !value["SourceIpTranslationNatRuleSet"].IsNull())
    {
        if (!value["SourceIpTranslationNatRuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatGateway.SourceIpTranslationNatRuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceIpTranslationNatRuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SourceIpTranslationNatRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceIpTranslationNatRuleSet.push_back(item);
        }
        m_sourceIpTranslationNatRuleSetHasBeenSet = true;
    }

    if (value.HasMember("IsExclusive") && !value["IsExclusive"].IsNull())
    {
        if (!value["IsExclusive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.IsExclusive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExclusive = value["IsExclusive"].GetBool();
        m_isExclusiveHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveGatewayBandwidth") && !value["ExclusiveGatewayBandwidth"].IsNull())
    {
        if (!value["ExclusiveGatewayBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.ExclusiveGatewayBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveGatewayBandwidth = value["ExclusiveGatewayBandwidth"].GetUint64();
        m_exclusiveGatewayBandwidthHasBeenSet = true;
    }

    if (value.HasMember("RestrictState") && !value["RestrictState"].IsNull())
    {
        if (!value["RestrictState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.RestrictState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictState = string(value["RestrictState"].GetString());
        m_restrictStateHasBeenSet = true;
    }

    if (value.HasMember("NatProductVersion") && !value["NatProductVersion"].IsNull())
    {
        if (!value["NatProductVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.NatProductVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_natProductVersion = value["NatProductVersion"].GetUint64();
        m_natProductVersionHasBeenSet = true;
    }

    if (value.HasMember("SmartScheduleMode") && !value["SmartScheduleMode"].IsNull())
    {
        if (!value["SmartScheduleMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.SmartScheduleMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_smartScheduleMode = value["SmartScheduleMode"].GetBool();
        m_smartScheduleModeHasBeenSet = true;
    }

    if (value.HasMember("DedicatedClusterId") && !value["DedicatedClusterId"].IsNull())
    {
        if (!value["DedicatedClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGateway.DedicatedClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterId = string(value["DedicatedClusterId"].GetString());
        m_dedicatedClusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_natGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_maxConcurrentConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrentConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrentConnection, allocator);
    }

    if (m_publicIpAddressSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publicIpAddressSet.begin(); itr != m_publicIpAddressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_networkStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkState.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationIpPortTranslationNatRuleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationIpPortTranslationNatRuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinationIpPortTranslationNatRuleSet.begin(); itr != m_destinationIpPortTranslationNatRuleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_directConnectGatewayIds.begin(); itr != m_directConnectGatewayIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_securityGroupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupSet.begin(); itr != m_securityGroupSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceIpTranslationNatRuleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIpTranslationNatRuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceIpTranslationNatRuleSet.begin(); itr != m_sourceIpTranslationNatRuleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isExclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExclusive, allocator);
    }

    if (m_exclusiveGatewayBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveGatewayBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusiveGatewayBandwidth, allocator);
    }

    if (m_restrictStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restrictState.c_str(), allocator).Move(), allocator);
    }

    if (m_natProductVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatProductVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natProductVersion, allocator);
    }

    if (m_smartScheduleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartScheduleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smartScheduleMode, allocator);
    }

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
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

vector<string> NatGateway::GetDirectConnectGatewayIds() const
{
    return m_directConnectGatewayIds;
}

void NatGateway::SetDirectConnectGatewayIds(const vector<string>& _directConnectGatewayIds)
{
    m_directConnectGatewayIds = _directConnectGatewayIds;
    m_directConnectGatewayIdsHasBeenSet = true;
}

bool NatGateway::DirectConnectGatewayIdsHasBeenSet() const
{
    return m_directConnectGatewayIdsHasBeenSet;
}

string NatGateway::GetSubnetId() const
{
    return m_subnetId;
}

void NatGateway::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NatGateway::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<Tag> NatGateway::GetTagSet() const
{
    return m_tagSet;
}

void NatGateway::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool NatGateway::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

vector<string> NatGateway::GetSecurityGroupSet() const
{
    return m_securityGroupSet;
}

void NatGateway::SetSecurityGroupSet(const vector<string>& _securityGroupSet)
{
    m_securityGroupSet = _securityGroupSet;
    m_securityGroupSetHasBeenSet = true;
}

bool NatGateway::SecurityGroupSetHasBeenSet() const
{
    return m_securityGroupSetHasBeenSet;
}

vector<SourceIpTranslationNatRule> NatGateway::GetSourceIpTranslationNatRuleSet() const
{
    return m_sourceIpTranslationNatRuleSet;
}

void NatGateway::SetSourceIpTranslationNatRuleSet(const vector<SourceIpTranslationNatRule>& _sourceIpTranslationNatRuleSet)
{
    m_sourceIpTranslationNatRuleSet = _sourceIpTranslationNatRuleSet;
    m_sourceIpTranslationNatRuleSetHasBeenSet = true;
}

bool NatGateway::SourceIpTranslationNatRuleSetHasBeenSet() const
{
    return m_sourceIpTranslationNatRuleSetHasBeenSet;
}

bool NatGateway::GetIsExclusive() const
{
    return m_isExclusive;
}

void NatGateway::SetIsExclusive(const bool& _isExclusive)
{
    m_isExclusive = _isExclusive;
    m_isExclusiveHasBeenSet = true;
}

bool NatGateway::IsExclusiveHasBeenSet() const
{
    return m_isExclusiveHasBeenSet;
}

uint64_t NatGateway::GetExclusiveGatewayBandwidth() const
{
    return m_exclusiveGatewayBandwidth;
}

void NatGateway::SetExclusiveGatewayBandwidth(const uint64_t& _exclusiveGatewayBandwidth)
{
    m_exclusiveGatewayBandwidth = _exclusiveGatewayBandwidth;
    m_exclusiveGatewayBandwidthHasBeenSet = true;
}

bool NatGateway::ExclusiveGatewayBandwidthHasBeenSet() const
{
    return m_exclusiveGatewayBandwidthHasBeenSet;
}

string NatGateway::GetRestrictState() const
{
    return m_restrictState;
}

void NatGateway::SetRestrictState(const string& _restrictState)
{
    m_restrictState = _restrictState;
    m_restrictStateHasBeenSet = true;
}

bool NatGateway::RestrictStateHasBeenSet() const
{
    return m_restrictStateHasBeenSet;
}

uint64_t NatGateway::GetNatProductVersion() const
{
    return m_natProductVersion;
}

void NatGateway::SetNatProductVersion(const uint64_t& _natProductVersion)
{
    m_natProductVersion = _natProductVersion;
    m_natProductVersionHasBeenSet = true;
}

bool NatGateway::NatProductVersionHasBeenSet() const
{
    return m_natProductVersionHasBeenSet;
}

bool NatGateway::GetSmartScheduleMode() const
{
    return m_smartScheduleMode;
}

void NatGateway::SetSmartScheduleMode(const bool& _smartScheduleMode)
{
    m_smartScheduleMode = _smartScheduleMode;
    m_smartScheduleModeHasBeenSet = true;
}

bool NatGateway::SmartScheduleModeHasBeenSet() const
{
    return m_smartScheduleModeHasBeenSet;
}

string NatGateway::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void NatGateway::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool NatGateway::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

