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

#include <tencentcloud/tdmq/v20200217/model/PulsarNetworkAccessPointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

PulsarNetworkAccessPointInfo::PulsarNetworkAccessPointInfo() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_accessPointsTypeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_securityPolicyHasBeenSet(false),
    m_standardAccessPointHasBeenSet(false),
    m_zoneNameHasBeenSet(false)
{
}

CoreInternalOutcome PulsarNetworkAccessPointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("RouteType") && !value["RouteType"].IsNull())
    {
        if (!value["RouteType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.RouteType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_routeType = value["RouteType"].GetUint64();
        m_routeTypeHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.OperationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = value["OperationType"].GetUint64();
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessPointsType") && !value["AccessPointsType"].IsNull())
    {
        if (!value["AccessPointsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.AccessPointsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointsType = string(value["AccessPointsType"].GetString());
        m_accessPointsTypeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("SecurityPolicy") && !value["SecurityPolicy"].IsNull())
    {
        if (!value["SecurityPolicy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.SecurityPolicy` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityPolicy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_securityPolicy.push_back(item);
        }
        m_securityPolicyHasBeenSet = true;
    }

    if (value.HasMember("StandardAccessPoint") && !value["StandardAccessPoint"].IsNull())
    {
        if (!value["StandardAccessPoint"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.StandardAccessPoint` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_standardAccessPoint = value["StandardAccessPoint"].GetBool();
        m_standardAccessPointHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarNetworkAccessPointInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PulsarNetworkAccessPointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeType, allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operationType, allocator);
    }

    if (m_accessPointsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointsType.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_securityPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityPolicy.begin(); itr != m_securityPolicy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_standardAccessPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardAccessPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standardAccessPoint, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

}


string PulsarNetworkAccessPointInfo::GetVpcId() const
{
    return m_vpcId;
}

void PulsarNetworkAccessPointInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PulsarNetworkAccessPointInfo::GetSubnetId() const
{
    return m_subnetId;
}

void PulsarNetworkAccessPointInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string PulsarNetworkAccessPointInfo::GetEndpoint() const
{
    return m_endpoint;
}

void PulsarNetworkAccessPointInfo::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string PulsarNetworkAccessPointInfo::GetInstanceId() const
{
    return m_instanceId;
}

void PulsarNetworkAccessPointInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t PulsarNetworkAccessPointInfo::GetRouteType() const
{
    return m_routeType;
}

void PulsarNetworkAccessPointInfo::SetRouteType(const uint64_t& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

uint64_t PulsarNetworkAccessPointInfo::GetOperationType() const
{
    return m_operationType;
}

void PulsarNetworkAccessPointInfo::SetOperationType(const uint64_t& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string PulsarNetworkAccessPointInfo::GetAccessPointsType() const
{
    return m_accessPointsType;
}

void PulsarNetworkAccessPointInfo::SetAccessPointsType(const string& _accessPointsType)
{
    m_accessPointsType = _accessPointsType;
    m_accessPointsTypeHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::AccessPointsTypeHasBeenSet() const
{
    return m_accessPointsTypeHasBeenSet;
}

int64_t PulsarNetworkAccessPointInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void PulsarNetworkAccessPointInfo::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

vector<SecurityPolicy> PulsarNetworkAccessPointInfo::GetSecurityPolicy() const
{
    return m_securityPolicy;
}

void PulsarNetworkAccessPointInfo::SetSecurityPolicy(const vector<SecurityPolicy>& _securityPolicy)
{
    m_securityPolicy = _securityPolicy;
    m_securityPolicyHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::SecurityPolicyHasBeenSet() const
{
    return m_securityPolicyHasBeenSet;
}

bool PulsarNetworkAccessPointInfo::GetStandardAccessPoint() const
{
    return m_standardAccessPoint;
}

void PulsarNetworkAccessPointInfo::SetStandardAccessPoint(const bool& _standardAccessPoint)
{
    m_standardAccessPoint = _standardAccessPoint;
    m_standardAccessPointHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::StandardAccessPointHasBeenSet() const
{
    return m_standardAccessPointHasBeenSet;
}

string PulsarNetworkAccessPointInfo::GetZoneName() const
{
    return m_zoneName;
}

void PulsarNetworkAccessPointInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool PulsarNetworkAccessPointInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

